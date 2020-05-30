#include <iostream>
using namespace std;

class Mage
{
public:
    int mana;
    int health;
    int power;
    Mage(int nMana, int nHealth, int nPower)
    {
        mana = nMana;
        health = nHealth;
        power = nPower;
    }

    void spell()
    {
        cout << "Fly! " << power << endl;
    }
};

class MageBay : public Mage
{
public:
    MageBay(int nMana, int nHealth, int nPower) : Mage(nMana, nHealth, nPower)
    {
        mana = nMana;
        health = nHealth;
        power = nPower + 10;
    }
};

int main()
{
    Mage MJ(23, 23, 23);
    MageBay KB(8, 8, 24);
    MJ.spell();
    KB.spell();

    return 0;
}