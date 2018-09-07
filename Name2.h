// Danielle Bufano
// 2/12/18

#ifndef Name2_H
#define Name2_H
#include <string>
using namespace std;

class Name{
private:
    string firstName;
    string middleInitial;
    string lastName;
public:
    Name();
    Name(string, string, string);
    void setName(string, string, string);
    string getName()
    {return firstName + " " + middleInitial + " " + lastName;}
    void displayName();
};

#endif
