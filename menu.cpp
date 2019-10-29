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
	exitButton.drawSelf();
	playButton.drawSelf();
	settingsButton.drawSelf();
	game.m_window.display();
}

Menu menu;

