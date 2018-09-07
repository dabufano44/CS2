// Danielle Bufano
// 2/8/18

#include <iostream>
#include <cstdlib>
#include "Student.h"
using namespace std;

Student::Student(){
    studentId = 0;
    firstName = "";
    lastName = "";
    middleInitial = "";
    monthBirth = 0;
    dateBirth = 0;
    yearBirth = 0;
    studentGender = "";
}

Student::Student(int id, string first, string initial, string last, int month, int day, int year, string gender)
{
    studentId = id;
    firstName = first;
    middleInitial = initial;
    lastName = last;
    monthBirth = month;
    dateBirth = day;
    yearBirth = year;
    studentGender = gender;
}

void Student::setId(int idNum)
{
    studentId = idNum;
}

void Student::setName(string first, string initial, string last)
{
    firstName = first;
    lastName = last;
    middleInitial = initial;
}

void Student::setBirthday(int month, int day, int year)
{
    if (month > 0 && month < 13)
        monthBirth = month;
    else{
        cout << "Month must be between 1 and 12, please re-enter" << endl;
        cin >> month;
        monthBirth = month;
    }
    if (day > 0 && day < 32)
        dateBirth = day;
    else{
        cout << "Day must be between 1 and 31, please re-enter" << endl;
        cin >> day;
        dateBirth = day;
    }
    if (year > 1990 && year < 2000)
        yearBirth = year;
    else{
        cout << "Year must be between 1990 and 2000, please re-enter" << endl;
        cin >> year;
        yearBirth = year;
    }
    
}
        
void Student::setGender(string gender)
{
    if (gender == "Male")
        studentGender = "Male";
    else if (gender == "Female")
        studentGender = "Female";
    else {
        cout << "Must enter \"Male\" or \"Female\", please re-enter" << endl;
        cin >> gender;
        setGender(gender);
    }
    
}
        
void Student::display()
{
    cout << "ID: " << getId() << endl;
    cout << "Full name: " << getName() << endl;
    cout << "Birthday: " << getMonth() << "/" << getDay() << "/" << getYear() << endl;
    cout << "Gender: " << getGender() << endl << endl;
}
