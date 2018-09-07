// Danielle Bufano
// Circle h-file

#ifndef CIRCLE_h
#define CIRCLE_h

#include <string>
using namespace std;

const double PI = 3.141592;

class Circle {
public:
    Circle();
    Circle(double);
    Circle(double radius, string color);
    double getRadius()
    {return radius;}
    void setRadius(double radius);
    string getColor()
    {return color;}
    void setColor(string color);
    double getArea();
    void printInfo();
    
protected:
    double radius = 1.0;
    string color = "red";
};

#endif
