/* Danielle Bufano
 * File: employee.cpp
 * Employee method definitions.
 */

#include "employee.h"
using namespace std;

Employee::Employee(string theName, float thePayRate)
{
  name = theName;
  payRate = thePayRate;
}

string Employee::getName() const
{
  return name;
}

float Employee::getPayRate() const
{
  return payRate;
}

float Employee::pay(float hoursWorked) const
{
  return hoursWorked * payRate;
}

void Employee::setName(string fullname)
{
    name = fullname;
}

void Employee::setPayRate(float rate)
{
    payRate = rate;
}
