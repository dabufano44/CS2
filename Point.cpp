// Danielle Bufano
// 2/20/18

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Point.h"
using namespace std;

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(int x_coord, int y_coord)
{
    x = x_coord;
    y = y_coord;
}

void Point::setX(int x_coord)
{
    x = x_coord;
}

void Point::setY(int y_coord)
{
    y = y_coord;
}

void Point::print()
{
    cout << "(" << x << ", " << y << ")";
}

void Point::setXY(int x_coord, int y_coord)
{
    x = x_coord;
    y = y_coord;
}

void Point::getXY(int coords[])
{
    coords[0] = x;
    coords[1] = y;
}

double Point::distance(int x1, int y1)
{
    double distance;
    distance = sqrt(((x1-x)*(x1-x)) + ((y1 - y)*(y1-y)));
    return distance;
}

double Point::distance(Point another)
{
    double distance;
    distance = sqrt(((another.x-x)*(another.x-x)) + ((another.y-y)*(another.y-y)));
    return distance;
}

double Point::distance()
{
    double distance;
    distance = sqrt(((0-x)*(0-x)) + ((0 - y)*(0-y)));
    return distance;
}
