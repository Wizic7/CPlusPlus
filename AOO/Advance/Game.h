#pragma once
#include "TextDisplay.h"
#include "Menu.h"
#include "RenderScene.h"
class Game
{
private:
	typedef enum GameState { MENU = 0, BASE, DIALOUGE } GameState;
	int currentState = 0;
	TextDisplay dialogueMenu;
	Menu mainMenu;
	RenderScene scene;

public:
	void Update();
	void Draw();
	void Unload();
	int GetState();
	void AdvanceDialogue();
};

