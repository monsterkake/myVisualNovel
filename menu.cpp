#include "menu.h"
#include "game.h"
#include "button.h"
#include "resHolder.h"

void Menu::drawMenuBG()
{
	menuBG.setTexture(resHolder.menuBG);
	game.drawSprite(menuBG);
}

void Menu::drawMenu()
{
	game.m_window.clear();
	drawMenuBG();
	exitButton.drawSelf(game.m_window.getSize().x - 200, game.m_window.getSize().y - 100, resHolder.exitButton);
	alphaButton.drawSelf(game.m_window.getSize().x - 200, game.m_window.getSize().y - 200, resHolder.alphaButton);

	game.m_window.display();
}

Menu menu;
