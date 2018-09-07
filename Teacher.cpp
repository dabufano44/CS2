// Danielle Bufano
// Teacher cpp

#include <iostream>
#include "Teacher.h"
using namespace std;

Teacher::Teacher(string n, string a) : Person(n, a)
{
    name = n;
    address = a;
}

bool Teacher::addCourse(string c)
{
    for (int i = 0; i < numCourses; i++)
    {
        if (courses[i] == c)
            return false;
    }
    
    courses[numCourses] = c;
    numCourses++;
    return true;
}

bool Teacher::removeCourse(string c)
{
    for (int i = 0; i < numCourses; i++)
    {
        if (courses[i] == c)
        {
            for (int index = i; index < numCourses; index++)
            {
                courses[i] = courses[index + 1];
                numCourses--;
            }
            return true;
        }
    }
    return false;
    
}

void Teacher::print()
{
    cout << "Teacher: " << getName() << "(" << getAddress() << ")" << endl;

}

int Teacher::numCourses = 0;
