#include "button.h"
#include "game.h"

void Button::drawSelf(int x, int y, char type)
{
	switch (type)
	{
	case 'x':
		texture.loadFromFile("resourses/exitButton.png");
		break;
	case 'a':
		texture.loadFromFile("resourses/alphaButton.png");
		break;
	case 'n':
		texture.loadFromFile("resourses/nextButton.png");
		break;
	case 'b':
		texture.loadFromFile("resourses/backButton.png");
		break;
	}
	sprite.setTexture(texture);
	game.drawSprite(sprite);
	sprite.setPosition(sf::Vector2f(x, y));
}

Button exitButton;
Button alphaButton;
Button nextButton;
Button backButton;