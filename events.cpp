#include "game.h"
#include "events.h"
#include "menu.h"
#include "button.h"
#include "currentSave.h"

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
				if (playButton.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
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
					if (game.currentPage < countOfLoactions)game.currentPage++;
				if (backButton.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
					if (game.currentPage > 0)game.currentPage--;
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
				{
					cout << "d1" << endl;
					for (int i = 0; i < 100; i++)
					{
						if (currentSave.decisions[i] == 0)
						{
							currentSave.decisions[i] = 1;
							break;
						}
					}
					game.changeState("game");
					game.currentPage++;
				}
					
				if (decisionButton_2.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
				{
					cout << "d2" << endl;
					for (int i = 0; i < 100; i++)
					{
						if (currentSave.decisions[i] == 0)
						{
							currentSave.decisions[i] = 2;
							break;
						}
					}
					game.changeState("game");
					game.currentPage++;
				}
				if (decisionButton_3.sprite.getGlobalBounds().contains(sf::Mouse::getPosition(game.m_window).x, sf::Mouse::getPosition(game.m_window).y))
				{
					cout << "d3" << endl;
					for (int i = 0; i < 100; i++)
					{
						if (currentSave.decisions[i] == 0)
						{
							currentSave.decisions[i] = 3;
							break;
						}
					}
					game.changeState("game");
					game.currentPage++;
				}
			}
			break;

		default: break;
		}
	}
}
