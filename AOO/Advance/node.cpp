#include <iostream>
#include <vector>
#include <string>
#include "raylib.h"
#include "Node.h"
using namespace std;
Node::Node()
{
}
Node::Node(vector<int> IDs, vector<string> options)
{
    connectedIDs = IDs;
    optionText = options;
    isSceneChange = false;
}
Node::Node(vector<int> IDs, vector<string> options, string scene)
{
    connectedIDs = IDs;
    optionText = options;
    setImageInfo(scene);
}


void Node::setConnectedIDs(vector<int> IDs)
{
    connectedIDs = IDs;
}

void Node::setOptionText(vector<string> options)
{
    optionText = options;
}

     void Node::setImageInfo(string scene) {

        if (scene == "cave") {
            filepaths = { "..\\images\\ooga_in_cave.jpeg" };
            widths = { GetScreenWidth() };
            heights = { GetScreenHeight() };
            positions = { {0, 0} };
            isSceneChange = true;
        }
        else if (scene == "timeTravel") {
            filepaths = { "..\\images\\ooga_through_the_portal.jpeg" };
            widths = { GetScreenWidth() };
            heights = { GetScreenHeight() };
            positions = { {0, 0} };
            isSceneChange = true;
        }
        else if (scene == "sittingRoom") {
            filepaths = { "..\\images\\ooga_in_sitting_room.jpeg" };
            widths = { GetScreenWidth() };
            heights = { GetScreenHeight() };
            positions = { {0, 0} };
            isSceneChange = true;
        }
        else if (scene == "meet-cook-outside") {
            filepaths = { "..\\images\\mansion.jpeg", "..\\images\\Cook_transparent.png" };
            widths = { GetScreenWidth(), GetScreenWidth() };
            heights = { GetScreenHeight(), GetScreenHeight() };
            positions = { {0, 0}, {0, 0} };
            isSceneChange = true;

        }
        else if (scene == "meet-cook") {
            filepaths = { "..\\images\\mansion.jpeg", "..\\images\\Cook_transparent.png" };
            widths = { GetScreenWidth(), GetScreenWidth() };
            heights = { GetScreenHeight(), GetScreenHeight() };
            positions = { {0, 0}, {0, 0} };
            isSceneChange = true;
        }
        else if (scene == "meet-dad") {
            filepaths = { "..\\images\\mansion.jpeg", "..\\images\\dad_transparent.png" };
            widths = { GetScreenWidth(), GetScreenWidth() };
            heights = { GetScreenHeight(), GetScreenHeight() };
            positions = { {0, 0}, {0, 0} };
            isSceneChange = true;
        }
        else if (scene == "meet-daughter") {
            filepaths = { "..\\images\\mansion.jpeg", "..\\images\\daughter_transparent.png" };
            widths = { GetScreenWidth(), GetScreenWidth() };
            heights = { GetScreenHeight(), GetScreenHeight() };
            positions = { {0, 0}, {0, 0} };
            isSceneChange = true;
        }
        else if (scene == "meet-aunt") {
            filepaths = { "..\\images\\mansion.jpeg", "..\\images\\drun_aunt_transparent.png" };
            widths = { GetScreenWidth(), GetScreenWidth() };
            heights = { GetScreenHeight(), GetScreenHeight() };
            positions = { {0, 0}, {0, 0} };
            isSceneChange = true;
        }
        else if (scene == "meet-maid") {
            filepaths = { "..\\images\\mansion.jpeg", "..\\images\\maid_transparent.png" };
            widths = { GetScreenWidth(), GetScreenWidth() };
            heights = { GetScreenHeight(), GetScreenHeight() };
            positions = { {0, 0}, {0, 0} };
            isSceneChange = true;
        }
        else if (scene == "meet-mom") {
            filepaths = { "..\\images\\mansion.jpeg", "..\\images\\mom_transparent.png" };
            widths = { GetScreenWidth(), GetScreenWidth() };
            heights = { GetScreenHeight(), GetScreenHeight() };
            positions = { {0, 0}, {0, 0} };
            isSceneChange = true;
        }

       
    }
