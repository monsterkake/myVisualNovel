#include "game.h"
#include "events.h"
#include "menu.h"
#include "button.h"

void menuEvents()
{
	switch (game.event.type)
	{
	case sf::Event::Closed:
		game.closeWindow();
		break;

	case sf::Event::MouseButtonPressed:
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (exitButton.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
				game.closeWindow();
			if (alphaButton.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
				game.changeState('g');
			else cout << "a" << endl;
		}
		break;

	case sf::Event::KeyPressed:
			if (game.event.key.code == sf::Keyboard::Q)
				game.closeWindow();
		break;

	default: break;
	}
}

void gameEvents()
{
	switch (game.event.type)
	{
	case sf::Event::KeyPressed:
		if (game.event.key.code == sf::Keyboard::Q)
			game.closeWindow();

	case sf::Event::MouseButtonPressed:
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (nextButton.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
				cout << "next" << endl;
			if (backButton.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
				 cout << "back" << endl;
		}
		break;

	default: break;
	}
}