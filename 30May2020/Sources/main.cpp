#include <iostream>
#include "../Headers/include/Player.h"
#include "./src/Player.cpp"
#include "./src/MapCell.cpp"
#include "./src/GameMap.cpp"

using namespace std;

int main()
{
    bool gameOver = false;
    Player Hero;
    GameMap map;
    cout << "The Game is running!" << endl;
    //Game Loop
    while (!gameOver)
    {

        Hero.CallInput();

        map.SetPlayerCell(Hero.getX(), Hero.getY());

        map.Draw();
    }
    return 0;
}
