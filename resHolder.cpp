#include "resHolder.h"
#include "page.h"
#include <fstream>
#include <string>
using namespace std;

ResHolder resHolder;

void ResHolder::loadResourses()
{
	button.loadFromFile("resourses/button_1.png");
	checkBox.loadFromFile("resourses/checkBox.png");

	sf::FileInputStream stream;
	stream.open("resourses/menuBG.jpg");
	menuBG.loadFromStream(stream);
	
	track.openFromFile("resourses/AaronSmithDancin.ogg");
	font.loadFromFile("resourses/ALGER.TTF");
	loadPages();
	std::cout << "resourses loaded" << std::endl;
}

void ResHolder::loadPages()
{
	sf::String sfString;
	//std::string stdString;
	char symbol;
	char buffer[1];
	ifstream file;
	file.open("resourses/scenario.txt");
	for (int i = 0; ( i < COUNTOFPAGES ) && !file.eof() ; i++)
	{
		//if (file.eof())break;
		sfString.clear();
		sfString += "resourses/locations/";
		sfString += to_string(i);
		sfString += ".png";
		pages[i].setPicture(sfString);
		
		sfString.clear();
		file.read(buffer, 1);
		while (buffer[0] != '$')
		{
			sfString += buffer[0];
			file.read(buffer, 1);
		} 
		pages[i].loadText(sfString);
	}
	file.close();
}
