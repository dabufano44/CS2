// Danielle Bufano
// SavingsAccount h-file

#include <iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(double bal, double pct) : Account(bal)
{
    interestRate = pct;
}

double SavingsAccount::calculateInterest()
{
    double interest;
    interest = balance * interestRate;
    return interest;
}

/*void SavingsAccount::addInterest()
{
    double interest = calculateInterest();
    balance = balance + interest;
} */

void SavingsAccount::display()
{
    cout << "Savings Account: " << accountNumber << ", balance: $" << balance << ", interest rate: %" << interestRate << endl;
}
