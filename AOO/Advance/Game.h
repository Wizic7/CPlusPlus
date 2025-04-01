#pragma once
#include "Menu.h"
#include "SceneHandler.h"
class Game
{
private:
	typedef enum GameState { MENU = 0, BASE, DIALOUGE } GameState;
	int currentState = 0;
	SceneHandler scene;
	Menu mainMenu;

public:
	void Update();
	void Draw();
	void Unload();
	int GetState();
	
};

