#include "rectangle.h"

/*
Rectangle::Rectangle(int x1,int y1,int l_in,int w_in, QPaintDevice *device)
    : Shape(device) , x(x1) , y(y1) , l(l_in) , w(w_in)
{
    if (l == w)
    {
        shapeID = SquareCount++;
        shapeID = shapeID + 5000;

    }
    else
    {


        shapeID = RectangleCount++;
        shapeID = shapeID + 4000;
    }

}
*/


Rectangle::Rectangle(int x_in, int y_in, int l_in, int w_in)
{

this->x = x_in;
this->y = y_in;
this->l = l_in;
this->w = w_in;

shapeID = 4;

RectangleCount++;

}

void Rectangle::draw()
{
    drawRect(x,y,l,w);
    fillRect(x,y,l,w,brush);
}

void Rectangle::move(int x_in, int y_in)
{
    x = x_in;
    y = y_in;
}

double Rectangle::getPerimeter()
{
    double perimeter = (l * 2) + (w * 2);
    return perimeter;
}

double Rectangle::getArea()
{
    double area = (1 * w);
    return area;
}
