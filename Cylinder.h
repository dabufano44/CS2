// Danielle Bufano
// Cylinder h-file

#ifndef CYLINDER_h
#define CYLINDER_h

#include <string>
#include "Circle.h"
using namespace std;

class Cylinder : public Circle {
public:
    Cylinder();
    Cylinder(double height);
    Cylinder(double height, double radius);
    Cylinder(double height, double radius, string color);
    double getHeight()
    {return height;}
    void setHeight(double height);
    double getVolume();
    double getArea();
    void printInfo();
protected:
    double height = 1.0;
    
};

#endif
