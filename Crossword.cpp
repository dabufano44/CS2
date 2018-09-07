// Danielle Bufano
// Crossword cpp

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Crossword.h"
using namespace std;

Crossword::Crossword()
{
    r = 9;
    c = 9;
    
    srand(time(0));
    puzzle = new Square**[r];
    
    for (int i = 0; i < r; i++)
    {
        puzzle[i] = new Square*[c];
        for (int j = 0; j < c; j++)
        {
            puzzle[i][j] = new Square;
            puzzle[i][j]->blackSquare(rand()%2);
            puzzle[i][j]->setNum(0);
            
            if (!(puzzle[i][j]->isSquareBlack()))
            {
                if (i == 0)
                {
                    puzzle[i][j]->setNum(currentNumDefault);
                    currentNumDefault++;
                }
                else if (i > 0)
                {
                    if (j == 0)
                    {
                        puzzle[i][j]->setNum(currentNumDefault);
                        currentNumDefault++;
                    }
                    else if (j > 0)
                    {
                        if(puzzle[i-1][j]->isSquareBlack()||puzzle[i][j-1]->isSquareBlack())
                        {
                            puzzle[i][j]->setNum(currentNumDefault);
                            currentNumDefault++;
                        }
                    }
                    
                }
            }
        }
    }

}

Crossword::Crossword(int row, int col)
{
    r = row;
    c = col;
    
    srand(time(0));
    puzzle = new Square**[r];
    
    for (int i = 0; i < r; i++)
    {
        puzzle[i] = new Square*[c];
        for (int j = 0; j < c; j++)
        {
            puzzle[i][j] = new Square;
            puzzle[i][j]->blackSquare(rand()%2);
            puzzle[i][j]->setNum(0);
            
            if (!(puzzle[i][j]->isSquareBlack()))
            {
                if (i == 0)
                {
                    puzzle[i][j]->setNum(currentNum);
                    currentNum++;
                }
                else if (i > 0)
                {
                    if (j == 0)
                    {
                        puzzle[i][j]->setNum(currentNum);
                        currentNum++;
                    }
                    else if (j > 0)
                    {
                        if(puzzle[i-1][j]->isSquareBlack()||puzzle[i][j-1]->isSquareBlack())
                        {
                            puzzle[i][j]->setNum(currentNum);
                            currentNum++;
                        }
                    }
                            
                }
            }
        }
    }
}

void Crossword::printSquares()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << puzzle[i][j]->isSquareBlack() << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Crossword::printPuzzle()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (puzzle[i][j]->getNum() > 0)
                cout << "|" << setw(2) << puzzle[i][j]->getNum() << "|";
            else
                cout << "|--|";
        }
        cout << endl;
    }
    cout << endl;
}
            
int Crossword::currentNumDefault = 1;
int Crossword::currentNum = 1;

