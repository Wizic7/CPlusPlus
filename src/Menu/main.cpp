#include "raylib.h"
#include "Gui.h"
#include "Game.h"
#include <string>
#include <vector>

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameState { LOGO = 0, MENU, DIALOUGE, ENDING } GameState;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    

    SetConfigFlags(FLAG_FULLSCREEN_MODE);
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Advance, Think Quick, Think Ahead");
    //InitWindow(1200, 900, "A test Window");


    // TODO: Initialize all required variables and load all required data here!

    int framesCounter = 0;          // Useful to count frames

    SetTargetFPS(60);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------


    std::vector<std::string> options = { "One: Hi", "Two: Hello", "Three: Bye", "Four: Welcome" };

    Game game;
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        game.Update();

        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------


        BeginDrawing();

        game.Draw();
     

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    // TODO: Unload all loaded data (textures, fonts, audio) here!

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}