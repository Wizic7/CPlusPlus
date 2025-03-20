#include "Menu.h"
#include "raylib.h"


void Menu::Draw()
{
	if (isLoaded)
	{
		int buttonCount = 1;
		int spacing = GetScreenHeight() * .05;
		int button_x = buttonWidth / 2;
		int button_y = buttonHeight / 3;

		int x_pos = GetScreenWidth() / 2 - buttonWidth / 2;
		int y_pos = GetScreenHeight() - spacing * buttonCount - buttonHeight * buttonCount;
		DrawRectangle(x_pos, y_pos, buttonWidth, buttonHeight, GRAY);
		DrawText("Settings", x_pos + (button_x - MeasureText("Settings", fontSize)/2), y_pos + button_y, fontSize, RED);
		buttonCount++;
		x_pos = GetScreenWidth() / 2 - buttonWidth / 2;
		y_pos = GetScreenHeight() - spacing * buttonCount - buttonHeight * buttonCount;
		DrawRectangle(x_pos, y_pos, buttonWidth, buttonHeight, GRAY);
		DrawText("Load Game", x_pos + (button_x - MeasureText("Load Game", fontSize) / 2), y_pos + button_y, fontSize, RED);
		buttonCount++;
		x_pos = GetScreenWidth() / 2 - buttonWidth / 2;
		y_pos = GetScreenHeight() - spacing * buttonCount - buttonHeight * buttonCount;
		DrawRectangle(x_pos, y_pos, buttonWidth, buttonHeight, GRAY);
		DrawText("New Game", x_pos + (button_x - MeasureText("New Game", fontSize) / 2), y_pos + button_y, fontSize, RED);
		buttonCount++;
	}

}

void Menu::Update()
{

}

void Menu::LoadMenu()
{
	isLoaded = true;
}

void Menu::DeloadMenu()
{
	isLoaded = false;
}

bool Menu::isMenuLoaded()
{
	return isLoaded;
}