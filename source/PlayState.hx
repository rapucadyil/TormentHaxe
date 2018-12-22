package;

import flixel.FlxState;
import flixel.FlxSprite;

class PlayState extends FlxState
{
	var player : Entity;

	override public function create():Void
	{
		super.create();
		player = new Entity(0, 0);
		add(player);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		player.update(elapsed);
	}
}
