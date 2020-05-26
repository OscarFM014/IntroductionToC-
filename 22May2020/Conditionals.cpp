#include <iostream>

using namespace std;

int main()
{

    int Math = 0;
    int Biology = 0;

    cout << "What was your grade in Math? " << endl;
    cin >> Math;

    cout << "What was your grade in Biology? " << endl;
    cin >> Biology;

    if (Math == 100)
    {
        cout << "Congratulations! You are a genius in Math!" << endl;
    }
    else if (Math >= 70)
    {
        cout << "Great! You approved Math!" << endl;
    }
    else
    {
        cout << "Oh no! You failed Math!" << endl;
    }

    if (Biology == 100)
    {
        cout << "Congratulations! You are a genius in Biology!" << endl;
    }
    else if (Biology >= 70)
    {
        cout << "Amazing! You approved Biology!" << endl;
    }
    else
    {
        cout << "Oh no! You failed Biology!" << endl;
    }
    return 0;

    switch (Math)
    {
    case 99:
        cout << "Almost perfect, You are amazing at Math!" << endl;
        break;
    }
}