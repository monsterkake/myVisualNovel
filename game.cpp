#include "game.h"
#include "menu.h"
#include "events.h"
#include "draw.h"
#include "resHolder.h"
#include "currentSave.h"
#include"button.h"
#include "page.h"

Game game;

Game::Game()
{
	
}

Game::~Game(){}

void Game::createWindow()
{
	m_window.create( sf::VideoMode(), "main", sf::Style::Fullscreen );
	//m_window.create(sf::VideoMode(1024,920), "main");
	createButtons();
}

void Game::createButtons()
{
	exitButton.setPosition(game.m_window.getSize().x - 200, game.m_window.getSize().y - 100);
	playButton.setPosition(game.m_window.getSize().x - 200, game.m_window.getSize().y - 200);
	settingsButton.setPosition(game.m_window.getSize().x - 200, game.m_window.getSize().y - 300);

	nextButton.setPosition(game.m_window.getSize().x - 190, game.m_window.getSize().y - 100);
	backButton.setPosition(50, game.m_window.getSize().y - 100);
	menuButton.setPosition(5,5);

	decisionButton_1.setPosition(game.m_window.getSize().x / 2 - 75, 350);
	decisionButton_2.setPosition(game.m_window.getSize().x / 2 - 75, 450);
	decisionButton_3.setPosition(game.m_window.getSize().x / 2 - 75, 550);
	
	exitButton.setTexture();
	playButton.setTexture();
	settingsButton.setTexture();

	nextButton.setTexture();
	backButton.setTexture();
	menuButton.setTexture();

	decisionButton_1.setTexture();
	decisionButton_2.setTexture();
	decisionButton_3.setTexture();
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
	resHolder.track.setVolume(0);
	resHolder.track.setLoop(true);
}

void Game::drawElement(sf::Sprite sprite)
{
	m_window.draw(sprite);
}

void Game::drawElement(sf::Text text)
{
	m_window.draw(text);
}

void Game::drawElement(sf::RectangleShape rect)
{
	m_window.draw(rect);
}

void Game::checkMate()
{
	if (currentPage == 2)
	{
		decisionButton_1.text.setString(pages[game.currentPage].decision_1);
		decisionButton_2.text.setString(pages[game.currentPage].decision_2);
		decisionButton_3.text.setString(pages[game.currentPage].decision_3);
		gameState = "decision";
	}
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
			checkMate();
		}
		if (gameState == "decision")
		{
			drawScene();
			decisionEvents();
		}
	}	
}
