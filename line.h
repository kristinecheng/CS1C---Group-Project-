#ifndef LINE_H
#define LINE_H
#include "shape.h"

class Line : public Shape
{
private:
    QPoint point1;
    QPoint point2;
public:

    Line(int x1_val, int y1_val, int x2_val, int y2_val);

    void draw() override;
    void move(int x,int y) override;
    double getPerimeter() override;
    double getArea() override;
};
#endif // LINE_H
