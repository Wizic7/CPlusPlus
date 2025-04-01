#pragma once
#include "raylib.h"
#include "array"
#include <string>
#include <vector>

class Node
{
public:
	void setImageInfo(std::string scene);
	void chooseNode(std::string scene);

private:
	std::vector<std::string> filepaths;
	std::vector<int> widths;
	std::vector<int> heights;
	std::vector<Vector2> positions;
};
