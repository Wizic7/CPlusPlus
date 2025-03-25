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