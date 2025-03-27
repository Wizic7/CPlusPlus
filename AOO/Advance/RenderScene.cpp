#include "RenderScene.h"

void RenderScene::Draw()
{
	if (isLoaded)
	{

	}
}

void RenderScene::loadImage()
{

	isLoaded = true;

}

void RenderScene::unloadScene()
{

	isLoaded = false;

}

bool RenderScene::isSceneLoaded()
{
	return isSceneLoaded;
}

