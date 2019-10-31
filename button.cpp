#include "button.h"
#include "game.h"
#include "resHolder.h"

Button::Button( sf::String string )
{
	sf::Color color;
	color.Yellow;
	text.setOutlineThickness(2);
	text.setFillColor(sf::Color(200,100,50,255));
	text.setString(string);
	text.setCharacterSize(24);
	text.setScale(1, 1);
	text.setFont(resHolder.font);
}

Button::Button()
{ 
	text.setFont(resHolder.font); 
	text.setScale(1, 1);
}

void Button::drawSelf()
{
	sprite.setPosition( position );
	       
	game.drawElement(sprite);
	game.drawElement(text);
}

void Button::setTexture(sf::Texture texture)
{
	sprite.setTexture(texture);
}

void Button::setTexture()
{
	sprite.setTexture(resHolder.button);
}

void Button::setPosition(int x, int y)
{
	position.x = x;
	position.y = y;
	text.setPosition(x + (147-text.getLocalBounds().width)/2, y+3 );
}

bool Button::isClicked()
{
	if (sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y)) return true;
	else return false;
}

Button exitButton("Exit");
Button playButton( "Play" );
Button settingsButton("Settings");

Button nextButton("Next");
Button backButton("Back");
Button menuButton("Menu");

Button decisionButton_1;
Button decisionButton_2;
Button decisionButton_3;
