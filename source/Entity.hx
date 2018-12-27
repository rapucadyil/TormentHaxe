package;

import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.FlxG;

class Entity extends FlxSprite {

    /* Velocity variables for this entity */
    public var velX : Float;
    public var velY : Float;

    /* Health variables for this entity */
    public var currHealth : Float;
    public var maxHealth : Float;

    //private animMap : Map<String,

    /**
     * Creates a new Entity
     * @param X : the X position to place this entity
     * @param Y : the Y position to place this entity
     */
    public function new (?X:Float=0, ?Y:Float=0, ?CH:Float=0, ?MH:Float=0) {
        super(X,Y);
        /* This is used for scaling */
        scale.set(0.25, 0.25);
        loadGraphic(AssetPaths.player__png);
        /* This is used for scaling */
        FlxTween.tween(scale, { x:0.25, y:0.25 }, 0.4, { ease:FlxEase.elasticOut });
        this.currHealth = CH;
        this.maxHealth = MH;
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
            if (FlxG.keys.anyPressed(['LEFT', 'A'])) {
                this.x = this.x - X;
                this.flipX = true;
            }
            if (FlxG.keys.anyPressed(['RIGHT', 'D'])){
                this.x = this.x + X;
                this.flipX = false;
            }
        }
    }
    
    /**
     * Modifies the health attribute of this entity
     * @param order : determines if the max or current health value is gonna be modded
     * @param value : the value to change the ordered attribute by
     */
    public function modifyHealth(?order:String, ?value:Float=0) {
        switch(order) {
            case "MAX": this.maxHealth = this.maxHealth += value;
            case "CURR": this.currHealth = this.currHealth += value;
        }
    }

}