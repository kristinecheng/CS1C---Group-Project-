#include "polyline.h"

//class Polyline : public Shape
//{
//    vector<QPoint> points;

//public:
//     Polyline(QPoint *points, int amount);
//     void draw() override;
//     void move();
//     double getPerimeter() override;
//     double getArea() override;
//};


/*
Polyline::Polyline(QPoint* points_in, int amount_in, QPaintDevice *device)
    : Shape(device) , points(amount_in * 2) , amount(amount_in)
{
    shapeID = PolylineCount++;
    shapeID = shapeID + 2000;
    for (int i = 0; i < amount; i++)
    {
        points.push_back(points_in[i]);
    }
}
*/


Polyline:: Polyline(QPoint * coords, int pointCount_in)
{
    shapeID = 2;
    PolylineCount++;

for(int i = 0; i < pointCount_in; i++)
{
    vPoint.push_back(coords[i]);
}


}


void Polyline::draw()
{
    QPoint *ptr = &vPoint[0];
    drawPolyline(ptr,pointCount);
}


void Polyline::move(int x_in, int y_in)
{
    int new_x;
    int new_y;

    new_x = x_in - vPoint[0].x();
    new_y = y_in - vPoint[0].y();

    for (int i = 0; i < pointCount; i++)
    {
        vPoint[i].setX(vPoint[i].x() + new_x);
        vPoint[i].setY(vPoint[i].y() + new_y);
    }
}



double Polyline::getPerimeter()
{
    return 0;
}

double Polyline::getArea()
{
    return 0;
}
