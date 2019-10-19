#include "resHolder.h"
#include "page.h"

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
	font.loadFromFile("resourses/ALGER.TTF");
	loadLocations();
	std::cout << "resourses loaded" << std::endl;
}

void ResHolder::loadLocations()
{
	sf::String string;
	char number;
	for (int i = 0; i < 4; i++)
	{
		string.clear();
		number = i+48;
		string += "resourses/locations/";
		string += number;
		string += ".png";
		//locations[i].loadFromFile(string);
		pages[i].setPicture(string);
		pages[i].loadText(sf::String("texttexttexttexttexttext"));
	}
	
	//locations[1].loadFromFile("resourses/locations/1.png");
	//locations[2].loadFromFile("resourses/locations/2.png");
	//locations[3].loadFromFile("resourses/locations/3.png");
}
