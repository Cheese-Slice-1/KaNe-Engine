package engine.parts;

import haxe.io.Bytes;

import cs.Lib;

enum Note {
    A(o:Int);
    B(o:Int);
    C(o:Int);
    D(o:Int);
    E(o:Int);
    F(o:Int);
    G(o:Int);
}

typedef Effect = {
    pitchFrom: Float,
    pitchTo: Float,
}

class Pitcher {
    public function new(effect: Effect) {

    }

    public static function pitchSample(sample: Bytes, effect: Effect): Bytes {
        return sample;
    }

    private function noteToPitch(from: Note): Float {
        var ret: Float;

        switch (from) {
            case A(o):
                ret = 440.0;
                try {
                    ret = ((ret / Math.pow(2, 4 - o)): Float);
                } catch(e) {
                    trace(e.details());
                }
            case B(o):
                ret = 15.43;
            case C(o):
                ret = 523.25;
            case D(o):
                ret = 587.33;
            case E(o):
                ret = 659.25;
            case F(o):
                ret = 698.46;
            case G(o):
                ret = 783.99;
        }

        ret = 

        return ret;
    }
}
