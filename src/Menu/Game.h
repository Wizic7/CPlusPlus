#pragma once
#include "Menu.h"
class Game
{
private:
	typedef enum GameState { BASE = 0, DIALOUGE } GameState;
	int currentState = 0;
	Menu dialogueMenu;

public:
	void Update();
	void Draw();
	void AdvanceDialogue();
};

