// Danielle Bufano
// 2/20/18

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Point.h"
#include "Triangle.h"
using namespace std;

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    v1.setXY(x1, y1);
    v2.setXY(x2, y2);
    v3.setXY(x3, y3);
}

Triangle::Triangle(Point vertex1, Point vertex2, Point vertex3)
{
    v1 = vertex1;
    v2 = vertex2;
    v3 = vertex3;
}

void Triangle::print()
{
    cout << "Triangle: [v1: (" << v1.getX() << "," << v1.getY() << "), v2: (" << v2.getX() << "," << v2.getY() << "), v3: (" << v3.getX() << "," << v3.getY() << ")]" << endl;
}

double Triangle::getPerimeter()
{
    double distance1, distance2, distance3;
    double perimeter;
    distance1 = v1.distance(v2);
    distance2 = v2.distance(v3);
    distance3 = v3.distance(v1);
    //cout << distance1 << " " << distance2 << " " << distance3 << endl;
    perimeter = distance1 + distance2 + distance3;
    return perimeter;
}

string Triangle::getType()
{
    string type;
    if (v1.distance(v2) == v2.distance(v3) && v2.distance(v3) == v3.distance(v1))
        type = "Equilateral";
    else if (v1.distance(v2) != v2.distance(v3) && v2.distance(v3) != v3.distance(v1) && v1.distance(v2) != v3.distance(v1))
        type = "Scalene";
    else
        type = "Isosceles";
    return type;
}


