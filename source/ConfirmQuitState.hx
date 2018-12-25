package;

import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flash.system.System;

class ConfirmQuitState extends FlxState {

    var yesBtn : FlxButton;
    var cancelBtn : FlxButton;

    override public function create() : Void {
        super.create();
        yesBtn = new FlxButton(FlxG.width/2, FlxG.height/2, "Yes", quitCallback);
        cancelBtn = new FlxButton(FlxG.width/2, ((FlxG.height/2) + 50), "Cancel", cancelCallback);
        add(yesBtn);
        add(cancelBtn);
    }

    override public function update(elapsed:Float) : Void {
        super.update(elapsed);
    }

    function quitCallback() : Void {
        System.exit(0);
    }

    function cancelCallback() : Void {
        FlxG.switchState(new MenuState());
    }

}