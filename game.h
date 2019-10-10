#include <string>
#include <iostream>
#include <SFML/OpenGL.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;

class Game
{
public:
	char gameState;
	sf::RenderWindow m_window;
	sf::Event event;
	sf::Music track;

	void playMusic();
	void mainLoop();
	void createWindow();
	void changeState(char);
	void closeWindow();
	void drawSprite(sf::Sprite);
	
private:
	void eventProcessing();
	
};

extern Game game;
