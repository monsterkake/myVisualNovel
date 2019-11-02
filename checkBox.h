#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

class CheckBox
{
public:
	CheckBox(sf::String);
	CheckBox();

	sf::Vector2f position;
	sf::Sprite sprite;
	sf::Text text;
	sf::IntRect rectSourseFile;
	bool isActive;

	void drawSelf();
	void setTexture(bool);
	void setPosition(int, int);
	void changeState();
	bool isClicked();
};

extern CheckBox fullScreenCheckBox;
