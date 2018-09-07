// Triangle Test

// Danielle Bufano
// 2/20/18

#include <iostream>
#include "Triangle.h"
#include "Point.h"
using namespace std;

int main() {
    // Test program to test all constructors and public methods
    // Isoceles (4,10) (0,0) (8,0)
    Triangle t1(4,10,0,0,8,0);
    cout<<"t1"<<endl;
    t1.print();
    cout<<"Perimeter = "<<t1.getPerimeter()<<endl; cout<<"Type = "<<t1.getType()<<endl<<endl;
    // Isoceles (0,0) (8,0) (4,8)
    Triangle t2(0,0,8,0,4,8);
    cout<<"t2"<<endl;
    t2.print();
    cout<<"Perimeter = "<<t2.getPerimeter()<<endl; cout<<"Type = "<<t2.getType()<<endl<<endl;
    // Scalene (0,0) (4,0) (4,3)
    Triangle t3(0,0,4,0,4,3);
    cout<<"t3"<<endl;
    t3.print();
    cout<<"Perimeter = "<<t3.getPerimeter()<<endl; cout<<"Type = "<<t3.getType()<<endl<<endl;
    return 0; }
