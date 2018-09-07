// Danielle Bufano
// Cylinder cpp

#include <iostream>
#include "Cylinder.h"
using namespace std;

Cylinder::Cylinder() : Circle()
{
    //height = 1.0;
}

Cylinder::Cylinder(double h)  : Circle()
{
    height = h;
}

Cylinder::Cylinder(double h, double r) : Circle(r)
{
    height = h;
}

Cylinder::Cylinder(double h, double rad, string c) : Circle(rad, c)
{
    height = h;
}

void Cylinder::setHeight(double h)
{
    height = h;
}

double Cylinder::getVolume()
{
    return (Circle::getArea() * height);
}

double Cylinder::getArea()
{
    return ((2 * PI * radius * height) + (2 * PI * radius * radius));
}
void Cylinder::printInfo()
{
    cout << "Cylinder Height is " << getHeight() <<  "; Radius is " << getRadius() << "; Color is " << getColor() << "; Surface area is " << getArea() << "; Volume is " << getVolume() << endl;
}
