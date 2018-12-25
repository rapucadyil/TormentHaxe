package;
import flixel.FlxSprite;
import flixel.FlxG;
import flash.system.System;

class InputHandler extends FlxSprite {

    public function new(?X:Float=0, ?Y:Float=0) : Void {
        super(X,Y);
        
    }

    override public function update(elapsed:Float) : Void {
        super.update(elapsed);
        processUserInput();
    }

    private function processUserInput() {
        if (FlxG.keys.pressed.ESCAPE){
            System.exit(0);
        }
    }
}