// Student Lab

// Danielle Bufano
// 2/8/18

#include <iostream>
#include <cstdlib>
#include "Student.h"
using namespace std;

int main(){
    
    int numStudents;
    string fname;
    string minitial;
    string lname;
    int month;
    int day;
    int year;
    string gender;
    
    // This shows students who are initialized using the constructor:
    
    Student student1(100, "Joe", "P.", "Smith", 2, 8, 1998, "Male");
    student1.display();
    
    Student student2(101, "Martha", "J.", "Williams", 6, 10, 1997, "Female");
    student2.display();
    
    // This shows students whose information is set using member functions:
    
    Student student3;
    student3.setId(102);
    student3.setName("Jacob", "M.", "Johnson");
    student3.setBirthday(5, 5, 1995);
    student3.setGender("Male");
    student3.display();
    
    // This shows how to enter student information manually:
    
    cout << "How many more students would you like to enter? " << endl;
    cin >> numStudents;
    
    if (numStudents > 0){
        Student students[numStudents];
    
        for (int i = 0; i < numStudents; i++)
        {
            students[i].setId(i + 103);
            cout << "Enter first name, middle initial, then last name" << endl;
            cin >> fname >> minitial >> lname;
            students[i].setName(fname, minitial, lname);
            cout << "Enter birthday (month, date, year)" << endl;
            cin >> month >> day >> year;
            students[i].setBirthday(month, day, year);
            cout << "Enter student's gender" << endl;
            cin >> gender;
            students[i].setGender(gender);
            cout << endl;
        }
        
        for (int i = 0; i < numStudents; i++)
            students[i].display();
    }
    
    return 0;
}
