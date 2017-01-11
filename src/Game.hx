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
    var dragged_item: Item = null;
    
    var flipped_card_last_turn_timer = 0;

    var walls = Data.bool_2dvector(map_width, map_height);
    var cards = Data.bool_2dvector(cardmap_width, cardmap_height); // false if covered

    var player: Player;

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

    function new() {
        for (i in 0...inventory_slots) {
            inventory[i] = null;
        }

        for (x in 0...map_width) {
            for (y in 0...map_height) {
                if (Random.chance(5)) {
                    walls[x][y] = true;
                }
                if (Random.chance(3)) {
                    var dude = new Dude();
                    dude.x = x;
                    dude.y = y;
                    dude.real_x = x * tilesize;
                    dude.real_y = y * tilesize;
                    walls[x][y] = false;
                }
            }
        }

        player = new Player();
        player.x = 2;
        player.y = 1;
        player.real_x = player.x * tilesize;
        player.real_y = player.y * tilesize;
        walls[player.x][player.y] = false;

        var item = new Item();
        item.x = 2;
        item.y = 3;
        item.name = "Item";
        item.tile = Tiles.Ball;

        var armor_item = new Item();
        armor_item.x = 3;
        armor_item.y = 3;
        armor_item.name = "Armor";
        armor_item.type = ItemType_Armor;
        armor_item.armor_type = ArmorType_Chest;
        armor_item.value = 5;
        armor_item.tile = Tiles.Armor;

        var armor_item2 = new Item();
        armor_item2.x = 4;
        armor_item2.y = 3;
        armor_item2.name = "Armor";
        armor_item2.type = ItemType_Armor;
        armor_item2.armor_type = ArmorType_Chest;
        armor_item2.value = 5;
        armor_item2.tile = Tiles.Armor;

        var helmet = new Item();
        helmet.x = 4;
        helmet.y = 2;
        helmet.name = "Armor";
        helmet.type = ItemType_Armor;
        helmet.armor_type = ArmorType_Head;
        helmet.value = 5;
        helmet.tile = Tiles.Ball;

        var potion = new Item();
        potion.x = 1;
        potion.y = 1;
        potion.name = "Potion";
        potion.type = ItemType_Consumable;
        potion.consumable_type = ConsumableType_Potion;
        potion.value = 2;
        potion.tile = Tiles.Potion;

        cards[0][0] = true;
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
                if (!cards[x][y]) {
                    Gfx.fill_box(x * card_width * tilesize, y * card_height * tilesize, 
                        card_width * tilesize, card_height * tilesize, Col.NIGHTBLUE, 0.8);
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

    function out_of_bounds(x: Int, y: Int): Bool {
        return x < 0 || y < 0 || x >= map_width || y >= map_height;
    }

    function space_is_free(x: Int, y: Int, ignored_entity: Dynamic = null): Bool {
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

        function card_at_position(x: Int, y: Int): IntVector2 {
            return {x: Std.int(x / card_width), y: Std.int(y / card_height)};
        }

        // Replace random uncovered card
        if (Input.just_pressed(Key.SPACE)) {
            var uncovered_cards = new Array<IntVector2>();
            for (x in 0...cardmap_width) {
                for (y in 0...cardmap_height) {
                    if (cards[x][y]) {
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

                cards[selected_card.x][selected_card.y] = false;
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
        var move_card = card_at_position(move_x, move_y);
        var player_flipped_card = false;
        if (!cards[move_card.x][move_card.y]) {
            cards[move_card.x][move_card.y] = true;
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
        }

        // Enemy turn
        if (state != GameState_PlayerTurn) {
            for (dude in Entity.get(Dude)) {
                if (dude.active) {
                    // Chase player(new position)
                    dude.dx = player.x - dude.x;
                    dude.dy = player.y - dude.y;
                    if (player.moved) {
                        dude.dx += player.dx;
                        dude.dy += player.dy;
                    }
                    if (Math.abs(dude.dx) > Math.abs(dude.dy)) {
                        dude.dy = 0;
                    } else if (Math.abs(dude.dx) == Math.abs(dude.dy)) {
                        if (Random.chance(50)) {
                            dude.dx = 0;
                        } else {
                            dude.dy = 0;
                        }
                    } else {
                        dude.dx = 0;
                    }
                    dude.dx = Math.sign(dude.dx);
                    dude.dy = Math.sign(dude.dy);

                    if (space_is_free(dude.x + dude.dx, dude.y + dude.dy, dude)) {
                        dude.moved = true;
                    } else {
                        dude.dx = 0;
                        dude.dy = 0;
                    }
                }
            }
        }

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
                        && Math.abs(dragged_item.y - player.y) < 2) 
                    {
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
                                inventory_slot_size, inventory_slot_size))
                        {
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
                            inventory_slot_size, inventory_slot_size))
                    {
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
            var hit_dude: Dude = null;
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
                    // TODO: Hit player
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