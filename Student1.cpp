// Danielle Bufano
// Student1 cpp

#include <iostream>
#include "Student1.h"
using namespace std;

Student1::Student1(string n, string a) : Person(n, a)
{
    
}

void Student1::addCourseGrade(string course, int grade)
{
    courses[numCourses] = course;
    grades[numCourses] = grade;
    numCourses++;
    
}

void Student1::printGrades()
{
    for (int i = 0; i < numCourses; i++)
    {
        cout << courses[i] << ": " << grades[i] << endl;
    }
}

double Student1::getAverageGrade()
{
    double average = 0;
    for (int i = 0; i < numCourses; i++)
    {
        average = average + grades[i];
    }
    
    return (average/numCourses);
}

void Student1::print()
{
    cout << "Student: " << getName() << "(" << getAddress() << ")" << endl;
}
int Student1::numCourses = 0;
