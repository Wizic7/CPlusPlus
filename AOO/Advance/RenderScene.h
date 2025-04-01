#pragma once
#include <string>
#include <string.h>
#include <iostream>
#include <vector>
#include "raylib.h"
class RenderScene
{
private: 	
	std::vector<Vector2> _textureLocation;
	std::vector<Texture2D> _textures;
	//List of Currently Rendered Objects
	bool isLoaded = false;

public:
	void loadImage(const char* path, int height, int width, Vector2 drawLocation);
	void Draw();
	void unloadScene();
	bool isSceneLoaded();


};

