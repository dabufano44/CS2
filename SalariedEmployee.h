// Danielle Bufano
// SalariedEmployee h-file

#ifndef SALARIEDEMPLOYEE_h
#define SALARIEDEMPLOYEE_h

#include <string>
#include "Employee.h"
using namespace std;

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(string, string, string, double);
    double getWeeklySalary()
    {return weeklySalary;}
    double earnings()
    {return weeklySalary;}
    void print();
    
private:
    double weeklySalary;
    
};

#endif
