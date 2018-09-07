// Danielle Bufano
// Student Advance h-file

#include <iostream>
#include "StudentAdvance.h"
using namespace std;

StudentAdvance::StudentAdvance(int days) : Advance(days)
{
    ticketType = "Student Advance";
    price = price*.5;
}

void StudentAdvance::printInfo()
{
    cout << getType() << endl;
    cout << "Number: " << getSerialNumber() << endl;
    cout << "Price: " << getPrice() << endl << endl;
}



