#include "game.h"
#include "menu.h"
#include "events.h"
#include "draw.h"
#include "resHolder.h"

Game game;

void Game::createWindow()
{
	m_window.create( sf::VideoMode(), "main", sf::Style::Fullscreen );
	//m_window.create(sf::VideoMode(800,400), "main");
}

void Game::closeWindow()
{
	m_window.close();
}

void Game::changeState(char mode)
{
		gameState = mode;
}

void Game::playMusic()
{
	resHolder.track.play();
	resHolder.track.setVolume(10);
}

void Game::drawSprite(sf::Sprite sprite)
{
	m_window.draw(sprite);
}

void Game::eventProcessing()
{
	while (m_window.pollEvent(event))
	{
		if (gameState == 'm')
			menuEvents();
		if (gameState == 'g')
			gameEvents();
	}
}

void Game::mainLoop()
{
	while (m_window.isOpen())
	{
		switch (gameState)
		{
		case 'm':
			menu.drawMenu();
			break;
		case 'g':
			drawScene();
			break;
		}
		eventProcessing();
	}	
}