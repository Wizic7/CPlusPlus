#pragma once
#include <string>
#include <string.h>
#include <iostream>
#include <vector>
#include "raylib.h"
class RenderScene
{
private: 	
	std::vector<std::string> _filepaths;
	std::vector<Image> Images;
	//List of Currently Rendered Objects
	bool isLoaded = false;

public:
	void setImageFiles(std::vector<std::string> filepaths);
	void loadScene();
	void Draw();
	void unloadScene();


};

