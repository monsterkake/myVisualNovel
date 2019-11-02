#include "game.h"
#include "draw.h"
#include "button.h"
#include "resHolder.h"
#include "page.h"

void drawScene()
{
	game.m_window.clear();
	drawCurrentPage(pages[game.currentPage].picture, pages[game.currentPage].text);
	drawInterface();
	if (game.gameState == "decision") drawDecisionOverlay();
	game.m_window.display();
}

void drawCurrentPage(sf::Texture texture, sf::Text text)
{
	sf::Sprite sprite;
	sprite.setTexture(texture);
	game.drawElement(sprite);
	drawTextBox(text);
}

void drawTextBox(sf::Text text)
{
	sf::RectangleShape rectangle;
	rectangle.setSize(sf::Vector2f( float(game.m_window.getSize().x - 400.f) , 150.f ) );
	rectangle.setPosition (sf::Vector2f( 200.f , float( game.m_window.getSize().y - 150.f ) ) );
	rectangle.setFillColor(sf::Color(150, 120, 80, 100));
	pages[game.currentPage].text.setPosition(sf::Vector2f(200.f, float(game.m_window.getSize().y - 150.f)));
	game.drawElement(rectangle);
	game.drawElement(pages[game.currentPage].text);
}

void drawInterface()
{
	nextButton.drawSelf();
	backButton.drawSelf();
	menuButton.drawSelf();
}

void drawDecisionOverlay()
{
	sf::RectangleShape rectangle;
	rectangle.setSize(sf::Vector2f(300.f , 500.f));
	rectangle.setPosition(sf::Vector2f(game.m_window.getSize().x / 2 - 150, 200.f));
	rectangle.setFillColor(sf::Color(150, 120, 80, 100));
	game.drawElement(rectangle);

	decisionButton_1.drawSelf();
	decisionButton_2.drawSelf();
	decisionButton_3.drawSelf();
	sf::Text text;
	text.setString("100");
}
