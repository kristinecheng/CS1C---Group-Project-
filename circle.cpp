#include "circle.h"
#include "math.h"

/*

Ellipse::Ellipse(int x1, int y1, int a_in, int b_in, QPaintDevice *device)
    : Shape(device) , x(x1) , y(y1) , a(a_in) , b(b_in)
{
    if (a == b)
    {
        shapeID = CircleCount++;
        shapeID = shapeID + 7000;
    }
    else
    {
        shapeID = EllipseCount++;
        shapeID = shapeID + 6000;
    }
}

*/


Circle:: Circle(int x_in, int y_in, int a_in, int b_in)
{

this->x = x_in;
this->y = y_in;
this->a = a_in;
this->b = b_in;

shapeID = 7;

SquareCount++;

}


void Circle::draw()
{
    drawEllipse(x,y,a,b);
}

void Circle::move(int x_in, int y_in)
{
    x = x_in;
    y = y_in;
}

double Circle::getPerimeter()
{
    double perimeter = 3.14 * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));
    return perimeter;
}

double Circle::getArea()
{
    double area = 3.14 * a * b;
    return area;
}
