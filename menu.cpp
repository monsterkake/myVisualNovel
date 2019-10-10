#include "menu.h"
#include "game.h"
#include "button.h"

void Menu::drawMenuBG()
{
	texture.loadFromFile("resourses/menuBG.jpg");
	menuBG.setTexture(texture);
	game.drawSprite(menuBG);
}

void Menu::drawMenu()
{
	game.m_window.clear();
	drawMenuBG();
	exitButton.drawSelf(game.m_window.getSize().x - 200, game.m_window.getSize().y - 100, 'x');
	alphaButton.drawSelf(game.m_window.getSize().x - 200, game.m_window.getSize().y - 200, 'a');
	game.m_window.display();
}

Menu menu;