// Danielle Bufano
// CruiseShip cpp

#include <iostream>
#include <string>
#include "CruiseShip.h"
using namespace std;

CruiseShip::CruiseShip(string name, string year, int passengers) : Ship(name, year)
{
    maxPassengers = passengers;
}

void CruiseShip::print()
{
    cout << "Name: " << getName() << endl;
    cout << "Max Passengers: " << getMaxPass() << endl << endl;
}

CruiseShip::~CruiseShip()
{
    
}

