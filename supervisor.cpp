/* Danielle Bufano
 * File: supervisor.cpp
 * Manager method definitions.
 */

#include "supervisor.h"
using namespace std;

Supervisor::Supervisor(string theName, float thePayRate, string dept ) : Employee(theName, thePayRate)
{
    department = dept;
}

string Supervisor::getDept()
{
    return department;
}

void Supervisor::setDept(string dept)
{
    department = dept;
}

float Supervisor::pay(float hoursworked) const
{
    return getPayRate();
}
