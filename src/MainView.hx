package ;

import haxe.ui.containers.dialogs.Dialog.DialogButton;
import haxe.ui.containers.dialogs.Dialogs.FileDialogTypes;
import haxe.ui.containers.VBox;
import haxe.ui.events.MouseEvent;
import haxe.ui.containers.dialogs.OpenFileDialog;


@:build(haxe.ui.ComponentBuilder.build("assets/main-view.xml"))
class MainView extends VBox {    
    public function new() {
        super();
    }
    
    @:bind(openKaNeFile, MouseEvent.CLICK)
    private function onMyButton(_) {
        var dialog = new OpenFileDialog();
        dialog.options = {
            readContents: true,
            title: "Open KaNe File",
            readAsBinary: true,
            extensions: FileDialogTypes.TEXTS
        };
        dialog.onDialogClosed = function(event) {
            var file: String;
            if (event.button == DialogButton.OK) {
                file = (dialog.selectedFiles[0].text).toString();
            } else {
                file = "...";
            }
            if (file == "undefined") {
                fileLabel.text = "Something went wrong...";
            } else {
                fileLabel.text = file;
            }
        }
        dialog.show();
    }
    
}