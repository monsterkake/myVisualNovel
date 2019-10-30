#include "resHolder.h"
#include "page.h"
#include <fstream>
#include <string>
using namespace std;

ResHolder resHolder;

void ResHolder::init()
{
	button.loadFromFile("resourses/button_1.png");

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
	sf::String sfString;
	std::string stdString;
	char number;
	for (int i = 0; i < 4; i++)
	{
		stdString.clear();
		stdString += "resourses/locations/";
		stdString += to_string(i);
		stdString += ".png";
		pages[i].setPicture(stdString);

		sfString.clear();
		sfString += "Text at page ";
		sfString += to_string(i+1);;
		pages[i].loadText(sfString);
	}
}
