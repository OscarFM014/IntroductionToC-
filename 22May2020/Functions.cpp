#include <iostream>

using namespace std;

void PrintMessage()
{
    cout << "Hola mundo!" << endl;
}

bool IsPlayerDead(int hp)
{
    if (hp <= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Life = 0;
    if (IsPlayerDead(Life))
    {
        cout << "Game Over! " << endl;
    }
    PrintMessage();
    return 0;
}