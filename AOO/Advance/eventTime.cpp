#include "eventTime.h"
#include "raylib.h"

bool eventTime::eventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime > interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}