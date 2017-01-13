import haxegon.*;
import haxe.ds.Vector;
import Entity;

using haxegon.MathExtensions;

enum GameState {
    GameState_PlayerTurn;
    GameState_PlayerVisual;
    GameState_EnemyVisual;
    GameState_TurnResult;
    GameState_ItemDrag;
}

enum CardType {
    CardType_None;
    CardType_Dude;
    CardType_Treasure;
    CardType_Nothing;
}

@:publicFields
class Card {
    var type = CardType_None;
    var covered = false;

    function new() {}
}

@:publicFields
class Game {
    static inline var tilesize = 64;
    static inline var cardmap_width = 4;
    static inline var cardmap_height = 3;
    static inline var card_width = 3;
    static inline var card_height = 5;
    static inline var map_width = cardmap_width * card_width;
    static inline var map_height = cardmap_height * card_height;
    static inline var inventory_slots = 5;
    static inline var inventory_x = 800;
    static inline var inventory_y = 64;
    static inline var inventory_slot_size = 64;

    var state = GameState_PlayerTurn;
    var state_timer = 0;
    static inline var visual_timer_max = 5;
    var drag_dx = 0;
    var drag_dy = 0;
    var dragged_item:Item = null;

    var flipped_card_last_turn_timer = 0;

    var walls = Data.bool_2dvector(map_width, map_height);
    var cards = new Vector<Vector<Card>>(cardmap_width);

    var player:Player;

    var inventory = new Vector<Item>(inventory_slots);

    var card_a = [
    [false, false, false, false, false],
    [false, false, true, false, false],
    [false, false, false, false, false],
    ];

    var card_b = [
    [false, true, false, false, false],
    [false, false, false, false, false],
    [false, false, false, true, false],
    ];

    var card_c = [
    [false, true, false, false, false],
    [false, false, false, false, false],
    [false, true, false, true, false],
    ];

    // start_index is used to skip EnumType_None

    function random_enum(enum_type:Dynamic, start_index:Int = 0):Dynamic {
        var k = Random.int(start_index, Type.allEnums(enum_type).length - 1);
        return Type.allEnums(enum_type)[k];
    }

    function new() {

        for (i in 0...inventory_slots) {
            inventory[i] = null;
        }

        // Set cards
        for (i in 0...cards.length) {
            cards[i] = new Vector<Card>(cardmap_height);

            for (j in 0...cards[i].length) {
                cards[i][j] = new Card();
                // NOTE: watch out for when you add more card types that should not be rare
                cards[i][j].type = random_enum(CardType, 1);
                cards[i][j].covered = true;
            }
        }
        cards[0][0].covered = false;
        cards[0][0].type = CardType_None;

        for (x in 0...cardmap_width) {
            for (y in 0...cardmap_height) {
                for (i in 0...card_width) {
                    for (j in 0...card_height) {
                        walls[x * card_width + i][y * card_height + j] = Random.chance(10);
                    }
                }

                if (cards[x][y].type == CardType_Dude) {
                    // Spawn dude
                    var dude = new Dude();
                    dude.x = x * card_width + Random.int(0, card_width - 1);
                    dude.y = y * card_height + Random.int(0, card_height - 1);
                    dude.real_x = dude.x * tilesize;
                    dude.real_y = dude.y * tilesize;
                    walls[dude.x][dude.y] = false;
                } else if (cards[x][y].type == CardType_Treasure) {
                    // Spawn random item
                    var item = new Item();
                    item.x = x * card_width + Random.int(0, card_width - 1);
                    item.y = y * card_height + Random.int(0, card_height - 1);
                    item.type = random_enum(ItemType, 1);
                    if (item.type == ItemType_Consumable) {
                        item.consumable_type = random_enum(ConsumableType);
                        item.value = 2;
                        item.tile = Tiles.Potion;
                    } else if (item.type == ItemType_Armor) {
                        item.armor_type = random_enum(ArmorType, 1);
                        item.value = 5;
                        switch (item.armor_type) {
                            case ArmorType_Chest: item.tile = Tiles.Armor;
                            default: item.tile = Tiles.Ball;
                        }
                    }
                    walls[item.x][item.y] = false;
                }
            }
        }

        player = new Player();
        player.x = 2;
        player.y = 1;
        player.real_x = player.x * tilesize;
        player.real_y = player.y * tilesize;
        walls[player.x][player.y] = false;
    }

    function a_star(x1:Int, y1:Int, x2:Int, y2:Int):Array<IntVector2> {
        function heuristic_score(x1:Int, y1:Int, x2:Int, y2:Int):Int {
            return Std.int(Math.abs(x2 - x1) + Math.abs(y2 - y1));
        }
        function path(prev:Vector<Vector<IntVector2>>, x:Int, y:Int):Array<IntVector2> {
            var current = {x: x, y: y};
            var temp = {x: x, y: y};
            var path:Array<IntVector2> = [{x: current.x, y: current.y}];
            while (prev[current.x][current.y].x != -1) {
                temp.x = current.x;
                temp.y = current.y;
                current.x = prev[temp.x][temp.y].x;
                current.y = prev[temp.x][temp.y].y;
                path.push({x: current.x, y: current.y});
            }
            return path;
        }

        var dude_map = Data.bool_2dvector(map_width, map_height, false);
        for (dude in Entity.get(Dude)) {
            dude_map[dude.x + dude.dx][dude.y + dude.dy] = true;
        }
        dude_map[x1][y1] = false; // ignore the dude itself
        var infinity = 10000000;
        var closed = Data.bool_2dvector(map_width, map_height, false);
        var open = Data.bool_2dvector(map_width, map_height, false);
        open[x1][y1] = true;
        var open_length = 1;
        var prev = new Vector<Vector<IntVector2>>(map_width);
        for (x in 0...map_width) {
            prev[x] = new Vector<IntVector2>(map_height);
            for (y in 0...map_height) {
                prev[x][y] = {x: -1, y: -1};
            }
        }

        var g_score = Data.int_2dvector(map_width, map_height, infinity);
        g_score[x1][y1] = 0;
        var f_score = Data.int_2dvector(map_width, map_height, infinity);

        f_score[x1][y1] = heuristic_score(x1, y1, x2, y2);

        while (open_length != 0) {
            var current = function() {
                var lowest_score = infinity;
                var lowest_node = {x: x1, y: y1};
                for (x in 0...map_width) {
                    for (y in 0...map_height) {
                        if (open[x][y] && f_score[x][y] <= lowest_score) {
                            lowest_node.x = x;
                            lowest_node.y = y;
                            lowest_score = f_score[x][y];
                        }
                    }
                }
                return lowest_node;
            }();

            if (current.x == x2 && current.y == y2) {
                return path(prev, current.x, current.y);
            }

            open[current.x][current.y] = false;
            open_length--;
            closed[current.x][current.y] = true;
            for (dx in -1...2) {
                for (dy in -1...2) {
                    if (Math.abs(dx) + Math.abs(dy) != 1) {
                        continue;
                    }
                    var neighbor_x = Std.int(current.x + dx);
                    var neighbor_y = Std.int(current.y + dy);
                    if (out_of_bounds(neighbor_x, neighbor_y) || walls[neighbor_x][neighbor_y] || dude_map[neighbor_x][neighbor_y]) {
                        continue;
                    }

                    if (closed[neighbor_x][neighbor_y]) {
                        continue;
                    }
                    var tentative_g_score = g_score[current.x][current.y] + 1;
                    if (!open[neighbor_x][neighbor_y]) {
                        open[neighbor_x][neighbor_y] = true;
                        open_length++;
                    } else if (tentative_g_score >= g_score[neighbor_x][neighbor_y]) {
                        continue;
                    }

                    prev[neighbor_x][neighbor_y].x = current.x;
                    prev[neighbor_x][neighbor_y].y = current.y;
                    g_score[neighbor_x][neighbor_y] = tentative_g_score;
                    f_score[neighbor_x][neighbor_y] = g_score[neighbor_x][neighbor_y] + heuristic_score(neighbor_x, neighbor_y, x2, y2);
                }
            }
        }
        return new Array<IntVector2>();
    }

    function render() {
        for (x in 0...map_width) {
            for (y in 0...map_height) {
                if (walls[x][y]) {
                    Gfx.draw_tile(x * tilesize, y * tilesize, Tiles.Wall);
                } else {
                    Gfx.draw_tile(x * tilesize, y * tilesize, Tiles.Space);
                }
            }
        }

        Gfx.line_thickness = 7;
        for (x in 0...cardmap_width) {
            Gfx.draw_line(x * card_width * tilesize, 0, x * card_width * tilesize, (cardmap_height - 1) * card_height * tilesize, Col.NIGHTBLUE);
        }
        for (y in 0...cardmap_height) {
            Gfx.draw_line(0, y * card_height * tilesize, (cardmap_width - 1) * card_width * tilesize, y * card_height * tilesize, Col.NIGHTBLUE);
        }
        Gfx.line_thickness = 1;


        Gfx.draw_tile(player.real_x, player.real_y, Tiles.Player);

        for (dude in Entity.get(Dude)) {
            Gfx.draw_tile(dude.real_x, dude.real_y, Tiles.Dude);
        }

        for (item in Entity.get(Item)) {
            if (item.on_ground) {
                Gfx.draw_tile(item.x * tilesize, item.y * tilesize, item.tile);
                Text.display(item.x * tilesize, item.y * tilesize, item.name);
            }
        }
        for (i in 0...inventory_slots) {
            Gfx.draw_box(inventory_x, inventory_y + i * inventory_slot_size, inventory_slot_size, inventory_slot_size, Col.WHITE);
            if (inventory[i] != null) {
                Gfx.draw_tile(inventory_x, inventory_y + i * inventory_slot_size, inventory[i].tile);
                Text.display(inventory_x, inventory_y + i * inventory_slot_size, inventory[i].name);
            }
        }

        for (x in 0...cardmap_width) {
            for (y in 0...cardmap_height) {
                if (cards[x][y].covered) {
                    var card_color = 0;
                    switch (cards[x][y].type) {
                        case CardType_Nothing: card_color = Col.BLUE;
                        case CardType_Dude: card_color = Col.RED;
                        case CardType_Treasure: card_color = Col.YELLOW;
                        case CardType_None: card_color = Col.PINK;
                    }
                    Gfx.fill_box(x * card_width * tilesize, y * card_height * tilesize,
                        card_width * tilesize, card_height * tilesize, card_color, 0.4);
                }
            }
        }

        if (dragged_item != null) {
            Gfx.draw_tile(Mouse.x - drag_dx, Mouse.y - drag_dy, dragged_item.tile);
            Text.display(Mouse.x - drag_dx, Mouse.y - drag_dy, dragged_item.name);
        }

        Text.display(800, 0, '${Gfx.render_fps()}');
        Text.display(800, 30, '${state}');

        Text.display(800, 500, 'Health: ${player.hp}');
        Text.display(800, 540, 'Armor: ${player.armor}');
    }

    function out_of_bounds(x:Int, y:Int):Bool {
        return x < 0 || y < 0 || x >= map_width || y >= map_height;
    }

    function space_is_free(x:Int, y:Int, ignored_entity:Dynamic = null):Bool {
        if (out_of_bounds(x, y)) {
            return false;
        }
        for (dude in Entity.get(Dude)) {
            if (dude != ignored_entity && dude.x + dude.dx == x && dude.y + dude.dy == y) {
                return false;
            }
        }
        if (player != ignored_entity) {
            if (player.moved && player.x + player.dx == x && player.y + player.dy == y) {
                return false;
            } else if (player.x == x && player.y == y) {
                return false;
            }
        }
        return !walls[x][y];
    }

    function update_player_turn() {

        function card_at_position(x:Int, y:Int):IntVector2 {
            return {x: Std.int(x / card_width), y: Std.int(y / card_height)};
        }

        // Replace random uncovered card
        if (Input.just_pressed(Key.SPACE)) {
            var uncovered_cards = new Array<IntVector2>();
            for (x in 0...cardmap_width) {
                for (y in 0...cardmap_height) {
                    if (!cards[x][y].covered) {
                        uncovered_cards.push({x: x, y: y});
                    }
                }
            }

            if (uncovered_cards.length > 1) {
                var k = 0;
                var player_card = card_at_position(player.x, player.y);
                var selected_card = player_card;
                while (selected_card.x == player_card.x && selected_card.y == player_card.y) {
                    k = Random.int(0, uncovered_cards.length - 1);
                    selected_card = uncovered_cards[k];
                }

                cards[selected_card.x][selected_card.y].covered = true;
                var removed_dudes = new Array<Dude>();
                for (dude in Entity.get(Dude)) {
                    var dude_card = card_at_position(dude.x, dude.y);
                    if (dude_card.x == selected_card.x && dude_card.y == selected_card.y) {
                        removed_dudes.push(dude);
                    }
                }
                var dudes = Entity.get(Dude);
                for (dude in removed_dudes) {
                    dudes.remove(dude);
                }


                var h = Random.int(1, 3);
                var new_card = card_a;
                switch (h) {
                    case 1: new_card = card_a;
                    case 2: new_card = card_b;
                    case 3: new_card = card_c;
                }
                for (x in 0...card_width) {
                    for (y in 0...card_height) {
                        walls[selected_card.x * card_width + x][selected_card.y * card_height + y] = new_card[x][y];
                    }
                }
            }
        }

        //
        // MOVEMENT
        //
        player.dx = 0;
        player.dy = 0;
        if (Input.pressed(Key.LEFT)) {
            player.dx--;
        }
        if (Input.pressed(Key.RIGHT)) {
            player.dx++;
        }
        if (Input.pressed(Key.UP)) {
            player.dy--;
        }
        if (Input.pressed(Key.DOWN)) {
            player.dy++;
        }
        if (flipped_card_last_turn_timer != 0) {
            player.dx = 0;
            player.dy = 0;
            flipped_card_last_turn_timer--;
        }
        // No diagonal movement
        if (player.dy != 0 && player.dx != 0) {
            player.dx = 0;
            player.dy = 0;
        }
        var move_x = player.x + player.dx;
        var move_y = player.y + player.dy;
        if (!out_of_bounds(move_x, move_y)) {
            var move_card = card_at_position(move_x, move_y);
            var player_flipped_card = false;
            if (cards[move_card.x][move_card.y].covered) {
                cards[move_card.x][move_card.y].covered = false;
                player_flipped_card = true;
                flipped_card_last_turn_timer = 5;

                for (dude in Entity.get(Dude)) {
                    var dude_card = card_at_position(dude.x, dude.y);
                    if (dude_card.x == move_card.x && dude_card.y == move_card.y) {
                        dude.active = true;
                    }
                }
            }
            if ((player.dx != 0 || player.dy != 0) && !player_flipped_card && space_is_free(move_x, move_y, player)) {
                state = GameState_PlayerVisual;
                player.moved = true;
                player.attacked = false;
            }
        }


        //
        // ATTACK
        //
        if (!player.moved) {
            player.dx = 0;
            player.dy = 0;
            if (Input.pressed(Key.A)) {
                player.dx--;
            }
            if (Input.pressed(Key.D)) {
                player.dx++;
            }
            if (Input.pressed(Key.W)) {
                player.dy--;
            }
            if (Input.pressed(Key.S)) {
                player.dy++;
            }

            // No diagonal attack
            if (player.dy != 0 && player.dx != 0) {
                player.dx = 0;
                player.dy = 0;
            }

            if (player.dx != 0 || player.dy != 0) { // attack even if no dude was hit
                state = GameState_PlayerVisual;
                player.attacked = true;
                player.moved = false;
            }

            if (player.attacked) {
                // Mark dude if he was killed, so that he doesn't take a turn
                for (dude in Entity.get(Dude)) {
                    if (dude.active && dude.x == player.x + player.dx && dude.y == player.y + player.dy) {
                        // TODO: health system for dudes
                        dude.dead = true;
                    }
                }
            }
        }

        // Enemy turn
        if (state != GameState_PlayerTurn) {
            for (dude in Entity.get(Dude)) {
                if (dude.active && !dude.dead) {
                    var dude_player_dx = player.x - dude.x;
                    var dude_player_dy = player.y - dude.y;
                    if (player.moved) {
                        dude_player_dx += player.dx;
                        dude_player_dy += player.dy;
                    }
                    // Attack if next to player
                    if (Math.abs(dude_player_dx) + Math.abs(dude_player_dy) == 1) {
                        dude.attacked = true;
                        dude.dx = Math.sign(dude_player_dx);
                        dude.dy = Math.sign(dude_player_dy);
                    }

                    // Chase player(updated position)
                    if (!dude.attacked) {
                        var path = a_star(dude.x, dude.y, player.x + player.dx, player.y + player.dy);
                        if (path.length > 1) {
                            dude.moved = true;
                            dude.dx = path[path.length - 2].x - dude.x;
                            dude.dy = path[path.length - 2].y - dude.y;
                        }
                    }
                }
            }
        }

        // Drag
        if (state == GameState_PlayerTurn) {
            if (Mouse.left_click()) {
                var x = Std.int(Mouse.x / tilesize);
                var y = Std.int(Mouse.y / tilesize);

                if (Mouse.x < inventory_x - 1) {
                    // Map items
                    for (item in Entity.get(Item)) {
                        if (item.x == x && item.y == y) {
                            dragged_item = item;
                            drag_dx = Mouse.x - x * tilesize;
                            drag_dy = Mouse.y - y * tilesize;
                            break;
                        }
                    }
                    if (dragged_item != null
                        && Math.abs(dragged_item.x - player.x) < 2
                        && Math.abs(dragged_item.y - player.y) < 2) {
                        state = GameState_ItemDrag;
                    dragged_item.on_ground = false;
                } else {
                    dragged_item = null;
                }
            } else {
                    // Inventory items
                    for (i in 0...inventory_slots) {
                        if (inventory[i] != null
                            && Math.point_box_intersect(Mouse.x, Mouse.y, inventory_x, inventory_y + i * inventory_slot_size,
                                inventory_slot_size, inventory_slot_size)) {
                            state = GameState_ItemDrag;
                        dragged_item = inventory[i];
                        inventory[i] = null;
                            // Unequip item
                            if (dragged_item.type == ItemType_Armor) {
                                player.armor -= dragged_item.value;
                            }
                            break;
                        }
                    }
                }
            }
        }

        render();
    }

    function update_item_drag() {
        if (Mouse.left_released()) {
            var put_in_inventory = false;
            if (Mouse.x > inventory_x - 5) {
                // Drop into inventory
                for (i in 0...inventory_slots) {
                    if (inventory[i] == null
                        && Math.point_box_intersect(Mouse.x, Mouse.y, inventory_x, inventory_y + i * inventory_slot_size,
                            inventory_slot_size, inventory_slot_size)) {
                        var can_put_in_inventory = true;
                        // Can equip only one type of armor
                        if (dragged_item.type == ItemType_Armor) {
                            for (i in 0...inventory_slots) {
                                if (inventory[i] != null && inventory[i].armor_type == dragged_item.armor_type) {
                                    can_put_in_inventory = false;
                                    break;
                                }
                            }
                        }

                        if (can_put_in_inventory) {
                            inventory[i] = dragged_item;
                            put_in_inventory = true;
                            dragged_item.x = -1;
                            dragged_item.y = -1;

                            // Equip item
                            if (dragged_item.type == ItemType_Armor) {
                                player.armor += dragged_item.value;
                            }
                        }

                        break;
                    }
                }
            }

            if (!put_in_inventory) {
                dragged_item.on_ground = true;
                // Change position on ground
                var drop_x = Std.int(Mouse.x / tilesize);
                var drop_y = Std.int(Mouse.y / tilesize);
                if (Math.abs(drop_x - player.x) < 2 && Math.abs(drop_y - player.y) < 2) {
                    dragged_item.x = drop_x;
                    dragged_item.y = drop_y;

                    // Consume item if dropped onto player
                    if (dragged_item.type == ItemType_Consumable && drop_x == player.x && drop_y == player.y) {
                        if (dragged_item.consumable_type == ConsumableType_Potion) {
                            player.hp += dragged_item.value;
                            if (player.hp > player.hp_max) {
                                player.hp = player.hp_max;
                            }
                            dragged_item.delete();
                        }
                    }
                }
            }

            dragged_item = null;
            state = GameState_PlayerTurn;
        }

        render();
    }

    function update_player_visual() {
        if (player.moved) {
            player.real_x = Std.int(player.x * tilesize + player.dx * tilesize * (state_timer / visual_timer_max));
            player.real_y = Std.int(player.y * tilesize + player.dy * tilesize * (state_timer / visual_timer_max));
        }

        render();

        if (player.attacked) {
            var attack_progress = 1 - Math.abs(state_timer / visual_timer_max - 0.5);
            var attack_dst = 50;
            Gfx.fill_circle((player.x + 0.5) * tilesize + player.dx * attack_progress * attack_dst,
                (player.y + 0.5) * tilesize + player.dy * attack_progress * attack_dst, 10, Col.RED);
        }


        state_timer++;
        if (state_timer > visual_timer_max) {
            state = GameState_EnemyVisual;
            state_timer = 0;
        }
    }

    function update_enemy_visual() {
        for (dude in Entity.get(Dude)) {
            if (dude.moved) {
                dude.real_x = Std.int(dude.x * tilesize + dude.dx * tilesize * (state_timer / visual_timer_max));
                dude.real_y = Std.int(dude.y * tilesize + dude.dy * tilesize * (state_timer / visual_timer_max));
            }
        }

        render();

        for (dude in Entity.get(Dude)) {
            if (dude.attacked) {
                var attack_progress = 1 - Math.abs(state_timer / visual_timer_max - 0.5);
                var attack_dst = 50;
                Gfx.fill_circle((dude.x + 0.5) * tilesize + dude.dx * attack_progress * attack_dst,
                    (dude.y + 0.5) * tilesize + dude.dy * attack_progress * attack_dst, 10, Col.BLUE);
            }
        }


        state_timer++;
        if (state_timer > visual_timer_max) {
            state = GameState_TurnResult;
            state_timer = 0;
        }
    }

    function update_turn_result() {
        if (player.moved) {
            player.x += player.dx;
            player.y += player.dy;
            player.real_x = player.x * tilesize;
            player.real_y = player.y * tilesize;
        } else if (player.attacked) {
            // Remove hit dude
            var hit_dude:Dude = null;
            for (dude in Entity.get(Dude)) {
                if (dude.active && dude.x == player.x + player.dx && dude.y == player.y + player.dy) {
                    hit_dude = dude;
                    break;
                }
            }
            if (hit_dude != null) {
                var dudes = Entity.get(Dude);
                dudes.remove(hit_dude);
            }
        }
        player.moved = false;
        player.attacked = false;
        player.dx = 0;
        player.dy = 0;


        for (dude in Entity.get(Dude)) {
            if (dude.active) {
                if (dude.moved) {
                    dude.x += dude.dx;
                    dude.y += dude.dy;
                    dude.real_x = dude.x * tilesize;
                    dude.real_y = dude.y * tilesize;
                } else if (dude.attacked) {
                    if (player.x == dude.x + dude.dx && player.y == dude.y + dude.dy) {
                        player.hp--;
                    }
                }
                dude.moved = false;
                dude.attacked = false;
                dude.dx = 0;
                dude.dy = 0;
            }
        }

        render();

        state = GameState_PlayerTurn;
    }

    function update() {
        switch (state) {
            case GameState_PlayerTurn: update_player_turn();
            case GameState_ItemDrag: update_item_drag();
            case GameState_PlayerVisual: update_player_visual();
            case GameState_EnemyVisual: update_enemy_visual();
            case GameState_TurnResult: update_turn_result();
        }
    }
}