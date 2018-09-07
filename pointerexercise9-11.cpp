 // Pointer Exercise 9.11

// Danielle Bufano
// 1/22/18

#include <iostream>
#include <iomanip>
using namespace std;

double convert(double&);

int main(){
    
    double measurement;
    cout << "Enter a length in inches, and I will convert\n"; cout << "it to centimeters: ";
    cin >> measurement;
    convert(measurement);
    cout << fixed << setprecision(4);
    cout << "Value in centimeters: " << measurement << endl;
    
    return 0;
}

double convert(double& measurement){
    
    measurement *= 2.54;
    return measurement;
}
