#include "game.h"
#include "menu.h"
#include "events.h"
#include "draw.h"
#include "resHolder.h"
#include "currentSave.h"

Game game;

int countOfLoactions = 3;

Game::Game()
{
	for (int i = 0; i < countOfLoactions; i++)
		currentSave.decisions[i] = 0;
	currentSave.framesAfterDec = 0;

}

Game::~Game(){}

void Game::createWindow()
{
	m_window.create( sf::VideoMode(), "main", sf::Style::Fullscreen );
	//m_window.create(sf::VideoMode(800,400), "main");
}

void Game::closeWindow()
{
	m_window.close();
}

void Game::changeState(sf::String mode)
{
		gameState = mode;
}

void Game::playMusic()
{
	resHolder.track.play();
	resHolder.track.setVolume(1);
	resHolder.track.setLoop(true);
}

void Game::drawSprite(sf::Sprite sprite)
{
	m_window.draw(sprite);
}

void Game::checkMate()
{
	if (currentPage == 2)
		gameState = "decision";
}

void Game::mainLoop()
{
	while (m_window.isOpen())
	{
		if (gameState == "menu")
		{
			menu.drawMenu();
			menuEvents();
		}
		if (gameState == "game")
		{
			drawScene();
			gameEvents();
		}
		if (gameState == "decision")
		{
			drawScene();
			decisionEvents();
		}
		checkMate();
	}	
}
