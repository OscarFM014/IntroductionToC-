#include <iostream>

using namespace std;

class Cat
{
public:
    string Name;

    Cat()
    {
        Name = "Ball";
    }

    Cat(string name)
    {
        Name = name;
    }

    void sound()
    {

        cout << "Miau!" << endl;
    }
};

int main()
{
    Cat MyFirstPet;
    Cat MySecondPet("Basket");
    cout << MyFirstPet.Name << endl;
    cout << MySecondPet.Name << endl;
    MySecondPet.sound();
    return 0;
}