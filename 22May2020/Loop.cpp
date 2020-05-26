#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    while (counter < 1)
    {
        cout << counter << endl;
        counter++;
    }

    bool happy = false;

    do
    {
        cout << "IsHappy" << endl;
        happy = false;
    } while (happy);

    for (int i = 0; i < 100; i++)
    {
        cout << i << endl;
    }

    return 0;
}