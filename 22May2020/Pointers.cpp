#include <iostream>

using namespace std;

int main()
{
    int Direccion = 3509;
    int SecondDir = 1234;
    int *ApuntadorADir;

    ApuntadorADir = &Direccion;
    *ApuntadorADir = 3;
    ApuntadorADir = &SecondDir;
    cout << *ApuntadorADir << endl;
    return 0;
}