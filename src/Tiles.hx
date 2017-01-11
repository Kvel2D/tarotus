
@:publicFields
class Tiles {
    static inline var tileset_width = 10;
    static inline function tilenum(x: Int, y: Int): Int {
        return y * tileset_width + x;
    }

    static inline var Player = tilenum(0, 0);
    static inline var Wall = tilenum(1, 0);
    static inline var Space = tilenum(2, 0);
    static inline var Dude = tilenum(3, 0);
    static inline var Box = tilenum(4, 0);
    static inline var Ball = tilenum(5, 0);
    static inline var Stick = tilenum(6, 0);
    static inline var Armor = tilenum(7, 0);
    static inline var Potion = tilenum(8, 0);
}