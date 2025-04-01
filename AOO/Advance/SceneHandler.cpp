#include "SceneHandler.h"
#include "raylib.h"

void SceneHandler::renderNode()
{
	textDisplay.setSelected(0);
	handleSceneChange();
	if (SceneNode.connectedIDs.size() == 1)
	{
		textDisplay.setIsChoice(false);
		textDisplay.setDialouge(SceneNode.optionText[0]);
	}
	else
	{
		textDisplay.setIsChoice(true);
		textDisplay.setOptions(SceneNode.optionText);
	}
}

void SceneHandler::handleSceneChange()
{
	if (SceneNode.isSceneChange)
	{
		scene.unloadScene();
		for (int i = 0; i < SceneNode.filepaths.size(); i++)
		{
			scene.loadImage(SceneNode.filepaths[i].c_str(), SceneNode.heights[i], SceneNode.widths[i], SceneNode.positions[i]);
		}
	}
}

void SceneHandler::Update()
{
	textDisplay.Update();

	if (IsKeyPressed(KEY_ENTER))
	{
		int selected = textDisplay.getSelected();
		if (selected >= SceneNode.connectedIDs.size())
		{
			selected = SceneNode.connectedIDs.size() - 1;
		}
		SceneNode = nodeMap[SceneNode.connectedIDs[selected]];
		renderNode();
	}

}

void SceneHandler::Draw()
{
	scene.Draw();
	textDisplay.Draw();
}


void SceneHandler::setTextDisplay(TextDisplay display)
{
	textDisplay = display;
}

void SceneHandler::setScene(RenderScene renderScene)
{
	scene = renderScene;
}

bool SceneHandler::isLoaded()
{
	return scene.isSceneLoaded();
}

void SceneHandler::Unload()
{
	scene.unloadScene();
}