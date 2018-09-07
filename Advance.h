// Danielle Bufano
// Advance h-file

#ifndef ADVANCE_h
#define ADVANCE_h

#include "Ticket.h"
using namespace std;

class Advance : public Ticket {
public:
    Advance(int days);
    string getType()
    {return ticketType;}
    static void setPrice1(float p1)
    {   price1 = p1;
    }
    static void setPrice2(float p2)
    {
        price2 = p2;
    }
    void printInfo();
    
protected:
    string ticketType;
    int daysInAdvance;
    static float price1;
    static float price2;
};

#endif
