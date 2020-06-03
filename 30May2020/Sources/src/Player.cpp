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
        lasty = y;
        y--;
        //cout << "Up" << endl;
        break;
    case 's':
        lasty = y;
        y++;
        //cout << "Down" << endl;
        break;
    case 'a':
        lastx = x;
        x--;
        //cout << "left" << endl;
        break;
    case 'd':
        lastx = x;
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
//Player::~Player(){}

void Player::resetPosition()
{

    x = lastx;
    y = lasty;
}