
#include <iostream>
#include <cstdlib>
#include "Polygon2.h"
using namespace std;

Polygon::Polygon()
{
    width = 1;
    length = 1;
}

Polygon::Polygon(int w, int l){
    width = w;
    length = l;
}

void Polygon::setDimensions(int w, int l){
    Polygon box;
    if (w >= 0)
        width = w;
    else
    {
        cout << "Invalid width" << endl;
        exit(EXIT_FAILURE);
    }
    if (l >= 0)
        length = l;
    else
    {
        cout << "Invalid width" << endl;
        exit(EXIT_FAILURE);
    }
 }

void Polygon::displayInfo()
{
    cout << "length: " << getLength() << endl;
    cout << "width: " << getWidth() << endl;
    cout << "area: " << getArea() << endl;
    cout << "perimeter: " << getPerimeter() << endl;
}

void Polygon::displayPic()
{
    int l = getLength();
    int w = getWidth();
    
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

Polygon::~Polygon()
{
}
