#include <string>
#include <iostream>
#include <SFML/OpenGL.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class ResHolder
{
public:
	sf::Texture button;
	sf::Texture exitButton;
	sf::Texture alphaButton;
	sf::Texture nextButton;
	sf::Texture backButton;
	sf::Texture menuBG;

	sf::Music track;

	void init();
};

extern ResHolder resHolder;