// Danielle Bufano
// 2/25/18

#include <iostream>
#include <cstdlib>
#include "Sets.h"
using namespace std;

Set::Set(int size)
{
    this->pSize = size;
    this->ptr = new int[this->pSize];
}

Set::Set(int arr[], int size)
{
    this->pSize = size;
    this->ptr = new int[this->pSize];
    
    for(int i = 0; i < size; i++){
        this->ptr[i] = arr[i];
        this->numElements++;
    }
}

Set::Set(const Set &temparray)
{
    this->pSize = temparray.pSize;
    this->ptr = new int[this->pSize];
    this->numElements = temparray.numElements;
    
    for(int i = 0; i < this->pSize; i++)
        this->ptr[i] = temparray.ptr[i];
}

Set& Set::operator=(const Set& tempSet) {
    //cout << "Assignment op called." << endl;
    
    if (this != &tempSet) {
        numElements = tempSet.numElements;
        pSize = tempSet.pSize;
        delete this->ptr;
        ptr = new int[this->pSize];
        for (int i = 0; i < this->numElements; i++)
            *(ptr+i) = *(tempSet.ptr + i);
    }
    
    return *this;
}

Set Set::operator+(const Set& tempSet)
{
    Set unionArray;
    unionArray = this->Union(tempSet);
    
    return unionArray;
};

Set Set::operator^(const Set& tempSet)
{
    Set intersectionArray;
    intersectionArray = this->intersection(tempSet);
    
    return intersectionArray;
}

Set Set::operator-(const Set& tempSet)
{
    Set diffArray;
    diffArray.numElements = 0;
    bool repeat;
    
    for (int i = 0; i < this->numElements; i++)
    {
        diffArray.ptr[i] = this->ptr[i];
        diffArray.numElements++;
        if (diffArray.numElements == DEFAULT_SIZE)
            diffArray.expandArray();
    }

    for (int i = 0; i < tempSet.numElements; i++){
        repeat = diffArray.isRepeat(tempSet.ptr[i]);
        if (repeat){
            diffArray.removeNumber(tempSet.ptr[i]);
        }
    }
 
    return diffArray;
}

bool Set::operator==(const Set& tempSet)
{
    bool repeat = true;
    bool equal = true;
    
    if (this->numElements == tempSet.numElements)
    {
        for (int i = 0; i < this->numElements; i++)
        {
            repeat = this->isRepeat(tempSet.ptr[i]);
            if (repeat == false)
                equal = false;
        }
    }
    else
        equal = false;
    
    return equal;
}

bool Set::operator!=(const Set& tempSet)
{
    bool repeat;
    bool inequal = false;
    
    if (this->numElements != tempSet.numElements)
        inequal = true;
    else
    {
        for (int i = 0; i < this->numElements; i++)
        {
            repeat = this->isRepeat(tempSet.ptr[i]);
            if (repeat == false)
                inequal = true;
        }
    }
    return inequal;
}

void Set::operator+(const int a)
{
    cout << "Adding " << a << " to the set " << endl;
    this->addNumber(a);
}

void Set::operator-(const int a)
{
    cout << "Removing " << a << " from the set " << endl;
    this->removeNumber(a);
}

ostream& operator<< (ostream &out, Set &tempSet)
{
    out << "{";
    for (int i = 0; i < tempSet.numElements; i++){
        if (i == (tempSet.numElements)-1)
            out << tempSet.ptr[i] << "";
        else
            out << tempSet.ptr[i] << ",";
    }
    out << "}" << endl;
    
    return out;
}

istream& operator>> (istream &in, Set &tempSet)
{
    //cout << "Enter a new element to the set" << endl;
    int a;

    in >> a;
    while (tempSet.isRepeat(a)){
        cout << "Element must not be a repeat. Try again" << endl;
        in >> a;
    }
    tempSet.addNumber(a);
    return in;
}

void Set::input()
{
    int num;
    int userNum;
    cout << "Enter the number of elements you would like to input:" << endl;
    cin >> num;
    
    if (num > this->pSize)
        this->expandArray();
    
    for(int i = 0; i < num; i++) {
        cout << "Enter a number : ";
        cin >> userNum;
        if (this->isRepeat(userNum)){
            cout << "Must not enter duplicate numbers. Please re-enter: ";
            cin >> userNum;
            addNumber(userNum);
            }
        else
        {
            this->ptr[i] = userNum;
            this->numElements++;
        }
    }
}

void Set::display()
{
    cout << "{";
    for (int i = 0; i < this->numElements; i++){
        if (i == (this->numElements)-1)
            cout << this->ptr[i] << "";
        else
            cout << this->ptr[i] << ",";
    }
    cout << "}" << endl;
}

void Set::expandArray()
{
    int *tempArray = new int[this->pSize];
    
    for (int i = 0; i < this->pSize; i++)
        tempArray[i] = this->ptr[i];
    
    this->ptr = new int[this->pSize + DEFAULT_SIZE];
    for (int i = 0; i < this->pSize; i++)
        this->ptr[i] = tempArray[i];
    
    this->pSize = pSize + DEFAULT_SIZE;
}

bool Set::isRepeat(int a)
{
    bool repeat = false;
    for (int i = 0; i < this->numElements; i++){
        if (this->ptr[i] == a)
            repeat = true;
    }
   
    if (this->numElements > this->pSize)
        this->expandArray();
    
    return repeat;
}

void Set::addNumber(int a)
{
    if (this->isRepeat(a))
    {
        cout << a <<" is a repeat, and cannot be added again" << endl;
            return;
    }
    else
    {
        if (numElements == pSize){
            this->expandArray();
            this->ptr[numElements] = a;
            //cout << a << " is added to the array" << endl;
            this->numElements++;
        }
        else
        {
            this->ptr[numElements] = a;
            //cout << a << " is added to the array" << endl;
            this->numElements++;
        }
    }

}

void Set::removeNumber(int a)
{
    if (this->isRepeat(a) == false)
        cout << a << " is not a member of the set" << endl;
    else{
        for (int i = 0; i < this->numElements; i++){
            if (this->ptr[i] == a) {
                cout << a << " will be removed from the set" << endl;
                for (int index = i; index < this->numElements; index++){
                    this->ptr[index] = this->ptr[index + 1];
                }
                this->numElements--;
            }
        }
    }
}

Set Set::Union(Set p)
{
    Set unionArray;
    unionArray.numElements = 0;
 
    for (int i = 0; i < this->numElements; i++){
        unionArray.ptr[i] = this->ptr[i];
        unionArray.numElements++;
        if (unionArray.numElements == DEFAULT_SIZE)
            unionArray.expandArray();
    }
    
    for (int i = 0; i < p.numElements; i++){
        unionArray.addNumber(p.ptr[i]);
    }
    
    return unionArray;
}

Set Set::intersection(Set p)
{
    Set intersectArray;
    intersectArray.numElements = 0;
    
    bool add;
    int size;
    if (this->numElements > p.numElements)
        size = this->numElements;
    else
        size = p.numElements;
    
    for (int i = 0; i < size; i++)
    {
        if(this->numElements <= p.numElements){
            add = this->isRepeat(p.ptr[i]);
            if (add){
                intersectArray.addNumber(p.ptr[i]);
            }
        }
        else{
            add = p.isRepeat(this->ptr[i]);
            if (add)
                intersectArray.addNumber(this->ptr[i]);
        }
        
            
    }
    return intersectArray;
}

Set::~Set()
{
    delete this->ptr;
    return;
}

