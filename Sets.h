// Danielle Bufano
// 2/25/18

#ifndef Sets_h
#define Sets_h
using namespace std;

class Set{
private:
    int *ptr;
    int pSize = 0;
    int numElements = 0;
    static const int DEFAULT_SIZE = 5;
public:
    Set(int=DEFAULT_SIZE);
    Set(int arr[], int size);
    Set(const Set &tempSet);
    Set& operator=(const Set &tempSet);
    Set operator+(const Set &tempSet);
    Set operator^(const Set &tempSet);
    Set operator-(const Set &tempSet);
    bool operator==(const Set &tempSet);
    bool operator!=(const Set &tempSet);
    void operator+(const int a);
    void operator-(const int a);
    friend ostream& operator<< (ostream &out, Set &tempSet);
    friend istream& operator>> (istream &in, Set &tempSet);
    ~Set();
    void input();
    void display();
    void expandArray();
    bool isRepeat(int a);
    void addNumber(int a);
    void removeNumber(int a);
    int getNumElements()
    {return this->numElements;}
    int getpSize()
    {return this->pSize;}
    Set Union(Set);
    Set intersection(Set);
};

#endif

