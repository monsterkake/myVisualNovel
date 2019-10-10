#include "game.h"
#include "draw.h"
#include "button.h"
#include "resHolder.h"

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

/*void drawButton(int x, int y, sf::Texture texture)
{
	sf::Sprite sprite;
	sprite.setTexture(texture);
	game.drawSprite(sprite);
	sprite.setPosition(sf::Vector2f(x, y));
}*/

void drawInterface()
{
	drawTextBox();
	nextButton.drawSelf(80, game.m_window.getSize().y - 100, resHolder.nextButton);
	backButton.drawSelf(game.m_window.getSize().x - 200, game.m_window.getSize().y - 100, resHolder.backButton);
}
