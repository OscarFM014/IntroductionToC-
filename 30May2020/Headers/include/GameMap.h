#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"
class GameMap
{

public:
    GameMap();

    MapCell *playerCell;
    MapCell mapCells[15][15];

    void Draw();

    //Get the player x and y
    bool SetPlayerCell(int pX, int pY);
    void loadMapFile();
    int id;

private:
protected:
};
#endif