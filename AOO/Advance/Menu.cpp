#include "Menu.h"
#include "raylib.h"
#include "array"
#include <vector>



void Menu::Draw()
{
	if (isLoaded)
	{
		DrawTexture(_textures[0], 0, 0,WHITE);
		DrawTexture(_textures[1], _textures[1].width / 3, _textures[1].height/3, WHITE);

		int buttonCount = 1;
		int spacing = GetScreenHeight() * .05;
		int rightShift = GetScreenWidth() / 4;

		int button_x = buttonWidth / 2;
		int button_y = buttonHeight / 3;
		
		for(int i = 0; i < buttonText.size(); i++){
			int x_pos = GetScreenWidth() / 2 - buttonWidth / 2 + rightShift;
			int y_pos = GetScreenHeight() - spacing * buttonCount - buttonHeight * buttonCount;
			const char* text = buttonText[i].c_str();

			Color recColor = WHITE;
			Color textColor = BLACK;
			if (hovered == i)
			{
				recColor = BLUE;
				textColor = WHITE;
			}
			
			buttonYPos[buttonCount - 1] = y_pos;
			buttonXPos = x_pos;

			DrawRectangle(x_pos, y_pos, buttonWidth, buttonHeight, recColor);
			DrawText(text, x_pos + (button_x - MeasureText(text, fontSize) / 2), y_pos + button_y, fontSize, textColor);
			buttonCount++;
		}
	}

}

void Menu::Update()
{
	int mouseX = GetMouseX();
	int mouseY = GetMouseY();
	bool inXRange = mouseX > buttonXPos && mouseX < buttonXPos + buttonWidth;
	bool inYRange = false;

	if (inXRange) {
		
		for (int i = 0; i < buttonYPos.size(); i++)
		{
			if (mouseY > buttonYPos[i] && mouseY < buttonYPos[i] + buttonHeight)
			{
				hovered = i;
				inYRange = true;
			}
		}
	}
	if(!inXRange || !inYRange)
	{
		hovered = -1;
	}

	if (IsMouseButtonReleased)
	{
		if (hovered >= 0)
		{
			switch (hovered) {
				case 0:
				{
				//Settings
					break;
				}
				case 1:
				{
					//Load game
					break;
				}
				case 2:
				{
					//New game
					break;
				}
			}
		}
	}

}

void Menu::LoadMenu()
{
	Image Title = LoadImage("./images/title.jpg");
	Image Background = LoadImage("./images/ooga_in_sitting_room.jpeg");

	ImageResize(&Background, GetScreenWidth(), GetScreenHeight());
	ImageResize(&Title, buttonWidth / 2, buttonWidth / 2);

	Texture2D title = LoadTextureFromImage(Title);
	Texture2D background = LoadTextureFromImage(Background);

	_textures.push_back(background);
	_textures.push_back(title);


	UnloadImage(Title);
	UnloadImage(Background);

	
	isLoaded = true;
}

void Menu::DeloadMenu()
{
	for (Texture2D txre: _textures)
	{
		UnloadTexture(txre);
	}
	isLoaded = false;
}

bool Menu::isMenuLoaded()
{
	return isLoaded;
}