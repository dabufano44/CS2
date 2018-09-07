// Danielle Bufano
// CargoShip h-file

#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include <iostream>
#include <string>
#include "Ship.h"
using namespace std;

class CargoShip : public Ship {
public:
    CargoShip(string, string, int);
    int getTonnage()
    {return tonnage;}
    void print();
    ~CargoShip();
    
private:
    int tonnage;
    
};

/*
 • A member variable for the cargo capacity in tonnage (an int).
 • A constructor and appropriate accessors and mutators.
 • A print function that redefines the print function in the base class. The CargoShip
 class’s print function should display only the ship’s name and the ship’s cargo capacity.*/
#endif
