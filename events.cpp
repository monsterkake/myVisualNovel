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
				if (exitButton.isClicked())
					game.closeWindow();
				if (playButton.isClicked())
					game.changeState("game");
				if (settingsButton.isClicked())
					cout << "a" << endl;
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
				if (nextButton.isClicked())
					if (game.currentPage < COUNTOFLOCATIONS)game.currentPage++;
				if (backButton.isClicked())
					if (game.currentPage > 0)game.currentPage--;
				if (menuButton.isClicked())
					game.changeState("menu");
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
				if (decisionButton_1.isClicked())
				{
					cout << "d1" << endl;
					game.changeState("game");
					game.currentPage++;
				}
				if (decisionButton_2.isClicked())
				{
					cout << "d2" << endl;
					game.changeState("game");
					game.currentPage++;
				}
				if (decisionButton_3.isClicked())
				{
					cout << "d3" << endl;
					game.changeState("game");
					game.currentPage++;
				}
			}
			break;

		default: break;
		}
	}
}
