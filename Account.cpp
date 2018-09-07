// Danielle Bufano
// Account cpp

#include <iostream>
#include "Account.h"
using namespace std;

Account::Account()
{
    balance = 0;
    accountsCreated++;
    accountNumber = accountsCreated;
}

Account::Account(double b)
{
    if (b >=0)
    {
        balance = b;
        accountsCreated++;
        accountNumber = accountsCreated;
    }
    else
        cout << "Error: your balance is invalid" << endl;
}

void Account::deposit(double amt)
{
    balance = balance + amt;
}

void Account::withdraw(double amt)
{
    if (amt <= balance)
        balance = balance - amt;
    else
        cout << "Debit amount exceeded account balance" << endl;
}

void Account::operator+(const double amt)
{
    balance = balance + amt;
}

int Account::accountsCreated = 1000;
