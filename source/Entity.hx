package;

import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.FlxG;

class Entity extends FlxSprite {

    public var velX : Float;
    public var velY : Float;

    /**
     * Creates a new Entity
     * @param X : the X position to place this entity
     * @param Y : the Y position to place this entity
     */
    public function new (?X:Float=0, ?Y:Float=0) {
        super(X,Y);
        scale.set(0.25, 0.25);
        loadGraphic(AssetPaths.player__png);
        FlxTween.tween(scale, { x:0.25, y:0.25 }, 0.4, { ease:FlxEase.elasticOut } );
        this.x = X;
        this.y = Y;
        velX = 200;
        velY = 200;
    }

    override public function update(elapsed:Float):Void {
        movementHandler(velX * elapsed,velY * elapsed);
    }
    
    /**
     * Handles the movement for this entity
     * @param X : the x-direction velocity to move this character with
     * @param Y : the y-direction velocity to move this character with
     */
    private function movementHandler(?X:Float=0, ?Y:Float=0) {
        if (FlxG.keys.enabled) {
            if (FlxG.keys.pressed.LEFT) {
                this.x = this.x - X;
                this.flipX = true;
            }
            if (FlxG.keys.pressed.RIGHT){
                this.x = this.x + X;
                this.flipX = false;
            }
        }
    }

}