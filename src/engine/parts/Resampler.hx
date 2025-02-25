package engine.parts;

import haxe.io.Bytes;

typedef Parameters = {
    preutterance: Float,
    consonant: Float,
    vowel: Float,
    sampleEnd: Float
}

typedef Sample = {
    alias: String,
    source: Bytes
}

class Resampler {
    var samples: Array<Sample>;

    public function new(_samples: Array<Sample>) {
        samples = _samples;
    }
}
