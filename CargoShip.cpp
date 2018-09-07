// Danielle Bufano
// CargoShip cpp

#include <iostream>
#include <string>
#include "CargoShip.h"
using namespace std;

CargoShip::CargoShip(string name, string year, int tons) : Ship(name, year)
{
    tonnage = tons;
}

void CargoShip::print()
{
    cout << "Name: " << getName() << endl;
    cout << "Tonnage: " << getTonnage() << endl << endl;
}

CargoShip::~CargoShip()
{
}


