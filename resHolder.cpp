#include "resHolder.h"

ResHolder resHolder;

void ResHolder::init()
{
	//button.loadFromFile();
	exitButton.loadFromFile("resourses/exitButton.png");
	alphaButton.loadFromFile("resourses/alphaButton.png");
	nextButton.loadFromFile("resourses/nextButton.png");
	backButton.loadFromFile("resourses/backButton.png");
	menuBG.loadFromFile("resourses/menuBG.jpg");

	track.openFromFile("resourses/AaronSmithDancin.ogg");

	std::cout << "resourses loaded" << std::endl;
}


