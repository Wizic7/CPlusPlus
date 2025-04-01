#pragma once
#include "raylib.h"
#include <vector>
#include "RenderScene.h"
#include "TextDisplay.h"

class SceneHandler
{
private:
	//std::vector<node> nodeMap;
	//node SceneNode;
	TextDisplay textDisplay;
	RenderScene scene;

public:
	void setScene(RenderScene renderScene);
	void setTextDisplay(TextDisplay display);
	void renderNode();
	void handleSceneChange();
	void Update();
};

