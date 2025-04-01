#include "SceneHandler.h"
#include "raylib.h"

void SceneHandler::renderNode()
{
	textDisplay.setSelected(0);
	handleSceneChange();
	if (node.connectedIds.size() == 1)
	{
		textDisplay.setIsChoice(false);
		textDisplay.setDialouge(node.OptionText[0])
	}
	else
	{
		textDisplay.setIsChoice(true);
		textDisplay.setOptions(node.OptionText)
	}
}

void SceneHandler::handleSceneChange()
{
	if (node.isSceneChange)
	{
		scene.unloadScene();
		for (int i = 0; i < node.filepaths.size(); i++)
		{
			scene.loadImage(node.filepaths[i].c_str(), node.heights[i], node.widths[i], node.positions[i]);
		}
	}
}

void SceneHandler::Update()
{
	if (IsKeyPressed(KEY_ENTER))
	{
		int selected = textDisplay.getSelected();
		if (selected >= node.connectedIds.size())
		{
			selected = node.connectedIds.size() - 1;
		}
		node = nodeMap[node.connectedIds[selected]];
		renderNode();
	}
}


void SceneHandler::setTextDisplay(TextDisplay display)
{
	textDisplay = display;
}

void SceneHandler::setScene(RenderScene renderScene)
{
	scene = renderScene
}