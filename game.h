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
	sf::String gameState;
	sf::RenderWindow m_window;
	sf::Event event;
	sf::Music track;
	int currentloaction;
	
	void playMusic();
	void mainLoop();
	void createWindow();
	void changeState(sf::String);
	void closeWindow();
	void drawSprite(sf::Sprite);
	void checkMate();
	
private:
	void eventProcessing(sf::String);
	
};

extern Game game;
