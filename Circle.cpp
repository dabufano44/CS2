// Danielle Bufano
// Circle cpp

#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle()
{
   // radius = 1.0;
    //color = "red";
}

Circle::Circle(double rad)
{
    radius = rad;
}

Circle::Circle(double rad, string c)
{
    radius = rad;
    color = c;
}

void Circle::setRadius(double rad)
{
    radius = rad;
}

void Circle::setColor(string c)
{
    color = c;
}

double Circle::getArea()
{
    return (PI * radius * radius);
}

void Circle::printInfo()
{
    cout << "Circle Radius is " << getRadius() << "; Color is " << getColor() << "; Area is " << getArea() << endl;
}
