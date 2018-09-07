// Danielle Bufano
// 2/26/18

#ifndef Name3_H
#define Name3_H
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

