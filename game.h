#include <iostream>
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#define COUNTOFLOCATIONS 3

using namespace std;

class Game
{
public:
	Game();
	~Game();
	sf::String gameState;
	sf::RenderWindow m_window;
	sf::Event event;
	sf::Music track;
	int currentPage;
	
	void playMusic();
	void mainLoop();
	void createWindow();
	void changeState(sf::String);
	void closeWindow();
	void drawElement(sf::Sprite);
	void drawElement(sf::Text);
	void drawElement(sf::RectangleShape);
	void checkMate();	
	void createButtons();
};

extern Game game;
