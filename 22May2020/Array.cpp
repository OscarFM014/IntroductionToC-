#include <iostream>
using namespace std;

int main()
{
    char Ties[2];
    Ties[0] = 'R';
    Ties[1] = 'B';

    string names[4] = {"Oscar",
                       "Linda",
                       "Pinky",
                       "Valentino"};
    cout << names[3] << endl;

    int ids[3][3] = {{0, 1, 2}, {0, 1, 2}, {0, 1, 2}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ids[i][j] << " ";
        }
        cout << "" << endl;
    }
    return 0;
}