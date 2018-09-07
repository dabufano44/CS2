// Danielle Bufano
// HourlyEmployee h-file

#ifndef HourlyEmployee_h
#define HourlyEmployee_h

#include <string>
#include "Employee.h"
using namespace std;

class HourlyEmployee : public Employee {
public:
    HourlyEmployee(string, string, string, double, double);
    double getHourlyWage()
    {return hourlyWage;}
    double getHours()
    {return hours;}
    double earnings();
    void print();
    
private:
    double hourlyWage;
    double hours;
    
};

#endif
