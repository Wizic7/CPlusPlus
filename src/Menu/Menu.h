#pragma once
#include "raylib.h"
class Menu
{
private: 
	int buttonWidth = GetScreenWidth() * 0.35;
	int buttonHeight = GetScreenHeight() * 0.15;
	int fontSize = 36;
	bool isLoaded = false;


public:
	void Draw();
	void Update();
	void LoadMenu();
	void DeloadMenu();
	bool isMenuLoaded();
};

