// Danielle Bufano
// 2/12/18

#include <iostream>
#include <cstdlib>
#include <string>
#include "Name2.h"
using namespace std;

Name::Name()
{
    firstName = " ";
    middleInitial = " ";
    lastName = " ";
}

Name::Name(string fname, string mname, string lname)
{
    firstName = fname;
    middleInitial = mname;
    lastName = lname;
}

void Name::setName(string fname, string mname, string lname)
{
    firstName = fname;
    middleInitial = mname;
    lastName = lname;
}

void Name::displayName()
{
    cout << "Name: " << getName() << endl;
}
