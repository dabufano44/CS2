// Danielle Bufano
// Walkup cpp

#include <iostream>
#include "Advance.h"
using namespace std;

float Advance::price1 = 30;
float Advance::price2 = 40;

Advance::Advance(int days) : Ticket()
{
    daysInAdvance = days;
    if (daysInAdvance >= 10)
        price = price1;
    else
        price = price2;
    
    ticketType = "Advance";
}

void Advance::printInfo()
{
    cout << getType() << endl;
    cout << "Number: " << getSerialNumber() << endl;
    cout << "Price: " << getPrice() << endl << endl;
}

