package ;

import haxe.io.Bytes;
import yaml.Yaml;
import haxe.zip.Uncompress;
import haxe.zip.Reader;

enum Note {
    A(o:Int);
    B(o:Int);
    C(o:Int);
    D(o:Int);
    E(o:Int);
    F(o:Int);
    G(o:Int);
}

private class Singer {
    var name: String;
    var description: String;
    var image: Bytes;
    var samples: Map<String, Bytes>;

    var voice: String;
    var path: String;

    public function new(_voice: String, _path: String) {
        voice = _voice;
        path = _path;
    }

    public function loadSinger() {
        var voiceYaml = Yaml.parse(voice);
        name = voiceYaml.name;
        description = voiceYaml.description;
        image = Bytes.alloc(0);
        samples = [];
    }
}

typedef SingerData = {
    name: String,
    description: String,
    image: Bytes,
    samples: Map<String, Bytes>
}

class Engine {
    var tempo: Int;
    var timeSignature: {number: Int, type: Int}; // 4/4 four quarter notes, 4/8 four eighth notes, etc.

    public function new(_tempo: Int, _timeSignature: {number: Int, type: Int}) {
        tempo = _tempo;
        timeSignature = _timeSignature;
    }

    // figure things out (how do i play audio in haxe lmao)
    public function importSinger1(_voice: String, _path: Null<String>): SingerData {
        if (_path == null) {
            return {
                name: "",
                description: "",
                image: Bytes.alloc(0), 
                samples: []
            };
        }

        var voice = Yaml.parse(_voice);

        var singerName = voice.name;

        // var reqPath = "file:///" + _path.substring(0, _path.lastIndexOf(singerName));

        // var request = new XMLHttpRequest();
        // var ret: Any;

        // request.open("GET", reqPath, false);
        // request.responseType = XMLHttpRequestResponseType.ARRAYBUFFER;
        // request.onloadend = function(event) {
        //     ret = (request.response: Bytes);
        // };
        // request.send();

        return {
            name: singerName,
            description: "",
            image: Bytes.alloc(0),
            samples: []
        };
    }

    public function importSinger2() {

    }

    // TODO: make it actually do something
    public function play(note: Null<Note>, sym: String = "a"): String {
        var noteStr: String = "C(4)a";

        if (note != null) {
            noteStr = Std.string(note) + sym.toLowerCase();
            loadAndPlayAudio(null, getPitchFromNote(note));
        }
        
        return noteStr; // literally useless lmao
    }

    function loadAndPlayAudio(sound: Null<Bytes>, pitch: Float): Void {
        if (pitch == 0.0) {
            return;
        }

        if (sound != null) {
            var audio: Bytes;
        }

        // TODO: load audio from local machine and play it somehow??

        trace("Loading audio from with pitch " + pitch);
    }

    function getPitchFromNote(note: Note): Float {
        switch (note) {
            case Note.A(o):
                var ret = 440.0;
                if (o == 4) {
                    return ret;
                } else if (o < -1) {
                    return 0.0;
                }

                try {
                    if (o < 4) {
                        ret = (ret / Math.pow(2, 4 - o): Float);
                    } else if (o > 4) {
                        ret = (ret * Math.pow(2, o - 4): Float);
                    }
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
