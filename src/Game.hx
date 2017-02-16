import haxegon.*;
import haxe.ds.Vector;
import Entity;

using haxegon.MathExtensions;
using Lambda;

enum GameState {
    GameState_PlayerTurn;
    GameState_PlayerVisual;
    GameState_PlayerTurnResult;
    GameState_EnemyVisual;
    GameState_EnemyTurnResult;
    GameState_ItemDrag;
    GameState_CardFlip;
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
    var age = 0;
    var x = 0;
    var y = 0;

    function new() {}
}

@:publicFields
class Game {
    static inline var DRAW_COORDINATES = false;
    static inline var UPDATE_CARDS = true;
    static inline var DRAW_IMAGE_COVER = false;
    static inline var DRAW_TRANSPARENT_COVER = false;
    static inline var tilesize = 64;
    static inline var cardmap_width = 5;
    static inline var cardmap_height = 3;
    static inline var card_width = 3;
    static inline var card_height = 5;
    static inline var map_width = cardmap_width * card_width;
    static inline var map_height = cardmap_height * card_height;
    static inline var inventory_slots = 5;
    static inline var inventory_x = 1000;
    static inline var inventory_y = 64;
    static inline var inventory_slot_size = 64;

    var state = GameState_PlayerTurn;
    var state_timer = 0; // reset to 0 by state at completion
    static inline var visual_timer_max = 7;
    static inline var weapon_visual_timer_max = 10;
    static inline var card_flip_timer_max = 30;
    var flipped_card = {x: 0, y: 0};
    var drag_dx = 0;
    var drag_dy = 0;
    var dragged_item:Item = null;
    var hover_info = "";

    var walls = Data.bool_2dvector(map_width, map_height);
    var cards = new Vector<Vector<Card>>(cardmap_width);
    var cards_uncovered = 0;
    static inline var total_cards = cardmap_width * cardmap_height;
    static inline var card_update_timer_max = 10; // turns
    var card_update_timer = card_update_timer_max;

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

    var history = new Array<Array<String>>();

    // start_index is used to skip EnumType_None
    function random_enum(enum_type:Dynamic, start_index:Int = 0):Dynamic {
        var k = Random.int(start_index, Type.allEnums(enum_type).length - 1);
        return Type.allEnums(enum_type)[k];
    }

    function new() {
        Walls.generate();

        // Canvas for card flip animation
        Gfx.create_image("card_front", card_width * tilesize, card_height * tilesize);
        Gfx.create_image("card_back", card_width * tilesize, card_height * tilesize);
        Gfx.create_image("map_canvas", map_width * tilesize, map_height * tilesize);

        for (i in 0...inventory_slots) {
            inventory[i] = null;
        }

        // Set cards
        for (i in 0...cards.length) {
            cards[i] = new Vector<Card>(cardmap_height);

            for (j in 0...cards[i].length) {
                cards[i][j] = new Card();
                cards[i][j].x = i;
                cards[i][j].y = j;
                // NOTE: watch out for when you add more card types that should not be rare
                cards[i][j].type = random_enum(CardType, 1);
                cards[i][j].covered = true;
            }
        }
        cards[0][0].covered = false;
        cards_uncovered = 1;
        cards[0][0].type = CardType_None;

        for (x in 0...cardmap_width) {
            for (y in 0...cardmap_height) {
                generate_card(cards[x][y]);
            }
        }

        player = new Player();
        player.x = 2;
        player.y = 1;
        walls[player.x][player.y] = false;
        player.real_x = player.x * tilesize;
        player.real_y = player.y * tilesize;
    }

    function update_dude_info(dude: Dude) {
        dude.info = '${dude.name}\n${dude.hp}/${dude.hp_max}';
    }

    function serialize(entity:Dynamic) {
        var fields = Type.getInstanceFields(Type.getClass(entity));
        var fields_string = "";
        for (f in fields) {
            var field = Std.string(Reflect.field(entity, f));
            if (field.indexOf('function') != -1) {
                continue;
            }
            var enum_type = Type.resolveEnum(field.split('_')[0]);
            if (enum_type != null) {
                // for enums record it's index
                var enums = Type.allEnums(enum_type);
                for (i in 0...enums.length) {
                    if (Std.string(enums[i]) == field) {
                        // enumname_enumindex
                        fields_string += f + '=' + field.split('_')[0] + '_' + i + '|';
                        break;
                    }
                }
            } else {
                fields_string += f + '=' + field + '|';
            }
        }
        return fields_string;
    }

    function unserialize(entity:Dynamic, fields_string:String) {
        var fields = fields_string.split('|');
        fields.splice(fields.length - 1, 1);
        for (f in fields) {
            var pair = f.split('=');
            if ((~/^\d+$/).match(pair[0])) {
                // Number
                Reflect.setField(entity, pair[0], Std.parseFloat(pair[1]));
            } else if (pair[1] == 'false') {
                // Bool
                Reflect.setField(entity, pair[0], false);
            } else if (pair[1] == 'true') {
                // Bool
                Reflect.setField(entity, pair[0], true);
            } else if (Type.resolveEnum(pair[1].split('_')[0]) != null) {
                // Enum
                var enum_type = Type.resolveEnum(pair[1].split('_')[0]);
                var enum_index = Std.parseInt(pair[1].split('_')[1]);
                var enum_value = Type.allEnums(enum_type)[enum_index];
                Reflect.setField(entity, pair[0], enum_value);
            } else {
                // String
                Reflect.setField(entity, pair[0], pair[1]);
            }
        }
    }

    function generate_card(card:Card) {
        var k = Random.int(0, Walls.all.length - 1);
        var walls_preset = Walls.all[k];
        for (i in 0...card_width) {
            for (j in 0...card_height) {
                walls[card.x * card_width + i][card.y * card_height + j] = (walls_preset[i][j] == 1);
            }
        }

        function random_free_cell(card_x: Int, card_y: Int): IntVector2 {
            var out: IntVector2 = {x: 0, y: 0};
            var x_start = card.x * card_width;
            var x_end = x_start + card_width;
            var y_start = card.y * card_height;
            var y_end = y_start + card_height;
            
            var free_cell_amount = 0;
            for (x in x_start...x_end) {
                for (y in y_start...y_end) {
                    if (!walls[x][y]) {
                        free_cell_amount++;
                    }
                }
            }

            var k = Random.int(0, free_cell_amount - 1);
            var i = 0;
            for (x in x_start...x_end) {
                for (y in y_start...y_end) {
                    if (!walls[x][y]) {
                        if (i == k) {
                            out.x = x;
                            out.y = y;
                            return out;
                        }
                        i++;
                    }
                }
            }

            return out;
        }

        if (card.type == CardType_Dude) {
            // Spawn dude
            var dude = new Dude();
            var free_cell = random_free_cell(card.x, card.y);
            dude.x = free_cell.x;
            dude.y = free_cell.y;
            dude.real_x = dude.x * tilesize;
            dude.real_y = dude.y * tilesize;
            walls[dude.x][dude.y] = false;
            update_dude_info(dude);
        } else if (card.type == CardType_Treasure) {
            // Spawn random item
            var item = new Item();
            var free_cell = random_free_cell(card.x, card.y);
            item.x = free_cell.x;
            item.y = free_cell.y;
            item.type = random_enum(ItemType, 1);
            
            item.info += '\nI am ${item.type}!';

            if (item.type == ItemType_Consumable) {
                item.consumable_type = random_enum(ConsumableType);
                item.value = 2;
                item.tile = Tiles.Potion;
            } else if (item.type == ItemType_Armor) {
                item.armor_type = random_enum(ArmorType, 1);
                item.value = 5;
                switch (item.armor_type) {
                    case ArmorType_Chest: item.tile = Tiles.Chest;
                    case ArmorType_Head: item.tile = Tiles.Head;
                    case ArmorType_Legs: item.tile = Tiles.Legs;
                    default: item.tile = Tiles.Wilhelm;
                }
            } else if (item.type == ItemType_Weapon) {
                item.weapon_type = random_enum(WeaponType, 1);
                switch (item.weapon_type) {
                    case WeaponType_Sword: item.tile = Tiles.Sword;
                    case WeaponType_Spear: item.tile = Tiles.Spear;
                    case WeaponType_Bow: item.tile = Tiles.Bow;
                    default: item.tile = Tiles.Wilhelm;
                }
            }
            walls[item.x][item.y] = false;
        }
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

        var move_map = Data.bool_2dvector(map_width, map_height, true);
        for (dude in Entity.get(Dude)) {
            move_map[dude.x + dude.dx][dude.y + dude.dy] = false;
        }
        move_map[x1][y1] = false; // ignore the dude itself
        for (x in 0...map_width) {
            for (y in 0...map_height) {
                if (walls[x][y]) {
                    move_map[x][y] = false;
                }
            }
        }
        for (x in 0...cardmap_width) {
            for (y in 0...cardmap_height) {
                if (cards[x][y].covered) {
                    for (x2 in 0...card_width) {
                        for (y2 in 0...card_height) {
                            move_map[x * card_width + x2][y * card_height + y2] = false;
                        }
                    }
                }
            }
        }
        var infinity = 10000000;
        var closed = Data.bool_2dvector(map_width, map_height, false);
        var open = Data.bool_2dvector(map_width, map_height, false);
        open[x1][y1] = true;
        for (x in 0...cardmap_width) {
            for (y in 0...cardmap_height) {
                if (!move_map[x][y]) {
                    open[x][y] = false;
                }
            }
        }
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
                    if (out_of_bounds(neighbor_x, neighbor_y) || !move_map[neighbor_x][neighbor_y]) {
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

        if (DRAW_COORDINATES) {
            for (dx in -2...3) {
                for (dy in -2...3) {
                    Text.display((player.x + dx) * tilesize + 5, (player.y + dy) * tilesize + 10, '${(player.x + dx)},${(player.y + dy)}');
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

        Gfx.draw_tile(player.real_x, player.real_y, Tiles.Player);

        for (dude in Entity.get(Dude)) {
            if (!dude.dead) {
                Gfx.draw_tile(dude.real_x, dude.real_y, Tiles.Dude);
                Text.display(dude.real_x, dude.real_y, '${dude.hp}/${dude.hp_max}', Col.WHITE);
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
                    if (DRAW_TRANSPARENT_COVER) {
                        Gfx.fill_box(x * card_width * tilesize, y * card_height * tilesize,
                            card_width * tilesize, card_height * tilesize, card_color, 0.8);
                    } else if (DRAW_IMAGE_COVER) {
                        Gfx.draw_image(x * card_width * tilesize, y * card_height * tilesize, "card");
                    }
                }
            }
        }

        if (dragged_item != null) {
            Gfx.draw_tile(Mouse.x - drag_dx, Mouse.y - drag_dy, dragged_item.tile);
            Text.display(Mouse.x - drag_dx, Mouse.y - drag_dy, dragged_item.name);
        }

        Text.display(inventory_x, 0, '${Gfx.render_fps()}');
        Text.display(inventory_x, 30, '${state}');

        Text.display(inventory_x, 500, 'Health: ${player.hp}');
        Text.display(inventory_x, 540, 'Armor: ${player.armor}');
        Text.display(inventory_x, 600, hover_info);
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
        // No diagonal movement
        if (player.dy != 0 && player.dx != 0) {
            player.dx = 0;
            player.dy = 0;
        }
        var move_x = player.x + player.dx;
        var move_y = player.y + player.dy;
        if (!out_of_bounds(move_x, move_y)) {
            var move_card = card_at_position(move_x, move_y);
            if (cards[move_card.x][move_card.y].covered) {
                state = GameState_CardFlip;
                flipped_card.x = move_card.x;
                flipped_card.y = move_card.y;

                // Draw flipped card sides for animation
                Gfx.draw_to_image("map_canvas");
                Gfx.clear_screen(Col.BLACK);
                render();
                Gfx.draw_to_image("card_back");
                Gfx.clear_screen(Col.BLACK);
                Gfx.draw_image(-move_card.x * card_width * tilesize, -move_card.y * card_height * tilesize, "map_canvas");

                cards[move_card.x][move_card.y].covered = false;
                Gfx.draw_to_image("map_canvas");
                Gfx.clear_screen(Col.BLACK);
                render();
                cards[move_card.x][move_card.y].covered = true;
                Gfx.draw_to_image("card_front");
                Gfx.clear_screen(Col.BLACK);
                Gfx.draw_image(-move_card.x * card_width * tilesize, -move_card.y * card_height * tilesize, "map_canvas");

                Gfx.draw_to_screen();


                for (dude in Entity.get(Dude)) {
                    var dude_card = card_at_position(dude.x, dude.y);
                    if (dude_card.x == move_card.x && dude_card.y == move_card.y) {
                        dude.active = true;
                    }
                }
            }
            if ((player.dx != 0 || player.dy != 0) && state != GameState_CardFlip && space_is_free(move_x, move_y, player)) {
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
                var slot_index = 0;
                for (i in 0...inventory_slots) {
                    if (Math.point_box_intersect(Mouse.x, Mouse.y, inventory_x, inventory_y + i * inventory_slot_size,
                        inventory_slot_size, inventory_slot_size)) 
                    {
                        slot_index = i;
                        break;
                    }
                }
                var can_put_in_inventory = true;

                // Can equip only one type of armor or weapon
                if (dragged_item.type == ItemType_Armor) {
                    for (i in 0...inventory_slots) {
                        if (i != slot_index 
                            && inventory[i] != null 
                            && inventory[i].type == ItemType_Armor 
                            && inventory[i].armor_type == dragged_item.armor_type) 
                        {
                            can_put_in_inventory = false;
                            break;
                        }
                    }
                }
                if (dragged_item.type == ItemType_Weapon) {
                    for (i in 0...inventory_slots) {
                        if (i != slot_index 
                            && inventory[i] != null 
                            && inventory[i].type == ItemType_Weapon 
                            && inventory[i].weapon_type == dragged_item.weapon_type) 
                        {
                            can_put_in_inventory = false;
                            break;
                        }
                    }
                }     

                if (can_put_in_inventory) {
                    // Switch items if current slot isn't empty
                    if (inventory[slot_index] != null) {
                        inventory[slot_index].x = dragged_item.x;
                        inventory[slot_index].y = dragged_item.y;
                        inventory[slot_index].on_ground = true;
                    }

                    inventory[slot_index] = dragged_item;
                    put_in_inventory = true;
                    dragged_item.x = -1;
                    dragged_item.y = -1;

                    // Equip item
                    if (dragged_item.type == ItemType_Armor) {
                        player.armor += dragged_item.value;
                    } else if (dragged_item.type == ItemType_Weapon) {
                        player.weapon = dragged_item.weapon_type;
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

            // check if no weapon is equipped
            var no_weapon = true;
            for (i in 0...inventory_slots) {
                if (inventory[i] != null && inventory[i].type == ItemType_Weapon && inventory[i].weapon_type != WeaponType_None) {
                    no_weapon = false;
                    break;
                }
            }
            if (no_weapon) {
                player.weapon = WeaponType_None;
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

        // Draw weapon
        var angle = 0.0;
        if (player.dx == 1 && player.dy == 0) {
            angle = 0;
        } else if (player.dx == 0 && player.dy == 1) {
            angle = 90;
        } else if (player.dx == -1 && player.dy == 0) {
            angle = 180;
        } else if (player.dx == 0 && player.dy == -1) {
            angle = 270;
        }
        if (player.attacked) {
            switch (player.weapon) {
                case WeaponType_None: {
                    var attack_progress = 1 - Math.abs(state_timer / weapon_visual_timer_max - 0.5);
                    var attack_dst = 50;
                    Gfx.fill_circle((player.x + 0.5) * tilesize + player.dx * attack_progress * attack_dst,
                        (player.y + 0.5) * tilesize + player.dy * attack_progress * attack_dst, 10, Col.RED);
                }
                case WeaponType_Sword: {
                    var attack_progress = 1 - Math.abs(state_timer / weapon_visual_timer_max - 0.5);
                    var attack_dst = 50;
                    var tri = [0, tilesize / 4, 0, -tilesize / 4, tilesize / 4, 0];
                    Math.rotate_vertices(tri, 0, 0, angle);
                    Math.translate_vertices(tri, 
                        (player.x + 0.5) * tilesize + player.dx * attack_progress * attack_dst,
                        (player.y + 0.5) * tilesize + player.dy * attack_progress * attack_dst);
                    Gfx.fill_tri_array(tri, Col.RED);
                }
                case WeaponType_Spear: {
                    var attack_progress = 1 - Math.abs(state_timer / weapon_visual_timer_max - 0.5);
                    var attack_dst = 100;
                    var tri = [0, tilesize / 8, 0, -tilesize / 8, tilesize / 3, 0];
                    Math.rotate_vertices(tri, 0, 0, angle);
                    Math.translate_vertices(tri, 
                        (player.x + 0.5) * tilesize + player.dx * attack_progress * attack_dst,
                        (player.y + 0.5) * tilesize + player.dy * attack_progress * attack_dst);
                    Gfx.fill_tri_array(tri, Col.RED);
                }
                case WeaponType_Bow: {
                    var attack_progress = 1 - Math.abs(state_timer / weapon_visual_timer_max - 0.5);
                    var attack_dst = 200;
                    var tri = [0, tilesize / 16, 0, -tilesize / 16, tilesize / 4, 0];
                    Math.rotate_vertices(tri, 0, 0, angle);
                    Math.translate_vertices(tri, 
                        (player.x + 0.5) * tilesize + player.dx * attack_progress * attack_dst,
                        (player.y + 0.5) * tilesize + player.dy * attack_progress * attack_dst);
                    Gfx.fill_tri_array(tri, Col.RED);
                }
            }
        }


        state_timer++;
        var max = visual_timer_max;
        if (player.attacked) {
            max = weapon_visual_timer_max;
        }
        if (state_timer > max) {
            state = GameState_PlayerTurnResult;
            state_timer = 0;
        }
    }

    function update_player_turn_result() {
        if (player.moved) {
            player.x += player.dx;
            player.y += player.dy;
            player.real_x = player.x * tilesize;
            player.real_y = player.y * tilesize;
        } else if (player.attacked) {
            // decrease hp of hit dude, make him dead if hp = 0
            var hit_dude:Dude = null;
            var hit_cells: Array<IntVector2>;
            switch (player.weapon) {
                case WeaponType_None: {
                    hit_cells = [{x: player.x + player.dx, y: player.y + player.dy}];
                }
                case WeaponType_Sword: {
                    hit_cells = [{x: player.x + player.dx, y: player.y + player.dy}];
                }
                case WeaponType_Spear: {
                    hit_cells = [for (i in 1...3) {x: player.x + i * player.dx, y: player.y + i * player.dy}];
                }
                case WeaponType_Bow: {
                    hit_cells = [for (i in 1...5) {x: player.x + i * player.dx, y: player.y + i * player.dy}];
                }
            }
            for (dude in Entity.get(Dude)) {
                if (dude.active) {
                    for (cell in hit_cells) {
                        if (dude.x == cell.x && dude.y == cell.y) {
                            hit_dude = dude;
                            break;
                        }
                    }
                    if (hit_dude != null) {
                        break;
                    }
                }
            }
            if (hit_dude != null) {
                hit_dude.hp--;
                if (hit_dude.hp <= 0) {
                    hit_dude.dead = true;
                }
            }
        }
        player.moved = false;
        player.attacked = false;
        player.dx = 0;
        player.dy = 0;

        // Enemy turn
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

                // Otherwise chase player(to the new position)
                if (!dude.attacked) {
                    var path = a_star(dude.x, dude.y, player.x, player.y);
                    if (path.length > 1) {
                        dude.moved = true;
                        dude.dx = path[path.length - 2].x - dude.x;
                        dude.dy = path[path.length - 2].y - dude.y;
                    }
                }
            }
        }

        // Update dude hp in info
        for (dude in Entity.get(Dude)) {
            update_dude_info(dude);
        }

        render();

        state = GameState_EnemyVisual;
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
            if (dude.dead) {
                Gfx.rotation(20 * state_timer / visual_timer_max);
                Gfx.draw_tile(dude.real_x, dude.real_y, Tiles.Dude);
                Gfx.rotation(0);
            } else if (dude.attacked) {
                var attack_progress = 1 - Math.abs(state_timer / visual_timer_max - 0.5);
                var attack_dst = 50;
                Gfx.fill_circle((dude.x + 0.5) * tilesize + dude.dx * attack_progress * attack_dst,
                    (dude.y + 0.5) * tilesize + dude.dy * attack_progress * attack_dst, 10, Col.BLUE);
            }
        }


        state_timer++;
        if (state_timer > visual_timer_max) {
            state = GameState_EnemyTurnResult;
            state_timer = 0;
        }
    }

    function update_enemy_turn_result() {
        var dead_dudes = new Array<Dude>();
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
                } else if (dude.dead) {
                    dead_dudes.push(dude);
                }
                dude.moved = false;
                dude.attacked = false;
                dude.dx = 0;
                dude.dy = 0;
            }
        }

        var dudes = Entity.get(Dude);
        for (dude in dead_dudes) {
            dudes.remove(dude);
        }

        for (x in 0...cardmap_width) {
            for (y in 0...cardmap_height) {
                if (!cards[x][y].covered) {
                    cards[x][y].age++;
                }
            }
        }

        var uncovered_percentage = cards_uncovered / total_cards;
        // Start updating cards when more than 30% cards are uncovered
        if (uncovered_percentage > 0.3 && UPDATE_CARDS) {
            card_update_timer--;
            if (uncovered_percentage > 0.7) {
                // If more than 70% cards are uncovered, update faster
                card_update_timer--;
            }
            if (card_update_timer <= 0) {
                // Update a card
                var card_queue = new Array<Card>();
                for (x in 0...cardmap_width) {
                    for (y in 0...cardmap_height) {
                        if (!cards[x][y].covered) {
                            card_queue.push(cards[x][y]);
                        }
                    }
                }
                card_queue.sort(function(x, y) {return y.age - x.age;});

                function is_empty(card:Card) {
                    if (Std.int(player.x / card_width) == card.x && Std.int(player.y / card_height) == card.y) {
                        return false;
                    }
                    for (dude in Entity.get(Dude)) {
                        if (Std.int(dude.x / card_width) == card.x && Std.int(dude.y / card_height) == card.y) {
                            return false;
                        }
                    }
                    return true;
                }

                function is_completed(card:Card) {
                    // TODO: add check for treasure cards, boss cards, etc.
                    return true;
                }

                var updated_card:Card = null;
                for (card in card_queue) {
                    if (is_empty(card) && is_completed(card)) {
                        updated_card = card;
                        break;
                    }
                }

                if (updated_card != null) {
                    card_update_timer = card_update_timer_max;
                    updated_card.type = random_enum(CardType, 1);
                    updated_card.covered = true;
                    generate_card(updated_card);
                    cards_uncovered--;
                }
            }
        }

        render();

        state = GameState_PlayerTurn;


        var entity_states = new Array<String>();
        entity_states.push(serialize(player));
        for (dude in Entity.get(Dude)) {
            entity_states.push(serialize(dude));
        }
        history.push(entity_states);
    }

    function update_card_flip() {
        render();
        Gfx.fill_box(flipped_card.x * card_width * tilesize, flipped_card.y * card_height * tilesize, card_width * tilesize, card_height * tilesize, Col.BLACK);
        if (state_timer / card_flip_timer_max < 0.5) {
            Gfx.scale(1 - 2 * state_timer / card_flip_timer_max, 1);
            Gfx.draw_image(flipped_card.x * card_width * tilesize, flipped_card.y * card_height * tilesize, "card_back");
            Gfx.scale(1, 1);
        } else {
            Gfx.scale(2 * (state_timer / card_flip_timer_max - 0.5), 1);
            Gfx.draw_image(flipped_card.x * card_width * tilesize, flipped_card.y * card_height * tilesize, "card_front");
            Gfx.scale(1, 1);
        }
        Text.display(0, 0, '${state_timer}', Col.YELLOW);

        state_timer++;
        if (state_timer > card_flip_timer_max) {
            state = GameState_PlayerTurn;
            state_timer = 0;
            cards[flipped_card.x][flipped_card.y].covered = false;
            cards_uncovered++;
        }
    }

    function update() {
        if (Input.just_pressed(Key.Z) && history.length > 0 && state == GameState_PlayerTurn) {
            var previous_state = history.pop();
            unserialize(player, previous_state[0]);
            player.dx = 0;
            player.dy = 0;
            Entity.get(Dude).splice(0, Entity.get(Dude).length);
            for (i in 1...previous_state.length) {
                var dude = new Dude();
                unserialize(dude, previous_state[i]);
                dude.dx = 0;
                dude.dy = 0;
            }
        }

        // Item info on hover
        // Enemies takes precedence over items
        var hover_x = Std.int(Mouse.x / tilesize);
        var hover_y = Std.int(Mouse.y / tilesize);
        hover_info = "";
        if (!out_of_bounds(hover_x, hover_y)) {
            for (dude in Entity.get(Dude)) {
                if (dude.active && hover_x == dude.x && hover_y == dude.y) {
                    hover_info = dude.info;
                    break;
                }
            }
            if (hover_info == "") {
                for (item in Entity.get(Item)) {
                    if (item.on_ground && hover_x == item.x && hover_y == item.y) {
                        hover_info = item.info;
                        break;
                    }
                }
            }
        }

        switch (state) {
            case GameState_PlayerTurn: update_player_turn();
            case GameState_ItemDrag: update_item_drag();
            case GameState_PlayerVisual: update_player_visual();
            case GameState_PlayerTurnResult: update_player_turn_result();
            case GameState_EnemyVisual: update_enemy_visual();
            case GameState_EnemyTurnResult: update_enemy_turn_result();
            case GameState_CardFlip: update_card_flip();
        }

        // GUI.enum_setter(800, 100, function(x) { player.weapon = x; }, player.weapon, WeaponType);
    }
}