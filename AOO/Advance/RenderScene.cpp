#include "RenderScene.h"
#include <string>

void RenderScene::Draw()
{
	if (isLoaded)
	{
		//Draws in order of items sent. So send background first and then character
		for (int i = 0; i < _textures.size(); i++)
		{
			DrawTextureV(_textures[i], _textureLocation[i], WHITE);
		}
	}
}

void RenderScene::loadImage(char* path, int height, int width, Vector2 drawLocation)
{
	Image img = LoadImage(path);
	ImageResize(&img, width, height);
	_textures.push_back(LoadTextureFromImage(img));
	_textureLocation.push_back(drawLocation);
	UnloadImage(img);

	isLoaded = true;

}

void RenderScene::unloadScene()
{
	for (Texture2D txre : _textures)
	{
		UnloadTexture(txre);
	}
	_textures.clear();
	_textureLocation.clear();
	isLoaded = false;

}

bool RenderScene::isSceneLoaded()
{
	return isSceneLoaded;
}

