// Pointer Exercise 9

// Danielle Bufano
// 1/22/18

#include <iostream>
#include <iomanip>
using namespace std;

double findMedian(int [], int);

const int array1Size = 10;
const int array2Size = 11;

int main(){
    
    int array1[array1Size];
    int array2[array2Size];
    
    int *p1;
    int *p2;
    
    p1 = array1; p2 = array2;
    
    cout << "Array 1 is: ";
    for (int i = 0; i < array1Size; i++){
        *(p1 + i) = i + 1;
        cout << *(p1 + i) << " ";
    }
    
    cout << endl << "Array 2 is: ";
    for (int i = 0; i < array2Size; i++){
        *(p2 + i) = i + 1;
        cout << *(p2 + i) << " ";
    }
    cout << endl;
    
    
    
    cout << "The median of array 1 is " << findMedian(array1, array1Size) << endl;
    cout << "The median of array 2 is " << findMedian(array2, array2Size) << endl;
    
    return 0;
}

double findMedian(int array[], int size){
    
    double median;
    
    if (size %2 == 0)
        median = static_cast<double>((array[size/2] + array[size/2 - 1])) / 2;
    else
        median = static_cast<double>((array[size/2]));
    
    return median;
    
}

