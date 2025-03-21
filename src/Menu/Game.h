#pragma once
#include "TextDisplay.h"
#include "Menu.h"
class Game
{
private:
	typedef enum GameState { MENU = 0, BASE, DIALOUGE } GameState;
	int currentState = 0;
	TextDisplay dialogueMenu;
	Menu mainMenu;

public:
	void Update();
	void Draw();
	int GetState();
	void AdvanceDialogue();
};

