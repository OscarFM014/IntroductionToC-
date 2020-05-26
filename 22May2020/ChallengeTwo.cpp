//Little History
#include <iostream>

using namespace std;

void makeHistory(char letter)
{
    switch (letter)
    {
    case 'O':
        cout << "Once upon a time an old man and his wife lived by the great blue sea. \n One day the old man went fishing and caught a real live gold fish. \nThe fish said: Oh ye, old fisherman !Pray set me free to the ocean and I will grant you \nwith n gifts, any gifts you wish !. Then the fish gave the old man a list of gifts and their \nprices. Some gifts on the list can have the same names but distinct prices. However, there \ncan't be two gifts with the same names and the same prices. Also, there can be gifts with distinct \nnames and the same prices. The old man can ask for n names of items from the list. If the fish's list has p occurrences of \nthe given name, then the old man can't ask for this name of item more than p times." << endl;
        break;
    case 'S':
        cout << "Some years ago we traveled to Saturn, a surprising planet, \nsurrounded by rings, the largest in the Solar System, formed of rocks and ice. " << endl;
        break;

    case 'T':
        cout << "Ten years ago..." << endl;
        break;
    default:
        cout << "I don´t really know what to say" << endl;
        break;
    }
}

int main()
{
    char letter;
    cout << "Type O, S or T and find the history" << endl;
    cin >> letter;
    makeHistory(letter);

    return 0;
}