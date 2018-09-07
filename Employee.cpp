// Danielle Bufano
// Employee cpp

#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string f, string l, string ssn)
{
    firstName = f;
    lastName = l;
    socialSecurityNumber = ssn;
}

void Employee::print()
{
    cout << "employee: " << getName() << endl;
    cout << "social security number: " << getSSN() << endl << endl;
}
