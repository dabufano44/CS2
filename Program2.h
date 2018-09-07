// Danielle Bufano
// 2/12/18

#ifndef Program2_H
#define Program2_H
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class Program{
private:
    string campus;
    string degree;
    string major;
    string minor;
public:
    Program();
    Program(string, string, string, string);
    void setCampus(string);
    string getCampus()
    {return campus;}
    void setDegree(string);
    string getDegree()
    {return degree;}
    void setMajor(string);
    string getMajor()
    {return major;}
    void setMinor(string);
    string getMinor()
    {return minor;}
    void displayProgram();
};

#endif
