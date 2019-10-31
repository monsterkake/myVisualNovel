#include "page.h"
#include "resHolder.h"
#include "button.h"

Page pages[COUNTOFPAGES];

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
	text.setOutlineThickness(1.5);
	text.setOutlineColor(sf::Color::Black);
	text.setCharacterSize(15);
	text.setFillColor(sf::Color::Yellow);
}
