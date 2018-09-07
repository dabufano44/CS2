// This program demonstrates the use of dynamic arrays

// Danielle Bufano
// 1/31/18

#include <iostream>
#include <iomanip>
using namespace std;

float yearlySum(float*, int);
float findAvg(float, int);

int main()
{
    float *monthSales = nullptr;	// a pointer used to point to an array holding monthly sales
    
    float sum;          // sum of sales
    float average;		// average of monthly sales
    int numOfSales;		// number of sales to be processed
    int count;			// loop counter
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "How many monthly sales will be processed? ";
    cin >> numOfSales;
    
    // Fill in the code to allocate memory for the array pointed to by
    // monthSales.
    
    monthSales = new float[numOfSales];
    
    if ( monthSales == nullptr )
        {
            cout << "Error allocating memory!\n";
            return 1;
        }
        
    cout << "Enter the sales below\n";
        
    for (count = 0; count < numOfSales; count++)
    {
        cout << "Sales for Month number	"
        << count + 1 << ": ";
        
        cin >> monthSales[count];
        // Fill in code to bring sales into an element of the array
    }
    
    sum = yearlySum(monthSales, numOfSales);
    average = findAvg(sum, numOfSales);
    
    cout << "The Yearly Sum of all monthly sales is $" << sum << endl;
    cout << "Average Monthly sale is $" << average << endl;
    
    delete [] monthSales;
    
        return 0;
    }


float yearlySum(float *sales, int size){

    float total = 0;
    for (int count = 0; count < size; count++)
    {
        total = total + sales[count];
    }
    
    return total;
}

float findAvg(float total, int size){
    
    float average = 0;
    average = total / size;
    return average;
    
}
