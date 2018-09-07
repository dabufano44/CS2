// Danielle Bufano
// Account h-file

#ifndef Account_h
#define Account_h

#include <string>
using namespace std;

class Account{
protected:
    double balance;
    int accountNumber;
    static int accountsCreated;
public:
    Account();
    Account(double bal);
    void deposit(double amt);
    void withdraw(double amt);
    double getBalance()
    {return balance;}
    void operator+(const double amt);
    virtual void display()
    {
        cout << "Regular account: " << accountNumber << ", balance: $" << balance << endl;
    }
};

#endif
