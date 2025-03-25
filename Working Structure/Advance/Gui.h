#ifndef GUI_H
#define GUI_H
#include "raylib.h"

class Gui
{
private:

    int screenWidth = 1200;
    int screenHeight = 900;

public:
    int getScreenWidth();
    int getScreenHeight();
    void Draw();
    void drawMenu();
    void drawBoard();
    void drawEndScreen(int Winner);
};

#endif