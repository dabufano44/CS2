// Midterm Exam

// Danielle Bufano
// 2/26/18

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include "Name3.h"
#include "Date3.h"
#include "SavingsAccount.h"
using namespace std;

const int MAX_ACCOUNTS = 10;

int main(){
    
    int month = 2;
    int day = 26;
    int year = 2018;
    int numOfAccounts = 1;
    double interestRate = 5;

    SavingsAccount *p1;
    SavingsAccount arrayUsers[MAX_ACCOUNTS];
    p1 = arrayUsers;
    
    SavingsAccount acct5("Danielle", "E", "Bufano", month, day, year, 500.00);
    SavingsAccount acct6(acct5);
    
    p1[1].setSavingsAccount("Snow", "A", "White", month, day, year, 1100.00);
    p1[2].setSavingsAccount("Cindy", "K", "Cinderella", month, day, year, 100.00);
    p1[3] = p1[1];
    p1[4] = acct5;
    p1[5] = acct6;
 
    cout << "Account" << setw(13) << "Date Opened" << setw(10) << "Customer" << setw(21) << "Balance" << setw(15) << "Interest" << endl;
    
    for (int i = 0; i < (MAX_ACCOUNTS-4); i++)
    {
        p1[i].setAccountNumber(numOfAccounts);
        p1[i].setAnnualInterestRate(interestRate);
        p1[i].display();
        numOfAccounts++;
    }
    
    return 0;
}
