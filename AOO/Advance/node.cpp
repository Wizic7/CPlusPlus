#include <iostream>
#include <vector>
#include <string>
#include "raylib.h"
using namespace std;
class node;
// Define a structure to hold scene change information
struct SceneChangeInfo {
    vector<string> filepaths;
    vector<int> widths;
    vector<int> heights;
    vector<Vector2> positions;
};

SceneChangeInfo setImageInfo(string scene)
{   
    SceneChangeInfo sceneChangeInfo;
    
    sceneChangeInfo.filepaths = { NULL};
    sceneChangeInfo.widths = { NULL };
    sceneChangeInfo.heights = { NULL };
    sceneChangeInfo.positions = { {NULL, NULL} };

    return sceneChangeInfo;
    
}

SceneChangeInfo chooseNode(string scene) {
    
    SceneChangeInfo sceneChangeInfo;

    if (scene == "cave") {
        sceneChangeInfo.filepaths = { "..\\images\\ooga_in_cave.jpeg" };
        sceneChangeInfo.widths = { GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0} };
    }
    else if (scene == "timeTravel") {
        sceneChangeInfo.filepaths = { "..\\images\\ooga_through_the_portal.jpeg" };
        sceneChangeInfo.widths = { GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0} };
    }
    else if (scene == "sittingRoom") {
        sceneChangeInfo.filepaths = { "..\\images\\ooga_in_sitting_room.jpeg" };
        sceneChangeInfo.widths = { GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0} };
    }
    else if (scene == "meet-cook-outside") {
        sceneChangeInfo.filepaths = { "..\\images\\mansion.jpeg", "..\\images\\Cook_transparent.png" };
        sceneChangeInfo.widths = { GetScreenWidth(), GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight(), GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0}, {0, 0} };

    }
    else if (scene == "meet-cook") {
        sceneChangeInfo.filepaths = { "..\\images\\mansion.jpeg", "..\\images\\Cook_transparent.png" };
        sceneChangeInfo.widths = { GetScreenWidth(), GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight(), GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0}, {0, 0} };
    }
    else if (scene == "meet-dad") {
        sceneChangeInfo.filepaths = { "..\\images\\mansion.jpeg", "..\\images\\dad_transparent.png" };
        sceneChangeInfo.widths = { GetScreenWidth(), GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight(), GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0}, {0, 0} };
    }
    else if (scene == "meet-daughter") {
        sceneChangeInfo.filepaths = { "..\\images\\mansion.jpeg", "..\\images\\daughter_transparent.png" };
        sceneChangeInfo.widths = { GetScreenWidth(), GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight(), GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0}, {0, 0} };
    }
    else if (scene == "meet-aunt") {
        sceneChangeInfo.filepaths = { "..\\images\\mansion.jpeg", "..\\images\\drun_aunt_transparent.png" };
        sceneChangeInfo.widths = { GetScreenWidth(), GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight(), GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0}, {0, 0} };
    }
    else if (scene == "meet-maid") {
        sceneChangeInfo.filepaths = { "..\\images\\mansion.jpeg", "..\\images\\maid_transparent.png" };
        sceneChangeInfo.widths = { GetScreenWidth(), GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight(), GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0}, {0, 0} };
    }
    else if (scene == "meet-mom") {
        sceneChangeInfo.filepaths = { "..\\images\\mansion.jpeg", "..\\images\\mom_transparent.png" };
        sceneChangeInfo.widths = { GetScreenWidth(), GetScreenWidth() };
        sceneChangeInfo.heights = { GetScreenHeight(), GetScreenHeight() };
        sceneChangeInfo.positions = { {0, 0}, {0, 0} };
    }

    return sceneChangeInfo; 
}
