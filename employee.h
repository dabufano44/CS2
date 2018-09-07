/* Danielle Bufano
 * File: employee.h
 * Employee class definition.
 */

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
public:
  Employee(string theName, float thePayRate);

    string getName() const;
    float getPayRate() const;
    void setName(string name);
    void setPayRate(float rate);
    
    float pay(float hoursWorked) const;

protected:
    string name;
    float payRate;
    
};

#endif /* not defined _EMPLOYEE_H */
