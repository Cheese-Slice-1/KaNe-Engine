package ;

import js.html.Audio;

enum Note {
    A(o:Int);
    B(o:Int);
    C(o:Int);
    D(o:Int);
    E(o:Int);
    F(o:Int);
    G(o:Int);
}

class Engine {
    public static function play(note: Null<Note>, sym: String = "a"): String {
        var noteStr: String = "C4 a";

        if (note != null) {
            noteStr = Std.string(note) + " " + sym;
        }
        
        return noteStr;
    }
}
