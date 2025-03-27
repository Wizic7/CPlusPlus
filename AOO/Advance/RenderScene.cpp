#include "RenderScene.h"

void RenderScene::Draw()
{
	if (isLoaded)
	{

	}
}

void RenderScene::loadScene()
{

	isLoaded = true;

}

void RenderScene::unloadScene()
{

	isLoaded = false;

}

bool RenderScene::isLoaded()
{
	return isSceneLoaded;
}

