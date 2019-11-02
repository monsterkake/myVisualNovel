#include "menu.h"
#include "game.h"
#include "button.h"
#include "checkBox.h"
#include "resHolder.h"

void drawSettingsOverlay()
{
	fullScreenCheckBox.drawSelf();
}

void Menu::drawMenuBG()
{
	menuBG.setTexture(resHolder.menuBG);
	game.drawElement(menuBG);
}

void Menu::drawMenu()
{
	game.m_window.clear();
	drawMenuBG();
	exitButton.drawSelf();
	saveButton.drawSelf();
	newGameButton.drawSelf();
	continueButton.drawSelf();
	settingsButton.drawSelf();
	if (game.gameState == "settings")
	{
		drawSettingsOverlay();
	}
	game.m_window.display();
}



Menu menu;
