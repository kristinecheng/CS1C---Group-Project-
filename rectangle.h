#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape
{

private:

    int x;
    int y;
    int l;
    int w;

public:

    Rectangle(int x1, int y1, int l, int w, QPaintDevice *device);

    Rectangle(int x_in, int y_in, int l_in, int w_in);

    void draw() override;
    void move(int x1, int y1) override;
    double getPerimeter() override;
    double getArea() override;
};
#endif // RECTANGLE_H
