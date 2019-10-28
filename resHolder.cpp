#include "resHolder.h"
#include "page.h"
#include <fstream>
using namespace std;

ResHolder resHolder;

void ResHolder::init()
{
	button.loadFromFile("resourses/button_1.png");
	exitButton.loadFromFile("resourses/exitButton.png");
	playButton.loadFromFile("resourses/playButton.png");
	nextButton.loadFromFile("resourses/nextButton.png");
	backButton.loadFromFile("resourses/backButton.png");
	settingsButton.loadFromFile("resourses/settingsButton.png");
	//menuBG.loadFromFile("resourses/menuBG.jpg");

	sf::FileInputStream stream;
	stream.open("resourses/menuBG.jpg");
	menuBG.loadFromStream(stream);
	
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
		pages[i].setPicture(string);
		pages[i].loadText(sf::String("texttexttexttexttexttext"));
	}
	
	//locations[1].loadFromFile("resourses/locations/1.png");
	//locations[2].loadFromFile("resourses/locations/2.png");
	//locations[3].loadFromFile("resourses/locations/3.png");
}
