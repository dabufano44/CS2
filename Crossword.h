// Danielle Bufano
// Crossword h-file

#ifndef Crossword_h
#define Crossword_h

#include "Square.h"
using namespace std;

const int MAXROW = 10;
const int MAXCOL = 10;

class Crossword {
public:
    Crossword();
    Crossword(int, int);
    void printSquares();
    void printPuzzle();
    
private:
    int r;
    int c;
    Square ***puzzle;
    static int currentNumDefault;
    static int currentNum;
};

#endif
