#include "Game.h"
#include "TextDisplay.h"
#include <raylib.h>
//	typedef enum GameState { MENU = 0, BASE, DIALOUGE } GameState;

int Game::GetState()
{
	return currentState;
}


void Game::Draw()
{
	switch(currentState)
	{
		case MENU:
		{
			mainMenu.Draw();
		} break;
		case BASE:
		{
			scene.Draw();
		} break;
		case DIALOUGE:
		{
			scene.Draw();
		} break;
		default: break;
	}

}

void Game::Update()
{
	switch (currentState)
	{
		case MENU:
		{
			if (mainMenu.isMenuLoaded() == false)
			{
				mainMenu.LoadMenu();
			}
			mainMenu.Update();
		} break;
		case BASE:
		{
			scene.Update();
		} break;
		case DIALOUGE:
		{
			scene.Update();
		} break;
		default: break;
	}
}

void Game::Unload()
{
	if (mainMenu.isMenuLoaded())
	{
		mainMenu.DeloadMenu();
	}

	if (scene.isLoaded())
	{
		scene.Unload();
	}
}