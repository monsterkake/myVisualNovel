#include "game.h"
#include "draw.h"
#include "button.h"
#include "resHolder.h"

void drawScene()
{
	game.m_window.clear();
	drawCurrentLocation(resHolder.locations[game.currentloaction]);
	drawInterface();
	if (game.gameState == "decision")
	drawDecisionOverlay();
	game.m_window.display();
}

void drawCurrentLocation(sf::Texture texture)
{
	sf::Sprite sprite;
	sprite.setTexture(texture);
	game.drawSprite(sprite);
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
	nextButton.drawSelf(game.m_window.getSize().x - 200, game.m_window.getSize().y - 100, resHolder.backButton);
	backButton.drawSelf(80, game.m_window.getSize().y - 100, resHolder.nextButton);
}

void drawDecisionOverlay()
{
	sf::RectangleShape rectangle;
	rectangle.setSize(sf::Vector2f(300.f , 500.f));
	rectangle.setPosition(sf::Vector2f(game.m_window.getSize().x / 2 - 150, 200.f));
	rectangle.setFillColor(sf::Color(150, 120, 80, 100));
	game.m_window.draw(rectangle);

	decisionButton_1.drawSelf(rectangle.getPosition().x + 75.f, rectangle.getPosition().y + 150.f, resHolder.alphaButton);
	decisionButton_2.drawSelf(rectangle.getPosition().x + 75.f, rectangle.getPosition().y + 250.f, resHolder.alphaButton);
	decisionButton_3.drawSelf(rectangle.getPosition().x + 75.f, rectangle.getPosition().y + 350.f, resHolder.alphaButton);
}