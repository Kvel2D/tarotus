import haxegon.*;
import haxegon.IntVector2;
import haxe.ds.ObjectMap;


enum DoorColor {
	DoorColor_White;
	DoorColor_Black;
}


@:publicFields
class Entity {
	static var all = new Array<Dynamic>();
	static var entities = new ObjectMap<Dynamic, Array<Dynamic>>();

	static function get(type: Dynamic): Array<Dynamic> {
		if (!entities.exists(type)) {
			entities.set(type, new Array<Dynamic>());
		}
		return entities.get(type);
	}

	static var id_max = 0;
	var id = 0;

	function new() {
		var type = Type.getClass(this);
		if (!entities.exists(type)) {
			entities.set(type, new Array<Dynamic>());
		}
		entities.get(type).push(this);
		all.push(this);

		id = id_max;
		id_max++;
	}

	function delete() {
		for (type in entities) {
			for (entity in type) {
				if (entity == this)
				{
					type.remove(this);
					break;
				}
			}
		}
		all.remove(this);
	}
}

class Player extends Entity {
	var x = 0;
	var y = 0;
	var real_x = 0;
	var real_y = 0;
	var attacked = false;
	var moved = false;
	var dx = 0;
	var dy = 0;

	var hp = 5;
	var hp_max = 10;
	var armor = 0;
}

class Dude extends Entity {
	var x = 0;
	var y = 0;
	var real_x = 0;
	var real_y = 0;
	var active = false;
	var attacked = false;
	var moved = false;
	var dx = 0;
	var dy = 0;
	var dead = false;
}

enum ItemType {
	ItemType_None;
	ItemType_Armor;
	ItemType_Consumable;
}

enum ConsumableType {
	ConsumableType_None;
	ConsumableType_Potion;
}

enum ArmorType {
	ArmorType_None;
	ArmorType_Chest;
	ArmorType_Legs;
	ArmorType_Head;
}

class Item extends Entity {
	var x = 0;
	var y = 0;
	var name = "";
	var tile = 0;
	var on_ground = true;

	var type = ItemType_None;
	var armor_type = ArmorType_None;
	var consumable_type = ConsumableType_None;
	var value = 0;
}