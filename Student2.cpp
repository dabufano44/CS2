// Danielle Bufano
// 2/12/18

#include <iostream>
#include <cstdlib>
#include "Student2.h"
#include "Name2.h"
#include "Date2.h"
#include "Program2.h"
using namespace std;

Student::Student(){
    studentId = 0;
    fullName.setName("", "", "");
    birthdate.setDate(1, 1, 1990);
    studentGender = "";
    studentProgram.setCampus("");
    studentProgram.setDegree("");
    studentProgram.setMajor("");
    studentProgram.setMinor("");
}

Student::Student(int id, string firstname, string middlename, string lastname, int m, int d, int y, string gender, string camp, string deg, string maj, string min)
{
    studentId = id;
    fullName.setName(firstname, middlename, lastname);
    birthdate.setDate(m, d, y);
    studentGender = gender;
    studentProgram.setCampus(camp);
    studentProgram.setDegree(deg);
    studentProgram.setMajor(maj);
    studentProgram.setMinor(min);
}

void Student::setId(int idNum)
{
    studentId = idNum;
}

void Student::setGender(string gender)
{
    if (gender == "Male")
        studentGender = "Male";
    else if (gender == "Female")
        studentGender = "Female";
    else if (gender == "")
        studentGender = "";
    else {
        cout << "Must enter \"Male\" or \"Female\", please re-enter" << endl;
        cin >> gender;
        setGender(gender);
    }
    
}

void Student::setStudent(int id, string firstname, string middlename, string lastname, int m, int d, int y, string gender, string camp, string deg, string maj, string min)
{
    setId(id);
    fullName.setName(firstname, middlename, lastname);
    birthdate.setDate(m, d, y);
    setGender(gender);
    studentProgram.setCampus(camp);
    studentProgram.setDegree(deg);
    studentProgram.setMajor(maj);
    studentProgram.setMinor(min);
}

void Student::display()
{
    cout << "ID: " << getId() << endl;
    cout << "Full name: " << fullName.getName() << endl;
    cout << "Birthday: " << birthdate.getMonth() << "/" << birthdate.getDay() << "/" << birthdate.getYear() << endl;
    cout << "Gender: " << getGender() << endl;
    cout << "Campus: " << studentProgram.getCampus() << endl;
    cout << "Degree: " << studentProgram.getDegree() << endl;
    cout << "Major: " << studentProgram.getMajor() << endl;
    cout << "Minor: " << studentProgram.getMinor() << endl << endl;
}
