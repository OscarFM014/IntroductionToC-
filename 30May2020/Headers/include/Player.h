#ifndef PLAYER_H
#define PLAYER_H

class Player
{

public:
    Player();

    void CallInput();
    int lastx, lasty;
    int x, y;

    void resetPosition();
};
#endif //PLAYER_H