// Danielle Bufano
// CheckingAccount cpp

#include <iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(double bal, double f) : Account(bal)
{
    fee = f;
}

void CheckingAccount::deposit(double amt)
{
    Account::deposit(amt);
    balance = balance - fee;
}

void CheckingAccount::withdraw(double amt)
{
    if (amt <= balance)
    {
        Account::withdraw(amt);
        balance = balance - fee;
    }
    else
        Account::withdraw(amt);
}

void CheckingAccount::display()
{
    cout << "Checking Account: " << accountNumber << ", balance: $" << balance << ", transaction fee: $" << fee << endl;
}

void CheckingAccount::operator+(const double amt)
{
    balance = balance + amt;
    balance = balance - fee;
}

