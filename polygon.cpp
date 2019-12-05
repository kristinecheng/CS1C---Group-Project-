#include "polygon.h"
#include "math.h"

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

Polygon::Polygon(QPoint *points_in, int amount_in, QPaintDevice *device)
    : Shape(device) , points(amount_in * 2) , amount(amount_in)
{
    shapeID = PolygonCount++;
    shapeID = shapeID + 3000;

    for (int i = 0; i < amount; i++)
    {
        points.push_back(points_in[i]);
    }
}

*/

Polygon:: Polygon(QPoint * coords, int pointCount_in)
{

    shapeID = 3;

    PolygonCount++;

for(int i = 0; i < pointCount_in; i++)
{
    vPoint.push_back(coords[i]);
}


}



void Polygon::draw()
{
    QPoint *pointer = &vPoint[0];
    this->drawPolygon(pointer,pointCount);
    QVector<QPoint> qPtVector;

    for (int i = 0; i < vPoint.size(); i++)
    {
        qPtVector.push_back(vPoint[i]);
    }
}

void Polygon::move(int x_in, int y_in)
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

double Polygon::getPerimeter()
{
    double perimeter = 0;
    double distanceX , distanceY;
    double finalDistanceX,finalDistanceY;

    int j = vPoint.size() - 1;

    for (int i = 0; i < vPoint.size(); i++)
    {
        distanceX = (vPoint[i].x() - vPoint[j].x());

        finalDistanceX = (distanceX * distanceX);

        distanceY = (vPoint[i].y() - vPoint[j].y());

        finalDistanceY = (distanceY * distanceY);

        perimeter = sqrt(finalDistanceX + finalDistanceY) + perimeter;

        j = i;
    }

    return perimeter;
}

double Polygon::getArea()
{
    double area = 0;
    int index = vPoint.size() - 1;

    for (int i = 0; i < vPoint.size(); i++)
    {
        area = area + (vPoint[i].x() + vPoint[index].x())
                    * (vPoint[i].y() - vPoint[index].y());
        index = i;
    }

    area = area * 0.5;



    return area;
}




