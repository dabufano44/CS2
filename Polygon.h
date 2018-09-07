
#ifndef POLYGON_H
#define POLYGON_H

class Polygon{
private:
    int length;
    int width;
public:
    Polygon();
    Polygon(int, int);
    void setLength(int);
    void setWidth(int);
    
    int getLength() const
        {return length;}
    
    int getWidth() const
        {return width;}
    
    int getArea() const
        {return width * length;}
    
    int getPerimeter() const
        {return 2*width + 2*length;}
    
    void displayPolygon();
    
};

#endif
