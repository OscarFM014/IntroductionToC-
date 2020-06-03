#include "../../Headers/include/MapCell.h"
#include <iostream>
using namespace std;

MapCell::MapCell()
{
    id = ' ';
}

bool MapCell::isWall()
{

    if (id == '1')
    {
        return true;
    }
    else
    {
        return false;
    }
}
