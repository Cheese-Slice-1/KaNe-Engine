package ;

// import js.html.Blob;
import haxe.ui.containers.VBox;
import haxe.io.Bytes;
import haxe.ui.containers.dialogs.Dialogs;
import haxe.ui.containers.dialogs.Dialog.DialogButton;
import haxe.ui.containers.dialogs.Dialogs.FileDialogTypes;
import haxe.ui.events.MouseEvent;
import yaml.Yaml;
import sys.io.File;
import sys.FileSystem;
import haxe.zip.Reader;
import haxe.zip.Entry;
import haxe.zip.Uncompress;
import cs.system.io.File;
// import js.html.File;
// import js.html.ArrayBuffer;

import engine.Engine;
import engine.parts.Pitcher.Note;

@:build(haxe.ui.ComponentBuilder.build("assets/main-view.xml"))
class MainView extends VBox {    
    var eng: Engine;
    var singer: List<Entry>;

    public function new() {
        super();
    }
    
    @:bind(openKaNeFile, MouseEvent.CLICK)
    private function onKaNeButton(_) {
        var file: Dynamic;
        Dialogs.openFile(function(button, selectedFiles) {
            if (button == DialogButton.OK) {
                updateProject(selectedFiles[0].name, selectedFiles[0].text);
            }
        }, {
            readContents: true,
            title: "Open KaNe Text File",
            readAsBinary: false,
            extensions: FileDialogTypes.TEXTS
        });
    }

    @:bind(openSinger, MouseEvent.CLICK)
    private function onSingerButton(_) {
        Dialogs.openFile(function(button, selectedFiles) {
            if (button == DialogButton.OK) {
                updateSinger(null, null, null);
                singer = Reader.readZip(selectedFiles[0].data);
            }
        }, {
            readContents: true,
            title: "Open Singer's ZIP File",
            readAsBinary: true,
            extensions: FileDialogTypes.ANY
        });
    }
    
    @:bind(btnC4, MouseEvent.CLICK)
    private function onBtnC4(_) {
        try {
            btnC4.text = eng.play(Note.C(4));
        } catch(e) {
            
        }
    }

    private function updateProject(_name: String, _content: String) {
        filename.text = _name;
        fileContent.text = _content;
    }

    private function updateSinger(_name: Null<String>, _descripiton: Null<String>, _image: Null<Bytes>) {
        // TODO: figure this out lol
        if (_name == null && _descripiton == null && _image == null) {
            trace("at least it runs lmao");
        }
    }
}