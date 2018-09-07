// Danielle Bufano
// SalariedEmployee cpp

#include <iostream>
#include "SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(string f, string l, string ssn, double salary) : Employee(f, l, ssn)
{
    weeklySalary = salary;
}

void SalariedEmployee::print()
{
    cout << "employee: " << getName() << endl;
    cout << "social security number: " << getSSN() << endl;
    cout << "weekly salary: " << getWeeklySalary();
    //cout << "earnings: $" << earnings() << endl << endl;
}
