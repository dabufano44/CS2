// Polygon Array

// Danielle Bufano
// 2/12/18

#include <iostream>
#include <cstdlib>
#include "Polygon2.h"
using namespace std;

const int MAX_POLYGONS = 5;

void displayPolygon(Polygon**);

int main(){
    
    Polygon **polyArrayPtr;
    
    polyArrayPtr = new Polygon*[MAX_POLYGONS];
    
    for (int i = 0; i < MAX_POLYGONS; i++)
        polyArrayPtr[i] = new Polygon;
    
    polyArrayPtr[0]->setDimensions(4,4);
    polyArrayPtr[1]->setDimensions(5,6);
    polyArrayPtr[2]->setDimensions(3,7);
    
    displayPolygon(polyArrayPtr);
    
    return 0;
}

void displayPolygon(Polygon **arrayptr)
{
    arrayptr[0]->displayInfo();
    arrayptr[0]->displayPic();
    arrayptr[1]->displayInfo();
    arrayptr[1]->displayPic();
    arrayptr[2]->displayInfo();
    arrayptr[2]->displayPic();
}
