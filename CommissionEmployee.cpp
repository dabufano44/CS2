// Danielle Bufano
// CommissionEmployee cpp

#include <iostream>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(string f, string l, string ssn, double sales, double rate ) : Employee(f, l, ssn)
{
    grossSales = sales;
    commissionRate = rate;
}

void CommissionEmployee::print()
{
    cout << "employee: " << getName() << endl;
    cout << "social security number: " << getSSN() << endl;
    cout << "gross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate();
    //cout << "earnings: $" << earnings() << endl << endl;
}

