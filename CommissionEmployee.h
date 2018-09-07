// Danielle Bufano
// CommissionEmployee h-file

#ifndef COMMISSIONEMPLOYEE_h
#define COMMISSIONEMPLOYEE_h

#include <string>
#include "Employee.h"
using namespace std;

class CommissionEmployee : public Employee {
public:
    CommissionEmployee(string, string, string, double, double);
    double getGrossSales()
    {return grossSales;}
    double getCommissionRate()
    {return commissionRate;}
    double earnings()
    {return commissionRate * grossSales;}
    void print();
    
protected:
    double grossSales;
    double commissionRate;
};

#endif
