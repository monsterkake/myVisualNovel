#include <iostream>
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class ResHolder
{
public:
	sf::Texture button;
	sf::Texture menuBG;
	sf::Texture checkBox;
	sf::Texture locations[5];

	sf::Music track;

	sf::Font font;

	void loadResourses();
	void loadPages();
};

extern ResHolder resHolder;
