#include <iostream>

using namespace std;

class Dog
{

public:
    string mBark;
    Dog(string name, string barkType)
    {
        mName = name;
        mBark = barkType;
    }

    string getName()
    {
        return mName;
    }

    void setName(string newName)
    {
        mName = newName;
    }

private:
    string mName;
};

int main()
{
    Dog FirstDog("Pinky", "Riiiiuuff!");
    cout << FirstDog.getName() << endl;
    FirstDog.setName("Pinko");
    cout << FirstDog.getName() << endl;
    return 0;
}