#include "game.h"
#include "draw.h"
#include "button.h"

void drawScene()
{
	game.m_window.clear();
	drawCurrentLocation();
	drawInterface();
	game.m_window.display();
}

void drawCurrentLocation()
{

}

void drawTextBox()
{
	sf::RectangleShape rectangle;
	rectangle.setSize(sf::Vector2f( float(game.m_window.getSize().x - 400.f) , 150.f ) );
	rectangle.setPosition (sf::Vector2f( 200.f , float( game.m_window.getSize().y - 150.f ) ) );
	rectangle.setFillColor(sf::Color(150, 120, 80, 100));
	game.m_window.draw(rectangle);
}

void drawInterface()
{
	drawTextBox();
	nextButton.drawSelf(80, game.m_window.getSize().y - 100, 'n');
	backButton.drawSelf(game.m_window.getSize().x - 200, game.m_window.getSize().y - 100, 'b');
}
