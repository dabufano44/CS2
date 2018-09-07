// Danielle Bufano
// 2/12/18

#include <iostream>
#include <cstdlib>
#include <string>
#include "Date.h"
using namespace std;

Date::Date()
{
    month = 1;
    day = 1;
    year = 1990;
}

Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

void Date::setDate(int m, int d, int y)
{
    if (m > 0 && m < 13)
        month = m;
    else
    {
        cout << m << endl;
        cout << "Month must be between 1 and 12. Please re-enter" << endl;
        cin >> m;
        setDate(m, d, y);
    }
    
    if (d > 0 && d < 32)
        day = d;
    else
    {
        cout << "Day must be between 1 and 31. Please re-enter" << endl;
        cin >> d;
        setDate(m, d, y);
    }
    
    if (y >= 1990 && y <= 2000)
        year = y;
    else
    {
        cout << "Year must be between 1990 and 2000. Please re-enter" << endl;
        cin >> y;
        setDate(m, d, y);
    }
    
}

void Date::displayDate()
{
    cout << "Date: " << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
