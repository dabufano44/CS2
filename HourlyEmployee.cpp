// Danielle Bufano
// HourlyEmployee cpp

#include <iostream>
#include "HourlyEmployee.h"
using namespace std;

HourlyEmployee::HourlyEmployee(string f, string l, string ssn, double wage, double hrs) : Employee(f, l, ssn)
{
    hourlyWage = wage;
    hours = hrs;
}

double HourlyEmployee::earnings()
{
    if (hours >= 40)
        return (hourlyWage * hours);
    else
        return ((40 * hourlyWage) + ((hours - 40) * hourlyWage * 1.5));
}

void HourlyEmployee::print()
{
    cout << "employee: " << getName() << endl;
    cout << "social security number: " << getSSN() << endl;
    cout << "hourly wage: " << getHourlyWage() << "; hours worked: " << getHours();
    //cout << "earnings: $" << earnings() << endl << endl;
}
