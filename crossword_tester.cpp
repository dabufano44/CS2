// Danielle Bufano
// 4/26/18

#include <iostream>
#include "Square.h"
#include "Crossword.h"
using namespace std;

int main(){
    
    int rows;
    int cols;
    
    Crossword p1;
    p1.printSquares();
    p1.printPuzzle();
    
    cout << "Enter the number of rows and columns for your crossword puzzle" << endl;
    cin >> rows >> cols;
    cout << endl;
    Crossword p2(rows,cols);
    p2.printSquares();
    p2.printPuzzle();
    
}
