// Danielle Bufano
// 5/3/18
// Person Lab

#include <iostream>
#include <string>
#include "Person.h"
#include "Student1.h"
#include "Teacher.h"
using namespace std;


int main() {
    /* Test Student class */
    Student1 s1 ("Tan Ah Teck", "1 Happy Ave");
    s1.print();
    s1.addCourseGrade("IM101", 97);
    s1.addCourseGrade("IM102", 68);
    s1.printGrades();
    cout <<"Average is " << s1.getAverageGrade()<<endl<<endl;
    /* Test Teacher class */
    Teacher t1 ("Paul Tan", "8 sunset way"); t1.print();
    string course_list[] = {"IM101", "IM102", "IM101"}; for (int i=0; i<3; i++) {
        if (t1.addCourse(course_list[i])) { cout<<course_list[i] << " added."<<endl;
        } else {
            cout<<course_list[i] << " cannot be added."<<endl;
        } }
    
    for (int i=0; i<3; i++) {
        if (t1.removeCourse(course_list[i]))
        {
            cout<<course_list[i] << " removed."<<endl;
        }
        else
        {
            cout<<course_list[i]<< " cannot be removed."<<endl;
        }
    }
}
/*Output
Student: Tan Ah Teck (1 Happy Ave)
IM101:97
IM102:68
Average is: 82.5
Teacher: Paul Tan(8 sunset way)
IM101 added.
IM102 added.
IM101 cannot be added.
IM101 removed.
IM102 removed.
IM101 cannot be removed. */
