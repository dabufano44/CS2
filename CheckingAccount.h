// Danielle Bufano
// CheckingAccount h-file

#ifndef CheckingAccount_h
#define CheckingAccount_h

#include <string>
#include "Account.h"
using namespace std;

class CheckingAccount : public Account{
protected:
    double fee;
public:
    CheckingAccount(double bal, double fee);
    void deposit(double amt);
    void withdraw(double amt);
    void display();
    void operator+(const double amt);
};

#endif 
