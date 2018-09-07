// Danielle Bufano
// Square cpp

#include <iostream>
#include <cstdlib>
#include "Square.h"
using namespace std;

void Square::setNum(int n)
{
    num = n;
}

void Square::blackSquare(bool b)
{
    if (b == 1)
        isBlack = true;
    else
        isBlack = false;
}

void Square::printBool()
{
    if (isSquareBlack())
        cout << " 0 ";
    else
        cout << " 1 ";
}


