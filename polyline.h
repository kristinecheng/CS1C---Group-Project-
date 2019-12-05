#ifndef POLYLINE_H
#define POLYLINE_H
#include "shape.h"
#include "vector.h"

class Polyline : public Shape
{
private:

    vector<QPoint> vPoint;
    int pointCount;

public:
   // Polyline(QPoint* points_in, int amount_in, QPaintDevice *device);

    Polyline(QPoint * coords, int pointCount_in);

    void draw() override;
    void move(int x_in, int y_in) override;
    double getPerimeter() override;
    double getArea() override;
};
#endif // POLYLINE_H
