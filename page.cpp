#include "page.h"
#include "resHolder.h"

Page pages[100];

void Page::setPicture(sf::String dir)
{
	picture.loadFromFile(dir);
}

void Page::loadText(sf::String string)
{
	text.setFont(resHolder.font);
	text.setString(string);
	text.setOutlineColor(sf::Color(255, 255, 0, 255));
	text.setCharacterSize(30);
	text.setFillColor(sf::Color(255, 255, 0, 255));
}
