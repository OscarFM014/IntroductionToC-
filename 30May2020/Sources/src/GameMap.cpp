#include "../../Headers/include/GameMap.h"
#include <iostream>
#include <fstream>
using namespace std;

GameMap::GameMap()
{
    playerCell = NULL;
    loadMapFile();
    gameOver = false;
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
    if (mapCells[pY][pX].isWall() == false)
    {
        if (mapCells[pY][pX].id == '$')
        {
            drawVictory();
            gameOver = true;
            return true;
        }
        else
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
    }
    else
    {

        return false;
    }
}

void GameMap::drawIntro()
{
    ifstream fileWriter("Intro.txt");
    string line;
    if (fileWriter.is_open())
    {
        while (getline(fileWriter, line))
        {
            cout << line << endl;
        }

        cin >> line;
    }
    else
    {
        cout << "Fatal ERROR: Intro file could not be loaded" << endl;
    }
}

void GameMap::drawVictory()
{
    ifstream fileWriter("Victory.txt");
    string line;
    if (fileWriter.is_open())
    {
        while (getline(fileWriter, line))
        {
            cout << line << endl;
        }

        cin >> line;
    }
    else
    {
        cout << "Fatal ERROR: Victory file could not be loaded" << endl;
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
    int numLine = 0;
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