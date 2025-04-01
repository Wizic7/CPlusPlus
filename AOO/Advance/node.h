#pragma once
#include "raylib.h"
#include "array"
#include <string>
#include <vector>

class Node
{
public:
	std::vector<std::string> filepaths;
	std::vector<int> widths;
	std::vector<int> heights;
	std::vector<Vector2> positions;
	bool isSceneChange = false;
	std::vector<int> connectedIDs;
	std::vector<std::string> optionText;
	void setImageInfo(std::string scene);
	void setConnectedIDs(std::vector<int> IDs);
	void setOptionText(std::vector<std::string> options);
	Node();
	Node(std::vector<int> IDs, std::vector<std::string> options);
	Node(std::vector<int> IDs, std::vector<std::string> options, std::string scene);
};
