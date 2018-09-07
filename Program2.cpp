// Danielle Bufano
// 2/12/18

#include <iostream>
#include <cstdlib>
#include <string>
#include "Program.h"
using namespace std;

Program::Program()
{
    campus = " ";
    degree = " ";
    major = " ";
    minor = " ";
}

Program::Program(string c, string d, string maj, string min)
{
    campus = c;
    degree = d;
    major = maj;
    minor = min;
}

void Program::setCampus(string c)
{
    if (c == "Rose Hill" || c == "RH")
        campus = "Rose Hill";
    else if (c == "Lincoln Center" || c == "LC")
        campus = "Lincoln Center";
    else if (c == "Westchester" || c == "WC")
        campus = "Westchester";
    else if (c == "")
        campus = "";
    else
    {
        cout << "Invalid campus. Please re-enter \"RH\", \"LC\", or \"WC\"" << endl;
        cin >> c;
        setCampus(c);
    }
}

void Program::setDegree(string d)
{
    if (d == "BA")
        degree = "BA";
    else if (d == "BS")
        degree = "BS";
    else if (d == "")
        degree = "";
    else
    {
        cout << "Invalid degree option. Please re-enter \"BA\" or \"BS\"" << endl;
        cin >> d;
        setDegree(d);
    }
}

void Program::setMajor(string maj)
{
    major = maj;
}

void Program::setMinor(string min)
{
    minor = min;
}

void Program::displayProgram()
{
    cout << "Campus: " << getCampus() << endl;
    cout << "Degree: " << getDegree() << endl;
    cout << "Major: " << getMajor() << endl;
    cout << "Minor: " << getMinor() << endl << endl;
}
