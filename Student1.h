// Danielle Bufano
// Student1 h-file

#ifndef Student1_h
#define Student1_h

#include <string>
#include "Person.h"
using namespace std;

class Student1 : public Person {
private:
    static int numCourses;
    string courses[10];
    int grades[10];
    
public:
    Student1(string, string);
    void addCourseGrade(string, int);
    void printGrades();
    double getAverageGrade();
    void print();
    
};

#endif
