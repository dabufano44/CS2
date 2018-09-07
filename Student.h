// Danielle Bufano
// 2/8/18

#ifndef Student_H
#define Student_H
using namespace std;

class Student{
private:
    int studentId;
    string firstName;
    string lastName;
    string middleInitial;
    int monthBirth;
    int dateBirth;
    int yearBirth;
    string studentGender;
public:
    Student();
    Student(int studentId, string firstName, string middleInitial, string lastName, int monthBirth, int dateBirth, int yearBirth, string gender);
    void setId(int studentId);
    void setName(string firstName, string middleInitial, string lastName);
    void setBirthday(int monthBirth, int dateBirth, int yearBirth);
    void setGender(string gender);
    int getId()
    {return studentId;}
    int getMonth()
    {return monthBirth;}
    int getDay()
    {return dateBirth;}
    int getYear()
    {return yearBirth;}
    string getName()
    {return firstName + " " + middleInitial + " " + lastName;}
    string getGender()
    {return studentGender;}
    void display();
};

#endif
