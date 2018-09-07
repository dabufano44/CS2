// Danielle Bufano
// SavingsAccount h-file

#ifndef SavingsAccount_h
#define SavingsAccount_h

#include <string>
#include "Account.h"
using namespace std;

class SavingsAccount : public Account{
protected:
    double interestRate;
public:
    SavingsAccount(double bal, double pct);
    //void addInterest();
    double calculateInterest();
    void display();
};

#endif
