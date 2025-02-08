package ;

import haxe.ui.containers.VBox;
import haxe.io.Bytes;
import haxe.ui.containers.dialogs.Dialogs;
import haxe.ui.containers.dialogs.Dialog.DialogButton;
import haxe.ui.containers.dialogs.Dialogs.FileDialogTypes;
import haxe.ui.events.MouseEvent;

import Engine;


@:build(haxe.ui.ComponentBuilder.build("assets/main-view.xml"))
class MainView extends VBox {    
    public function new() {
        super();
    }
    
    @:bind(openKaNeFile, MouseEvent.CLICK)
    private function onKaNeButton(_) {
        Dialogs.openFile(function(button, selectedFiles) {
            if (button == DialogButton.OK) {
                updateProject(selectedFiles[0].name, selectedFiles[0].text);
            }
        }, {
            readContents: true,
            title: "Open KaNe File",
            readAsBinary: false,
            extensions: FileDialogTypes.TEXTS
        });
    }
    
    @:bind(btnC4, MouseEvent.CLICK)
    private function onBtnC4(_) {
        btnC4.text = Engine.play(Engine.Note.C(4));
    }

    private function updateProject(_name: String, _content: String) {
        filename.text = _name;
        fileContent.text = _content;
    }

    private function updateSinger(_name: String, _descripiton: String, _image: Bytes) {
        // TODO: figure this out lol
    }
}