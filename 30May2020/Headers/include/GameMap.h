#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"
class GameMap
{

public:
    GameMap();

    bool gameOver;
    MapCell *playerCell;
    MapCell mapCells[15][15];

    void Draw();

    //Get the player x and y
    bool SetPlayerCell(int pX, int pY);
    void loadMapFile();
    void drawIntro();
    void drawVictory();
    int id;

private:
protected:
};
#endif