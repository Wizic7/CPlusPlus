#pragma once
#include <string>
#include <string.h>
#include <iostream>
#include <vector>
#include "eventTime.h"


class TextDisplay
{
private:
	int TextDisplayHeight = 200;
	int fontSize = 18;
	int selected = 0;
	//Font font;
	std::vector<std::string> options;
	std::string dialouge;
	bool isChoice = 0;
	bool isBlink = 0;
	eventTime updater;

public:
	void setIsChoice(bool state);
	void setDialouge(const std::string nextDialouge);
	void setSelected(int selected);
	void setOptions(const std::vector<std::string> nextOptions);
	void Update();
	void Draw();
};

