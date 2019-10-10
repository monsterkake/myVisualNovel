#include "button.h"
#include "game.h"

void Button::drawSelf(int x, int y, sf::Texture texture)
{
	
	sprite.setTexture(texture);
	game.drawSprite(sprite);
	sprite.setPosition(sf::Vector2f(x, y));
}

Button exitButton;
Button alphaButton;
Button nextButton;
Button backButton;