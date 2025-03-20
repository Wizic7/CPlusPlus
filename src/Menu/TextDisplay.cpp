#include "raylib.h"
#include "TextDisplay.h"
#include "Gui.h"
#include "eventTime.h"
#include <string>
#include <vector>


void TextDisplay::setIsChoice(bool state)
{
	isChoice = state;
}

void TextDisplay::setSelected(int option)
{
	selected = option;
}

void TextDisplay::setOptions(std::vector<std::string> nextOptions)
{
	options = nextOptions;
}

void TextDisplay::setDialouge(std::string nextDialouge)
{
	dialouge = nextDialouge;
}

void TextDisplay::Update()
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

void TextDisplay::Draw()
{
	DrawRectangle(0, GetScreenHeight() - TextDisplayHeight, GetScreenWidth(), TextDisplayHeight, LIGHTGRAY);
	
	// Draw player choices
	if (isChoice)
	{
		//The -50 allows for two 25 margins
		int choiceHeight = (TextDisplayHeight-30) / options.size();

		for (int i = 0; i < options.size(); i++)
		{
			const char* option = options[i].c_str();

			//The 25 is the margin
			int drawYPos = GetScreenHeight() - TextDisplayHeight + 30 + i * choiceHeight;

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
		DrawText(dialouge.c_str(), 20, GetScreenHeight() - TextDisplayHeight + 25, fontSize, BLUE);
	}
}