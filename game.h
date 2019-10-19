//#include <string>
#include <iostream>
#include <SFML/OpenGL.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

extern int countOfLoactions;

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
	void drawSprite(sf::Sprite);
	void checkMate();	
};

extern Game game;
