// Test Point 

// Danielle Bufano
// 2/20/18

#include <iostream>
#include <cstdlib>
#include "Point.h"
using namespace std;


int main() {
    // Test program to test all constructors and public methods
    Point p1; // Test constructor
    p1.print();
    cout<<endl;
    // (0,0)
    p1.setX(8);   // Test setters
    p1.setY(6);
    cout<<"p1 x is: "<< p1.getX()<<endl;
    cout<<"p1 y is: "<< p1.getY()<<endl;
    p1.setXY(3, 0);   // Test setXY()
    int coordinates[2];
    p1.getXY(coordinates);  // Test getXY()
    cout<< "p1 x is: "<< coordinates[0]<<endl;  // 3
    cout<< "p1 x is: "<< coordinates[1]<<endl;  // 0
    p1.print();                                 // (3,0)
    cout<<endl;
    Point p2(0, 4);  // Test another constructor
    p2.print();     // (0,4)
    cout<<endl;
    // Testing the overloaded methods distance()
    cout<< p1.distance(p2)<<endl;
    cout<< p2.distance(p1)<<endl;
    cout<< p1.distance(8, 12)<<endl;
    cout<< p1.distance()<<endl;
    return 0;
}
