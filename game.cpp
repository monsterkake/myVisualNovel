#include "game.h"
#include "menu.h"
#include "events.h"
#include "draw.h"
#include "resHolder.h"
#include "currentSave.h"
#include"button.h"

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
	createButtons();
}

void Game::createButtons()
{
	exitButton.setPosition(game.m_window.getSize().x - 200, game.m_window.getSize().y - 100);
	playButton.setPosition(game.m_window.getSize().x - 200, game.m_window.getSize().y - 200);
	settingsButton.setPosition(game.m_window.getSize().x - 200, game.m_window.getSize().y - 300);

	nextButton.setPosition(game.m_window.getSize().x - 200, game.m_window.getSize().y - 100);
	backButton.setPosition(80, game.m_window.getSize().y - 100);
	decisionButton_1.setPosition(game.m_window.getSize().x / 2 - 75, 350);
	decisionButton_2.setPosition(game.m_window.getSize().x / 2 - 75, 450);
	decisionButton_3.setPosition(game.m_window.getSize().x / 2 - 75, 550);
	
	exitButton.sprite.setTexture(resHolder.exitButton);
	playButton.sprite.setTexture(resHolder.playButton);
	settingsButton.sprite.setTexture(resHolder.settingsButton);

	nextButton.sprite.setTexture(resHolder.nextButton);
	backButton.sprite.setTexture(resHolder.backButton);
	decisionButton_1.sprite.setTexture(resHolder.button);
	decisionButton_2.sprite.setTexture(resHolder.button);
	decisionButton_3.sprite.setTexture(resHolder.button);
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
