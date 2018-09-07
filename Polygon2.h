 
#ifndef POLYGON2_H
#define POLYGON2_H

class Polygon{
private:
    int length;
    int width;
public:
    Polygon();
    Polygon(int, int);
    void setDimensions(int, int);
    int getLength() const
    {return length;}
    int getWidth() const
    {return width;}
    int getArea() const
    {return width * length;}
    int getPerimeter() const
    {return 2*width + 2*length;}
    
    void displayInfo();
    void displayPic();
    ~Polygon();
    
};

#endif
