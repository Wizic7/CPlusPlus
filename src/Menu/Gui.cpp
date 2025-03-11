#include "raylib.h"
#include "Gui.h"

int Gui::getScreenWidth()
{
    return screenWidth;
}

int Gui::getScreenHeight()
{
    return screenHeight;
}

void Gui::Draw(int State)
{
    //ClearBackground(RAYWHITE);
    //BeginDrawing();
    //{ LOGO = 0, TITLE, GAMEPLAY, ENDING }
    if (0)
    {
        DrawRectangle(0, 0, screenWidth, screenHeight, GRAY);
        DrawText("LOGO SCREEN", 20, 20, 40, LIGHTGRAY);
        DrawText("WAIT for 2 SECONDS...", 290, 220, 20, GRAY);
    }
    else if(1)
    {
        DrawRectangle(0, 0, screenWidth, screenHeight, WHITE);
    }
    else if (2)
    {
        DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
    }
    else if (3)
    {
        DrawRectangle(0, 0, screenWidth, screenHeight, MAROON);
    }
    //EndDrawing();
}
void Gui::Draw()
{
    DrawRectangle(0, 0, screenWidth, screenHeight, MAROON);

}

void Gui::drawMenu()
{
    DrawRectangle(0, 0, screenWidth, screenHeight, GREEN);

}

void Gui::drawBoard()
{

}

void Gui::drawEndScreen(int Winner)
{

}