// Polygon

// Danielle Bufano
// 2/5/18

#include <iostream>
#include <cstdlib>
#include "Polygon.h"
using namespace std;


int main(){
    
    Polygon square(3,3);            //this shows the use of constructors to set object
    square.displayPolygon();        //values
    
    Polygon rectangle(4,5);
    rectangle.displayPolygon();
    
    Polygon box;                    //this shows the use of mutators to set object values
    box.setWidth(5);
    box.setLength(7);
    box.displayPolygon();
    
    return 0;
}
