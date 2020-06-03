#include <iostream>
#include "../Headers/include/Player.h"
#include "./src/Player.cpp"
#include "./src/MapCell.cpp"
#include "./src/GameMap.cpp"

using namespace std;

int main()
{

    Player Hero;
    GameMap map;
    map.SetPlayerCell(Hero.x, Hero.y);
    map.drawIntro();
    map.Draw();

    //cout << "The Game is running!" << endl;
    //Game Loop
    while (!map.gameOver)
    {
        cout << "To Move use: 'w' 's' 'd' 'a'" << endl;
        Hero.CallInput();
        cout << "X: " << Hero.x << " Y: " << Hero.y << endl;
        if (map.SetPlayerCell(Hero.x, Hero.y))
        {

            map.Draw();
        }
        else
        {
            Hero.resetPosition();
            map.Draw();
        }
    }
    return 0;
}
