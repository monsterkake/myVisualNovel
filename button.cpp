#include "button.h"
#include "game.h"
#include "resHolder.h"

Button::Button( sf::String string )
{
	text.setString(string);
	text.setScale(0.8, 1);
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
	
	text.setPosition(x + (160-text.getLocalBounds().width)/2, y );
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
/*
Button exitButton( resHolder.exitButton );
Button playButton( resHolder.playButton );
Button settingsButton( resHolder.settingsButton );

Button nextButton( resHolder.nextButton );
Button backButton( resHolder.backButton );
Button decisionButton_1( resHolder.button );
Button decisionButton_2( resHolder.button );
Button decisionButton_3( resHolder.button ); 

*/