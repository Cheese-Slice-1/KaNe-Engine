package engine.parts;

// import js.html.audio.AudioBuffer;
import haxe.io.Bytes;

typedef Sample = {
    alias: String,
    source: AudioBuffer
}

typedef SampleParts = {
    start: Float, // start of the sample
    consonant: Float, // consonant/vowel limit
    vowel: {start: Float, end: Float}, // start + end of vowel loop
    end: Float, // end of the sample
    loop: Null<Bool> // whether to loop the vowel
}

typedef StitchParameters = {
    pitch: Float,
    volume: Float
    // TODO: maybe add vibrato?
}

class Stitcher {
    
}
