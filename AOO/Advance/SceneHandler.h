#pragma once
#include "raylib.h"
#include <vector>
#include <map>
#include "RenderScene.h"
#include "TextDisplay.h"
#include "node.h"
#include "nodeMap.h"

class SceneHandler
{
private:
	std::map<int, Node > nodeMap;
	Node SceneNode;
	TextDisplay textDisplay;
	RenderScene scene;

public:
	void setScene(RenderScene renderScene);
	void setTextDisplay(TextDisplay display);
	void renderNode();
	void handleSceneChange();
	void Update();
	void Draw();
	bool isLoaded();
	void Unload();
};

