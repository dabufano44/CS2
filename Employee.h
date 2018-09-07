// Danielle Bufano
// Employee h-file

#ifndef EMPLOYEE_h
#define EMPLOYEE_h

#include <string>
using namespace std;

class Employee
{
public:
    Employee(string, string, string);
    string getName()
    {return firstName + " " + lastName;}
    string getSSN()
    {return socialSecurityNumber;}
    virtual double earnings() = 0;
    virtual void print();
    
protected:
    string firstName;
    string lastName;
    string socialSecurityNumber;
};

#endif
