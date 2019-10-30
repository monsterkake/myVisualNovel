#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>

class Button
{
public:
	Button(sf::String);
	Button::Button();

	sf::Vector2f position;
	sf::Sprite sprite;
	sf::Text text;

	void drawSelf();
	void setTexture(sf::Texture);
	void setTexture();
	void setPosition(int, int);
	bool isClicked();
};

extern Button exitButton;
extern Button playButton;
extern Button settingsButton;

extern Button nextButton;
extern Button backButton;
extern Button menuButton;

extern Button decisionButton_1;
extern Button decisionButton_2;
extern Button decisionButton_3;
