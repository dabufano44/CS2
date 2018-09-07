// Danielle Bufano
// 2/12/18

#include <iostream>
#include <cstdlib>
#include <string>
#include "Date3.h"
using namespace std;

Date::Date()
{
    month = 2;
    day = 26;
    year = 2016;
}

Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

void Date::setDate(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
 
}

void Date::displayDate()
{
    cout << "Date: " << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
