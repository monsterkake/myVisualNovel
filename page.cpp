#include "page.h"
#include "resHolder.h"
#include "button.h"

Page pages[100];

Page::Page()
{
	decision_1 = "1.";
	decision_2 = "2.";
	decision_3 = "3.";
}

void Page::setPicture(sf::String dir)
{
	picture.loadFromFile(dir);
}

void Page::loadText(sf::String string)
{
	text.setFont(resHolder.font);
	text.setString(string);
	text.setOutlineColor(sf::Color(255, 255, 0, 255));
	text.setCharacterSize(15);
	text.setFillColor(sf::Color(255, 255, 0, 255));
}
