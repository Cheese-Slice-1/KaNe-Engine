package ;

import js.html.XMLHttpRequest;
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
    // TODO: make it actually do something
    public static function play(note: Null<Note>, sym: String = "a"): String {
        var noteStr: String = "C(4)A";

        if (note != null) {
            noteStr = Std.string(note) + sym.toUpperCase();
        }
        
        return noteStr; // literally useless lmao
    }

    static function loadAndPlayAudio(url: String, pitch: Float): Void {
        if (pitch == 0.0) {
            return;
        }

        // TODO: load audio from local machine and play it somehow??

        trace("Loading audio from " + url + " with pitch " + pitch);
    }

    static function getPitchFromNote(note: Note): Float {
        switch (note) {
            case Note.A(o):
                var ret = 440.0000;
                if (o == 4) {
                    return ret;
                } else if (o < -1) {
                    return 0.0;
                }

                try {
                    ret = ret / Math.pow(2, 4 - o);
                } catch (e) {
                    trace("Error: " + e.message);
                    return 0.0;
                }

                return ret;
            case Note.B(o):
                return 15.43;
            case Note.C(o):
                return 523.25;
            case Note.D(o):
                return 587.33;
            case Note.E(o):
                return 659.25;
            case Note.F(o):
                return 698.46;
            case Note.G(o):
                return 783.99;
        }
    }
}
