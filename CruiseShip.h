// Danielle Bufano
// CruiseShip h-file

#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include <iostream>
#include <string>
#include "Ship.h"
using namespace std;

class CruiseShip : public Ship {
public:
    CruiseShip(string, string, int);
    int getMaxPass()
    {return maxPassengers;}
    void print();
    ~CruiseShip();
    
private:
    int maxPassengers;
};

#endif
/*A member variable for the maximum number of passengers (an int)
 • A constructor and appropriate accessors and mutators
 • A print function that redefines the print function in the base class. The CruiseShip
 class’s print function should display only the ship’s name and the maximum number of passengers.
 */


