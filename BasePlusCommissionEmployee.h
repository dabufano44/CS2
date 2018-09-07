// Danielle Bufano
// BasePlusCommissionEmployee h-file

#ifndef BASEPLUSCOMMISSIONEMPLOYEE_hpp
#define BASEPLUSCOMMISSIONEMPLOYEE_hpp

#include <string>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee{
public:
    BasePlusCommissionEmployee(string, string, string, double, double, double);
    double getBaseSalary()
    {return baseSalary;}
    double earnings()
    {return baseSalary + (grossSales * commissionRate);}
    void print();
    
private:
    double baseSalary;
};

#endif
