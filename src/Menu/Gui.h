#ifndef GUI_H
#define GUI_H
#include "raylib.h"

class Gui
{
private:

    int screenWidth = 800;
    int screenHeight = 450;

public:
    int getScreenWidth();
    int getScreenHeight();
    void Draw(int State);
    void Draw();
    void drawMenu();
    void drawBoard();
    void drawEndScreen(int Winner);
};

#endif