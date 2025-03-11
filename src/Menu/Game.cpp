#include "Game.h"
#include <raylib.h>
//	typedef enum GameState { BASE = 0, DIALOUGE } GameState;

void Game::Draw()
{
	switch(currentState)
	{
		case BASE:
		{

		}
		case DIALOUGE:
		{
			dialogueMenu.Draw();
		}
	}

}

void Game::Update()
{
	switch (currentState)
	{
		case BASE:
		{

		}
		case DIALOUGE:
		{
			if (IsKeyPressed(KEY_ENTER))
			{
				AdvanceDialogue();
			}
			dialogueMenu.Update();
		}
	}
}

void Game::AdvanceDialogue()
{

}