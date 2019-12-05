#include "line.h"
/*
class line : public Shape
{
private:
     QPoint p1;
     QPoint p2;
 public:
      line(int x1, int x2, int y1, int y2);
      virtual void draw();
      virtual void move();
      virtual void getPerimeter();
      virtual void getArea();
};
*/

/*
Line::Line(int x1, int y1, int x2, int y2, QPaintDevice *device) : Shape(device)
{
    shapeID = LineCount++;
    shapeID = shapeID + 1000;
    point1.setX(x1);
    point1.setY(y1);
    point2.setX(x2);
    point2.setY(y2);

    shapeID = 1;

}
*/


Line::Line(int x1_val, int y1_val, int x2_val, int y2_val)
{

    LineCount++;
    shapeID = 1;

    point1.setX(x1_val);
    point1.setY(y1_val);
    point2.setX(x2_val);
    point2.setY(y2_val);

}











void Line::draw()
{
    drawLine(point1, point2);

}

void Line::move(int x_in, int y_in)
{
    int new_x, new_y;

    new_x = x_in - point1.x();
    new_y = y_in - point1.y();
    point1.setX(x_in);
    point1.setY(y_in);
    point2.setX(new_x + point2.x());
    point2.setY(new_y + point2.y());
}

double Line::getPerimeter()
{
    return 0;
}

double Line::getArea()
{
    return 0;
}
