#include "game.h"
#include "init.h"

int main()
{
	game.playMusic();
	loadResourses();
	game.createWindow();
	game.changeState('m');
	game.mainLoop();
	return 0;
}