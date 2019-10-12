#include "game.h"
#include "events.h"
#include "menu.h"
#include "button.h"

void menuEvents()
{
	while (game.m_window.pollEvent(game.event))
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
					game.changeState("game");
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
}

void gameEvents()
{
	while (game.m_window.pollEvent(game.event))
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
					if (game.currentloaction < countOfLoactions)game.currentloaction++;
				if (backButton.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
					if (game.currentloaction > 0)game.currentloaction--;
			}
			break;

		default: break;
		}
	}
}

void decisionEvents()
{
	while (game.m_window.pollEvent(game.event))
	{


		switch (game.event.type)
		{
		case sf::Event::KeyPressed:
			if (game.event.key.code == sf::Keyboard::Q)
				game.closeWindow();

		case sf::Event::MouseButtonPressed:
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				if (decisionButton_1.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
					cout << "d1" << endl;
				if (decisionButton_2.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
					cout << "d2" << endl;
				if (decisionButton_3.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
					cout << "d3" << endl;
			}
			break;

		default: break;
		}
	}
}