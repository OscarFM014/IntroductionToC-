#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void DrawMap(int HeroPosX, int HeroPosY, char Gamemap[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j != HeroPosX || i != HeroPosY)
            {
                cout << Gamemap[i][j] << " ";
            }
            else
            {
                cout << 'H' << " ";
            }
        }
        cout << " " << endl;
    }
}

int main()
{
    int HeroPosX = 1;
    int HeroPosY = 0;
    bool GameOver = false;
    char Input = ' ';

    char Gamemap[10][10] = {{
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            },
                            {
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            },
                            {
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            },
                            {
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            },
                            {
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            },
                            {
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            },
                            {
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            },
                            {
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            },
                            {
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            },
                            {
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                                '1',
                            }};

    ofstream Map("ChallengeThree.txt");
    for (int i = 0; i < 10; i++)
    {
        Map << i << endl;
    }
    Map.close();

    ifstream MyFileReader("ChallengeThree.txt");
    string line;
    if (MyFileReader.is_open())
    {
        while (getline(MyFileReader, line))
        {
            if (line.compare("3") == 0)
            {
                int i = std::stoi(line);
                HeroPosX = i;
                HeroPosY = i;
            }
            cout << line << endl;
        }
    }
    DrawMap(HeroPosX, HeroPosY, Gamemap);
    while (!GameOver)
    {
        cin >> Input;
        if (Input == 'd')
        {
            HeroPosX++;
        }
        else if (Input == 'a')
        {
            HeroPosX--;
        }
        else if (Input == 's')
        {
            HeroPosY++;
        }
        else if (Input == 'w')
        {
            HeroPosY--;
        }
        else if (Input == 'p')
        {
            GameOver = true;
        }
        DrawMap(HeroPosX, HeroPosY, Gamemap);
    }

    return 0;
}