#pragma once
#include "raylib.h"
#include "array"
#include <string>
#include <vector>
class Menu
{
private:
	int buttonWidth = GetScreenWidth() * 0.30;
	int buttonHeight = GetScreenHeight() * 0.15;
	int fontSize = 36;
	int hovered = -1;
	int buttonXPos;
	std::array<int,3> buttonYPos;
	std::vector<std::string> buttonText = {"Settings", "Load Game", "New Game"};
	std::vector<Texture2D> _textures;
	bool isLoaded = false;


public:
	void Draw();
	void Update();
	void LoadMenu();
	void DeloadMenu();
	bool isMenuLoaded();
};

