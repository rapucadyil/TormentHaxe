package;

import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.FlxG;

class MenuState extends FlxState {

    var playBtn : FlxButton;

	override public function create():Void {
		super.create();
        playBtn = new FlxButton(0, 0, "Play", clickPlay);
        playBtn.screenCenter();
        add(playBtn);
	}

	override public function update(elapsed:Float):Void {
		super.update(elapsed);
	}

    function clickPlay(): Void {
        FlxG.switchState(new PlayState());
    }
}