#include "button.h"
#include "game.h"
#include "resHolder.h"

Button::Button( sf::Texture texture )
{
	//sprite.setTexture(texture);
}

Button::Button(){}

void Button::drawSelf()
{
	sprite.setPosition( position );
	cout << sprite.getPosition().x << "  " << sprite.getPosition().y << endl;
	//sprite.setTexture(resHolder.exitButton);
	game.drawSprite(sprite);
}

void Button::setTexture(sf::Texture texture)
{
	sprite.setTexture(texture);
}

void Button::setPosition(int x, int y)
{
	position.x = x;
	position.y = y;
}

bool Button::isClicked()
{
	return true;
}

Button exitButton;
Button playButton;
Button settingsButton;

Button nextButton;
Button backButton;
Button decisionButton_1;
Button decisionButton_2;
Button decisionButton_3;

/*Button exitButton( resHolder.exitButton );
Button playButton( resHolder.playButton );
Button settingsButton( resHolder.settingsButton );

Button nextButton( resHolder.nextButton );
Button backButton( resHolder.backButton );
Button decisionButton_1( resHolder.button );
Button decisionButton_2( resHolder.button );
Button decisionButton_3( resHolder.button ); */

