// Danielle Bufano
// 2/20/18

#ifndef Triangle_h
#define Triangle_h
#include "Point.h"
using namespace std;

class Triangle{
private:
    Point v1;
    Point v2;
    Point v3;
public:
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    Triangle(Point v1, Point v2, Point v3);
    void print();
    double getPerimeter();
    string getType();
};


#endif
