#include <SFML/OpenGL.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>

class Button
{
public:
	Button( sf::Texture& );
	Button::Button();

	sf::Vector2f position;
	sf::Sprite sprite;
	std::string text;

	void drawSelf();
	void setTexture(sf::Texture);
	void setPosition(int, int);
	bool isClicked();
};

extern Button exitButton;
extern Button playButton;
extern Button settingsButton;

extern Button nextButton;
extern Button backButton;
extern Button decisionButton_1;
extern Button decisionButton_2;
extern Button decisionButton_3;
