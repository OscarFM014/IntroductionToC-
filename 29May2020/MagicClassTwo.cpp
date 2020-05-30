#include <iostream>
using namespace std;

class Mage
{
public:
    Mage(int basePower, int baseHp)
    {
        power = basePower;
        hp = baseHp;
    }

    int Damage()
    {
        return power;
    }

    void GetDamage(int valor)
    {
        hp -= valor;
        cout << "Your actual life is: " << hp << endl;
    }

    void spellGreet()
    {
        cout << "Hi there!" << endl;
    }

protected:
    int power, hp;
};

class IceMage : public Mage
{
public:
    IceMage(int basePower, int baseHp) : Mage(basePower, baseHp)
    {
        power = basePower + 10;
        hp = baseHp;
    }
};

class FireMage : public Mage
{
public:
    FireMage(int basePower, int baseHp) : Mage(basePower, baseHp)
    {
        power = basePower;
        hp = baseHp + 10;
    }
};

int main()
{
    Mage *currentMage;
    FireMage Gandalf(50, 50);
    IceMage Harry(50, 50);

    currentMage = &Gandalf;
    currentMage->GetDamage(10);

    currentMage = &Harry;
    currentMage->GetDamage(10);

    return 0;
}