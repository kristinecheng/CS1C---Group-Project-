
#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse : public Shape
{
private:
    int x;
    int y;
    int a;
    int b;

public:

    //Ellipse(int x1, int y1, int a, int b, QPaintDevice *device);
    Ellipse(int x_in, int y_in, int a_in, int b_in);


    void draw() override;
    void move(int x1, int y1) override;
    double getPerimeter() override;
    double getArea() override;
};


#endif // ELLIPSE_H
