
#include <iostream>
#include <cstdlib>
#include "Polygon.h"
using namespace std;

Polygon::Polygon()
{
    width = 0.0;
    length = 0.0;
}

Polygon::Polygon(int w, int l){
    width = w;
    length = l;
}

void Polygon::setWidth(int w){
    
    if (w >= 0)
        width = w;
    else
    {
        cout << "Invalid width" << endl;
        exit(EXIT_FAILURE);
    }
    
}

void Polygon::setLength(int l){
    
    if (l>= 0)
        length = l;
    else
    {
        cout << "Invalid length" << endl;
        exit(EXIT_FAILURE);
    }
    
}

void Polygon::displayPolygon(){
    
    int l = getLength();
    int w = getWidth();
    
    cout << "length: " << getLength() << endl;
    cout << "width: " << getWidth() << endl;
    cout << "area: " << getArea() << endl;
    cout << "perimeter: " << getPerimeter() << endl;

    for (int i = 0; i < w; i++){
        if (i == 0 || i == (w-1)){
            for (int j = 0; j < l; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else{
            cout << "*";
            for (int k = 1; k < (l - 1); k++)
                cout << " ";
            cout << "*";
            cout << endl;
        }
        
    }
    cout << endl;
    
}

