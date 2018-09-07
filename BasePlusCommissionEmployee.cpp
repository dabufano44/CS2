// Danielle Bufano
//  BasePlusCommissionEmployee cpp

#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(string f, string l, string ssn, double sales, double rate, double base) : CommissionEmployee(f, l, ssn, sales, rate)
{
    baseSalary = base;
}

void BasePlusCommissionEmployee::print()
{
    cout << "employee: " << getName() << endl;
    cout << "social security number: " << getSSN() << endl;
    cout << "gross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate() << "; base salary: " << getBaseSalary();
    //cout << "earnings: $" << earnings() << endl << endl;
}

