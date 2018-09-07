// Danielle Bufano
// 2/12/18

#ifndef Student2_H
#define Student2_H
#include "Date2.h"
#include "Name2.h"
#include "Program2.h"
using namespace std;

class Student{
private:
    int studentId;
    Name fullName;
    Date birthdate;
    string studentGender;
    Program studentProgram;
public:
    Student();
    Student(int, string fname, string mname, string lname, int bmonth, int bday, int byear, string gender, string studCampus, string studDegree, string studMaj, string studMinor );
    void setId(int);
    int getId()
    {return studentId;}
    void setGender(string);
    string getGender()
    {return studentGender;}
    void setStudent(int, string fname, string mname, string lname, int bmonth, int bday, int byear, string gender, string studCampus, string studDegree, string studMaj, string studMinor );
    void display();
};

#endif
