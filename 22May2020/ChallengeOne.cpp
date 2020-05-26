#include <iostream>

using namespace std;
//Calculate Areas
int main()
{
    //Circle Area
    float radio = 2;
    float Pi = 3.1416;
    float result = (radio * 2) * Pi;
    cout << result << endl;

    //Sphere Area
    float sRadio = 4;
    float resultSphere = 4 * (Pi * radio * 2);
    cout << resultSphere << endl;
    return 0;
}