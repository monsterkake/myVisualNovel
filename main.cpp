#include "game.h"
#include "resHolder.h"

int main()
{
	resHolder.loadResourses();
	game.playMusic();
	game.createWindow();
	game.changeState("menu");
	game.mainLoop();
	return 0;
}
