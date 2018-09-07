// Population Part 2

// Danielle Bufano
// 1/22/18

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int MAXCOUNTRIES = 250;

struct Country{
    string name;
    double pop1950;
    double pop1970;
    double pop1990;
    double pop2010;
    double pop2015;
    double intervalOne;
    double intervalTwo;
    double intervalThree;
    double intervalFour;
};

struct World{
    int numCountries;
    Country countries[MAXCOUNTRIES];
    int firstLargestIndex;
    int secondLargestIndex;
    int thirdLargestIndex;
}myWorld;

int main(){
    
    double pop1950;
    double pop1970;
    double pop1990;
    double pop2010;
    double pop2015;
    string name;
    int index = 0;
    
    ifstream inFile;
    
    inFile.open("population.csv");
    
    if (inFile)
    {
        while ( inFile >> pop1950)
        {
            inFile >> pop1970 >> pop1990 >> pop2010 >> pop2015;
            inFile.ignore();
            getline(inFile, name);
            
            myWorld.numCountries = index + 1;
            myWorld.countries[index].name = name;
            myWorld.countries[index].pop1950 = pop1950;
            myWorld.countries[index].pop1970 = pop1970;
            myWorld.countries[index].pop1990 = pop1990;
            myWorld.countries[index].pop2010 = pop2010;
            myWorld.countries[index].pop2015 = pop2015;
            
            myWorld.countries[index].intervalOne = (pop1970 - pop1950) / pop1950;
            myWorld.countries[index].intervalTwo = (pop1990 - pop1970) / pop1970;
            myWorld.countries[index].intervalThree = (pop2010 - pop1990) / pop1990;
            myWorld.countries[index].intervalFour = (pop2015 - pop2010) / pop2010;
            
            index++;
        }
        inFile.close();
    }
    else
        cout << "File open failure" << endl;
    
    for (int i = 0; i < index; i++){
        cout << myWorld.countries[i].name << " " << myWorld.countries[i].pop1950 << " " << myWorld.countries[i].pop1970 << " " << myWorld.countries[i].pop1990 << " " << myWorld.countries[i].pop2010 << " " << myWorld.countries[i].pop2015 << endl;
    }
    
    cout << endl;
    int firstLargest = 0;
    for (int i = 0; i < index; i++){
        if (myWorld.countries[i].pop2015 > myWorld.countries[firstLargest].pop2015){
            firstLargest = i;
        }
    }
    
    int secondLargest = 0;
    for (int j = 0; j < index; j++){
        if (myWorld.countries[j].pop2015 > myWorld.countries[secondLargest].pop2015 && myWorld.countries[j].pop2015 < myWorld.countries[firstLargest].pop2015){
            secondLargest = j;
        }
    }
    
    int thirdLargest = 0;
    for (int k = 0; k < index; k++){
        if (myWorld.countries[k].pop2015 > myWorld.countries[thirdLargest].pop2015 && myWorld.countries[k].pop2015 < myWorld.countries[secondLargest].pop2015){
            thirdLargest = k;
        }
    }
    
    int largestFirstInterval = 0;
    for (int i = 0; i < index; i++){
        if (myWorld.countries[i].intervalOne > myWorld.countries[largestFirstInterval].intervalOne)
            largestFirstInterval = i;
    }
    
    int largestSecondInterval = 0;
    for (int i = 0; i < index; i++){
        if (myWorld.countries[i].intervalTwo > myWorld.countries[largestSecondInterval].intervalTwo)
            largestSecondInterval = i;
    }
    
    int largestThirdInterval = 0;
    for (int i = 0; i < index; i++){
        if (myWorld.countries[i].intervalThree > myWorld.countries[largestThirdInterval].intervalThree)
            largestThirdInterval = i;
    }
    
    int largestFourthInterval = 0;
    for (int i = 0; i < index; i++){
        if (myWorld.countries[i].intervalFour > myWorld.countries[largestFourthInterval].intervalFour)
            largestFourthInterval = i;
    }
    
    myWorld.firstLargestIndex = firstLargest;
    myWorld.secondLargestIndex = secondLargest;
    myWorld.thirdLargestIndex = thirdLargest;
    
    cout << "Three largest countries:" << endl;
    cout << "1. " << myWorld.countries[firstLargest].name << endl;
    cout << "2. " << myWorld.countries[secondLargest].name << endl;
    cout << "3. " << myWorld.countries[thirdLargest].name << endl << endl;
    
    cout << "1950-1970 fastest rate: " << setw(8) << myWorld.countries[largestFirstInterval].intervalOne << "  " << myWorld.countries[largestFirstInterval].name << endl;
    cout << "1970-1990 fastest rate: " << setw(8) << myWorld.countries[largestSecondInterval].intervalTwo << "  " << myWorld.countries[largestSecondInterval].name << endl;
    cout << "1990-2010 fastest rate: " << setw(8) << myWorld.countries[largestThirdInterval].intervalThree << "  " <<myWorld.countries[largestThirdInterval].name << endl;
    cout << "2010-2015 fastest rate: " << setw(8) << myWorld.countries[largestFourthInterval].intervalFour << "  " << myWorld.countries[largestFourthInterval].name << endl << endl;
    
    
    //cout << myWorld.countries[thirdLargest].pop2015 << "   " << myWorld.countries[thirdLargest].pop2015 * .25 << "    " << myWorld.countries[thirdLargest].intervalFour << endl << endl;
    
    for (int i = 0; i < index; i++){
        if ((myWorld.countries[i].pop2015 >= (myWorld.countries[thirdLargest].pop2015 * .25)) && (myWorld.countries[i].intervalFour > myWorld.countries[thirdLargest].intervalFour)){
            if (i != firstLargest && i != secondLargest && i != thirdLargest ){
                cout << setw(3) << i << setw(12) << myWorld.countries[i].pop2015 << setw(12) << myWorld.countries[i].intervalFour << "  " << myWorld.countries[i].name << endl;
            }
        }
        
    }
    
    
    return 0;
}
