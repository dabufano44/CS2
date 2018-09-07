/* Danielle Bufano
 * File: supervisor.h
 * Supervisor class definition.
 */

#ifndef _SUPERVISOR_H
#define _SUPERVISOR_H

#include "employee.h"
using namespace std;

class Supervisor : public Employee {
public:
    Supervisor(string theName, float thePayRate, string dept);
    
    string getDept();
    void setDept(string dept);
    bool getSalaried() const;
    
    float pay(float hoursWorked) const;
    
protected:
    string department;
};

#endif /* not defined _SUPERVISOR_H */
