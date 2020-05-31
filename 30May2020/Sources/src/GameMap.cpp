#include "../../Headers/include/GameMap.h"
#include <iostream>
#include <fstream>
using namespace std;

GameMap::GameMap()
{
    playerCell = NULL;
    loadMapFile();
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

bool GameMap::SetPlayerCell(int pX, int pY)
{
    if (mapCells[pX][pY].isWall() == false)
    {

        if (playerCell != NULL)
        {
            playerCell->id = ' ';
        }
        //cout << "Player X: " << pX << " Player Y: " << pY << endl;
        playerCell = &mapCells[pY][pX];
        playerCell->id = '4';
        return true;
    }
    else
    {

        return false;
    }
}

void GameMap::loadMapFile()
{
    /*ofstream fileWriter("Map.txt");
    if (fileWriter.is_open())
    {
        }
    else
    {

        cout << "Fatal ERROR: Map file could not be loaded" << endl;
    }*/
    string line;
    int numLine;
    ifstream myFile("Map.txt");
    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] == '0')
                {
                    mapCells[numLine][i].id = ' ';
                }
                else
                {
                    mapCells[numLine][i].id = line[i];
                }

                //cout << line << " " << endl;
            }

            numLine++;
        }
    }
    else
    {

        cout << "Fatal ERROR: Map file could not be loaded" << endl;
    }
}