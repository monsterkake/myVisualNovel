#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>
//#include "game.h"

class Menu{
public:
	sf::Texture texture;
	sf::Sprite menuBG;

	void drawMenuBG();
	void drawMenu();
};

extern Menu menu;
