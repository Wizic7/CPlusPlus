#pragma once
#include "string";
#include <vector>;
#include <map>;
#include "Node.h"

class nodeMap
{
	private:
		std::string txtFile = "../TextFiles/Game.txt";
		std::map<int, Node> nodes;
	public:
		void BuildNodeMap();
};

