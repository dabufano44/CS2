// CS1 Review Lab

// Danielle Bufano
// 1/18/18

#include <iostream>
#include <iomanip>
using namespace std;

int const arraySize = 10;
int const rowSize = 7;
int const colSize = 4;

void display(int [], int [], int);
void swap(int &, int &);
void swap(int [], int [], int);
void initialize(int [][colSize], int, int, int[], int[], int);
void display(int[][colSize], int, int);

int main() {
    
    int arrayOdd[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int arrayEven[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int array2D[rowSize][colSize];
    
    display(arrayOdd, arrayEven, arraySize);
    swap(arrayOdd, arrayEven, arraySize);
    display(arrayOdd, arrayEven, arraySize);
    
    initialize(array2D, rowSize, colSize, arrayOdd, arrayEven, arraySize);
    display(array2D, rowSize, colSize);
    
}

void display(int oddArray[], int evenArray[], int arraySize){
    
    for (int i = 0; i < arraySize; i++){
        cout << setw(2) << oddArray[i] << setw(7) << right << evenArray[i] << endl;
    }
    cout << endl;
}

void swap(int &num1, int &num2){
    
    int temp = num1;
    num1 = num2;
    num2 = temp;
    //cout << num1 << " " << num2 << endl;
}

void swap(int oddArray[], int evenArray[], int arraySize){
    
    for (int i = 0; i < arraySize; i++){
        if (i % 2 == 0)
            swap(oddArray[i], evenArray[i]);
    }
    
}

void initialize(int array2D[][colSize], int rowSize, int colSize, int oddArray[], int evenArray[], int size){
    
    
    cout << endl;
    int x = 0;
    int y = 0;
    int n = 0;
    
    for (int r = 0; r < rowSize; r++)
    {
        for (int c = 0; c < colSize; c++)
        {
            if (x == size)
            {
                for (int i = 0; i < size/2; i++)
                {
                    int temp = oddArray[i];
                    oddArray[i] = oddArray[size - 1 - i];
                    oddArray[size - 1 - i] = temp;
                }
                x = 0;
            }
            if (y == size)
            {
                for (int i = 0; i < size/2; i++)
                {
                    int temp2 = evenArray[i];
                    evenArray[i] = evenArray[size - 1 - i];
                    evenArray[size - 1 - i] = temp2;
                }
                y = 0;
            }
                
            if (n % 2 == 0)
            {
                array2D[r][c] = oddArray[x];
                x++;
            }
            
            else if (n % 2 == 1)
            {
                array2D[r][c] = evenArray[y];
                y++;
            }
        }
        n++;
    }
}


void display(int array2D[][colSize], int rowSize, int colSize){
    
    for (int r = 0; r < rowSize; r++){
        for (int c = 0; c < colSize; c++){
            cout << array2D[r][c] << " ";
        }
        cout << endl;
    }
    
}

