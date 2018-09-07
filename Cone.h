// Danielle Bufano
// Cone h-file

#ifndef CONE_h
#define CONE_h

#include <string>
#include "Cylinder.h"
using namespace std;

class Cone : public Cylinder {
public:
    Cone();
    Cone(double height, double radius);
    double getArea();
    double getVolume();
    void printInfo();
};

#endif

