#include <SFML/OpenGL.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>

class Button
{
public:
	sf::Vector2i position;
	sf::Texture texture;
	sf::Sprite sprite;
	std::string text;

	void drawSelf(int, int, sf::Texture);
};

extern Button exitButton;
extern Button alphaButton;
extern Button nextButton;
extern Button backButton;
extern Button decisionButton_1;
extern Button decisionButton_2;
extern Button decisionButton_3;
