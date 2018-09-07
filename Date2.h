// Danielle Bufano
// 2/12/18

#ifndef Date2_H
#define Date2_H
#include <string>
using namespace std;

class Date{
private:
    int month;
    int day;
    int year;
public:
    Date();
    Date(int, int, int);
    void setDate(int, int, int);
    int getMonth()
    {return month;}
    int getDay()
    {return day;}
    int getYear()
    {return year;}
    void displayDate();
};

#endif
