#include "raylib.h"
#include "Menu.h"
#include "Gui.h"
#include "eventTime.h"
#include <string>
#include <vector>


void Menu::setIsChoice(bool state)
{
	isChoice = state;
}

void Menu::setSelected(int option)
{
	selected = option;
}

void Menu::setOptions(std::vector<std::string> nextOptions)
{
	options = nextOptions;
}

void Menu::setDialouge(std::string nextDialouge)
{
	dialouge = nextDialouge;
}

void Menu::Update()
{
	if (updater.eventTriggered(1))
	{
		isBlink = !isBlink;
	}

	if (IsKeyPressed(KEY_UP) && selected != 0)
	{
		isBlink = false;
		selected--;
	}
	if (IsKeyPressed(KEY_DOWN) && selected != options.size() - 1)
	{
		isBlink = false;
		selected++;
	}
}

void Menu::Draw()
{
	DrawRectangle(0, GetScreenHeight() - menuHeight, GetScreenWidth(), menuHeight, LIGHTGRAY);
	
	// Draw player choices
	if (isChoice)
	{
		//The -50 allows for two 25 margins
		int choiceHeight = (menuHeight-30) / options.size();

		for (int i = 0; i < options.size(); i++)
		{
			const char* option = options[i].c_str();

			//The 25 is the margin
			int drawYPos = GetScreenHeight() - menuHeight + 30 + i * choiceHeight;

			if (i == selected && !isBlink)
			{
				DrawRectangle(0, drawYPos-15, GetScreenWidth(), 45, WHITE);
				DrawText(option, 20, drawYPos, fontSize, BLUE);
			}
			else {
				DrawText(option, 20, drawYPos, fontSize, BLACK);
			}	
		}
	}
	// just send dialouge through
	else
	{
		DrawText(dialouge.c_str(), 20, GetScreenHeight() - menuHeight + 25, fontSize, BLUE);
	}
}