// Danielle Bufano
// Person h-file


#ifndef Person_h
#define Person_h

#include <string>
using namespace std;

class Person{
protected:
    string name;
    string address;
    
public:
    Person(string, string);
    string getName()
    {return name;}
    string getAddress()
    {return address;}
    void setAddress(string);
    void print();
    
    
    
    
};

#endif
