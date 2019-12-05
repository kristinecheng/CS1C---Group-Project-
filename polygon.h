#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"
#include "vector.h"

class Polygon : public Shape
{
private:

    vector<QPoint> vPoint;
    int pointCount;

public:

    //Polygon(QPoint *points_in, int amount_in, QPaintDevice *device);
    Polygon(QPoint *coords, int pointCount_in);


    void draw() override;
    void move(int x_in, int y_in) override;
    double getPerimeter() override;
    double getArea() override;
};
#endif // POLYGON_H
