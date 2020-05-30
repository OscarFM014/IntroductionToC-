#include "../../Headers/include/Player.h"
#include <iostream>
using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}

void Player::CallInput()
{
    char userInput = ' ';
    cin >> userInput;

    switch (userInput)
    {
    case 'w':
        y--;
        //cout << "Up" << endl;
        break;
    case 's':
        y++;
        //cout << "Down" << endl;
        break;
    case 'a':
        x--;
        //cout << "left" << endl;
        break;
    case 'd':
        x++;
        //cout << "Rigth" << endl;
        break;
    default:
        break;
    };
    //cout << "X: " << x << endl;
    //cout << "Y: " << y << endl;
}

//Destrutor
/* 
Player::~Player()
{



}*/
