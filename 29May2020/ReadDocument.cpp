#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream MyFile("GameData.txt");
    string playerName = "";

    if (MyFile.is_open())
    {

        MyFile << "Hello there!" << endl;

        /*for (int i = 0; i < 10; ++i)
        {
            MyFile << i << endl;
        }*/

        MyFile << "I'm Oscar" << endl;
        MyFile << "What's your name?" << endl;
        cin >> playerName;
        MyFile << playerName;
    }

    MyFile.close();

    ifstream MyFileRead("GameData.txt");
    string line;
    string nombreHeroe = "";
    int renglon = 0;

    if (MyFileRead.is_open())
    {
        //Save each line in the variable
        while (getline(MyFileRead, line))
        {
            if (renglon == 3)
            {
                nombreHeroe = line;
            }

            cout << line << endl;
            renglon++;
        }
    }
    else
    {
        cout << "No se pudo abrir el archivo" << endl;
    }

    cout << "Welcome " << nombreHeroe << endl;
    return 0;
}