// Danielle Bufano
// 2/20/18

#ifndef Point_h
#define Point_h
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point();
    Point(int x, int y);
    void setX(int x);
    int getX()
    {return x;}
    void setY(int y);
    int getY()
    {return y;}
    void print();
    void setXY(int x, int y);
    void getXY(int coords[]);
    double distance(int x1, int y1);
    double distance(Point another);
    double distance();
};



#endif /* hkhlkhlkhlk_hpp */
