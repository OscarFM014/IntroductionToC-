#include "../../Headers/include/MapCell.h"
#include <iostream>
using namespace std;

MapCell::MapCell()
{
    id = 0;
}

bool MapCell::isWall()
{

    if (id == '1')
    {
        return true;
    }

    return false;
}
