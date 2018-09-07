// Danielle Bufano
// 4/9/18

#include <iostream>
#include "Ticket.h"
#include "Walkup.h"
#include "Advance.h"
#include "StudentAdvance.h"
using namespace std;

void setAdvancePrice(float, float);

int main(){
    Walkup wp1;
    wp1.printInfo();
    
    Advance ad10(10);
    ad10.printInfo();
    
    Advance ad1(1);
    ad1.printInfo();
    
    StudentAdvance st10(10);
    st10.printInfo();
    
    StudentAdvance st1(1);
    st1.printInfo();
    
    
    setAdvancePrice(20, 25);
    
    StudentAdvance st10B(10);
    st10B.printInfo();
    
    StudentAdvance st1B(1);
    st1B.printInfo();
    // 10 days in advance // 1 days in advance
    // set price of 10 or more days to 20
    // set price of more than 10 days to 25
    // 10 days in advance // 1 days in advance
}

void setAdvancePrice(float p1, float p2)
{
    Advance::setPrice1(p1);
    Advance::setPrice2(p2);
}
