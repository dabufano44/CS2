// Danielle Bufano
// 4/25/18
// Circle Cylinder Lab

#include <iostream>
#include "Circle.h"
#include "Cylinder.h"
#include "Cone.h"
using namespace std;

int main(){
    
    Cylinder cy1;
    cy1.printInfo();
    Cylinder cy2(5.0, 2.0);
    cy2.printInfo();
  
    Cone cn1;
    cn1.printInfo();
    Cone cn2(5.0, 2.0);
    cn2.printInfo();
}
