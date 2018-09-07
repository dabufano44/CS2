// Danielle Bufano
// Square h-file


#ifndef Square_h
#define Square_h

#include <string>
using namespace std;

class Square{
public:
    void setNum(int);
    int getNum()
    {return num;}
    void blackSquare(bool);
    bool isSquareBlack()
    {return isBlack;}
    void printBool();
    
private:
    int num;
    bool isBlack;    
};

#endif
