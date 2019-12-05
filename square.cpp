#include "square.h"

Square::Square(int x_in, int y_in, int l_in, int w_in)
{

this->x = x_in;
this->y = y_in;
this->l = l_in;
this->w = w_in;

 shapeID = 5;

SquareCount++;

}


void Square::draw()
{
    drawRect(x,y,l,w);
    fillRect(x,y,l,w,brush); // This might be opitional
}

void Square::move(int x_in, int y_in)
{
    x = x_in;
    y = y_in;
}

double Square::getPerimeter()
{
    int perimeter = (l * 2) + (w * 2);
    return perimeter;
}

double Square::getArea()
{
    int area = (1 * w);
    return area;
}
