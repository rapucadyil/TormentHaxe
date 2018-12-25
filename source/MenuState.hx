package;

import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.FlxG;
import flash.system.System;

class MenuState extends FlxState {

    var playBtn : FlxButton;
    var quitBtn : FlxButton;

	override public function create():Void {
		super.create();
        playBtn = new FlxButton(FlxG.width/2, FlxG.height/2, "Play", clickPlay);
        quitBtn = new FlxButton(FlxG.width/2, ((FlxG.height/2) + 50), "Quit", clickQuit);
        add(quitBtn);
        add(playBtn);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);
	}

    function clickPlay(): Void {
        FlxG.switchState(new PlayState());
    }

    function clickQuit() : Void {
        trace("Quit!");
        FlxG.switchState(new ConfirmQuitState());
    }
}