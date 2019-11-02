#include "game.h"
#include "events.h"
#include "menu.h"
#include "button.h"
#include "checkBox.h"
#include <fstream>

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
				if (continueButton.isClicked())
					game.changeState("game");
				if (settingsButton.isClicked())
				{
					game.changeState("settings");
				}
				if (newGameButton.isClicked())
				{
					game.currentPage = 0;
					game.changeState("game");
				}
				if (saveButton.isClicked())
				{
					ofstream file;
					file.open("saves.txt");
					file<<game.currentPage << '$';
				}
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

void settingsEvents()
{
	while (game.m_window.pollEvent(game.event))
	{
		switch (game.event.type)
		{
		case sf::Event::KeyPressed:
			if (game.event.key.code == sf::Keyboard::Q)
				game.closeWindow();
		case sf::Event::MouseButtonPressed:
			if (fullScreenCheckBox.isClicked())
			{
			/*	if (game.isFullscreen)
					game.setWindowedMode();
				else
					game.setFullScreenMode(); */
			}
			break;
		deafult: break;
		}
	}
}
