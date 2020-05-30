#include "../../Headers/include/GameMap.h"
#include <iostream>
using namespace std;

GameMap::GameMap()
{
    playerCell = NULL;
}

void GameMap::Draw()
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cout << mapCells[i][j].id;
        }
        cout << endl;
    }
}

void GameMap::SetPlayerCell(int pX, int pY)
{
    if (playerCell != NULL)
    {
        playerCell->id = 0;
    }
    //cout << "Player X: " << pX << " Player Y: " << pY << endl;
    playerCell = &mapCells[pY][pX];
    playerCell->id = 1;
}

void GameMap::