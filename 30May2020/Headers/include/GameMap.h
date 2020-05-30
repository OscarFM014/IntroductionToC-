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
    void SetPlayerCell(int pX, int pY);

    int id;

private:
protected:
    void loadMapFile();
};
#endif