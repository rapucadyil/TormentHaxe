package;

import flixel.FlxState;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
class PlayState extends FlxState
{
	var player : Entity;
	var input : InputHandler;
	override public function create():Void {
		super.create();
		FlxG.camera.bgColor = 0xFFFFFF99;
		player = new Entity(0, 0, 100, 100);
		input = new InputHandler(0,0);
		add(player);
		add(input);
	}

	override public function update(elapsed:Float):Void {
		player.update(elapsed);
		input.update(elapsed);
		super.update(elapsed);
	}
}
