/* Danielle Bufano
 * File: manager.cpp
 * Manager method definitions.
 */

#include "manager.h"
using namespace std;

Manager::Manager(string theName, float thePayRate, bool isSalaried) : Employee(theName, thePayRate)
{
  salaried = isSalaried;
}

bool Manager::getSalaried() const
{
  return salaried;
}

void Manager::setSalaried(bool salary)
{
    salaried = salary;
}

float Manager::pay(float hoursWorked) const
{
  if (salaried)
      return payRate;
  else
      return Employee::pay(hoursWorked);
}
