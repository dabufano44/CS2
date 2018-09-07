// Danielle Bufano
// Teacher h-file

#ifndef Teacher_h
#define Teacher_h

#include <string>
#include "Person.h"
using namespace std;

class Teacher : public Person {
private:
    static int numCourses;
    string courses[10];
    
public:
    Teacher(string, string);
    bool addCourse(string);
    bool removeCourse(string);
    void print();
};

#endif
