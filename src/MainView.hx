package ;

import haxe.ui.containers.dialogs.Dialog.DialogButton;
import haxe.ui.containers.dialogs.Dialogs.FileDialogTypes;
import haxe.ui.containers.VBox;
import haxe.ui.events.MouseEvent;
import haxe.ui.containers.dialogs.OpenFileDialog;
import Engine;


@:build(haxe.ui.ComponentBuilder.build("assets/main-view.xml"))
class MainView extends VBox {    
    public function new() {
        super();
    }
    
    @:bind(openKaNeFile, MouseEvent.CLICK)
    private function onKaNeButton(_) {
        var dialog = new OpenFileDialog();
        dialog.options = {
            readContents: true,
            title: "Open KaNe File",
            readAsBinary: true,
            extensions: FileDialogTypes.TEXTS
        };
        dialog.onDialogClosed = function(event) {
            var fileName: String;
            if (event.button == DialogButton.OK) {
                fileName = dialog.selectedFiles[0].name;
            } else {
                fileName = "...";
            }
            if (fileName == "undefined") {
                fileLabel.text = "Something went wrong...";
            } else {
                fileLabel.text = fileName;
            }
        }
        dialog.show();
    }
    
    @:bind(btnC4, MouseEvent.CLICK)
    private function onBtnC4(_) {
        btnC4.text = Engine.play(Engine.Note.C(4));
    }
}