#include <SFML/OpenGL.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>

class Menu
{
public:
	sf::Texture texture;
	sf::Sprite menuBG;

	void drawMenuBG();
	void drawMenu();
	
};

extern Menu menu;
