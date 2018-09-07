// Danielle Bufano
// Cone cpp

#include <iostream>
#include <cmath>
#include "Cone.h"
using namespace std;

Cone::Cone() : Cylinder()
{
    
}

Cone::Cone(double h, double rad)
{
    height = h;
    radius = rad;
}

double Cone::getArea()
{
    return (PI * radius * (radius + sqrt(height * height + radius * radius)));
}

double Cone::getVolume()
{
    return (Cylinder::getVolume()/ 3);
}

void Cone::printInfo()
{
    cout << "Cone Height is " << getHeight() <<  "; Radius is " << getRadius() << "; Color is " << getColor() << "; Surface area is " << getArea() << "; Volume is " << getVolume() << endl;
}
