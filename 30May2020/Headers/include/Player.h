#ifndef PLAYER_H
#define PLAYER_H

class Player
{

public:
    Player();

    void CallInput();

    //Destrutor
    //virtual ~Player();

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

protected:
    int x, y;

private:
};
#endif //PLAYER_H