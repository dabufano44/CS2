// Danielle Bufano
// Person cpp

#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(string n, string a)
{
    name = n;
    address = a;
}

void Person::setAddress(string a)
{
    address = a;
}

void Person::print()
{
    cout << getName() << "(" << getAddress() << ")" << endl;
}
