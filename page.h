#include <string>
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>


class Page
{
public:
	sf::String decision_1;
	sf::String decision_2;
	sf::String decision_3;
	sf::Texture picture;
	sf::Text text;
	Page();
	void setPicture(sf::String);
	void drawPicture();
	void loadText(sf::String);

};

extern Page pages[100];
