// Danielle Bufano
// Ship h-file

#ifndef SHIP_H
#define SHIP_H

#include <string>
using namespace std;

class Ship {
public:
    Ship(string, string);
    string getName() const
    {return shipName;}
    string getYear() const
    {return shipYear;}
    virtual void print()
    {
    cout << "Name: " << getName() << endl;
    cout << "Year: " << getYear() << endl << endl;
    }
    ~Ship();
    
protected:
    string shipName;
    string shipYear;
};

#endif
