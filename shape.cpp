#include "shape.h"
int Shape::ShapeCount = 0;
int Shape::LineCount = 0;
int Shape::PolylineCount = 0;
int Shape::PolygonCount = 0;
int Shape::RectangleCount = 0;
int Shape::SquareCount = 0;
int Shape::EllipseCount = 0;
int Shape::CircleCount = 0;
int Shape::TextCount = 0;


Shape::Shape(QPaintDevice *device) : QPainter(device)
{

}

Shape:: Shape()
{


}

void Shape::setNewPen(QPen newPen)
{
    pen = newPen;
    setPen(newPen);
}

void Shape::setNewBrush(QBrush newBrush)
{
    brush = newBrush;
    setBrush(newBrush);
}

void Shape::setNewFont(QFont newFont)
{
    font = newFont;
    setFont(newFont);
}

void Shape::setPenColor(Qt::GlobalColor color)
{
    pen.setColor(color);
}

void Shape::setPenWidth(int width)
{
    pen.setWidth(width);
}

void Shape::setPenStyle(Qt::PenStyle style)
{
    pen.setStyle(style);
}

void Shape::setPenCapStyle(Qt::PenCapStyle style)
{
    pen.setCapStyle(style);
}

void Shape::setPenJointStyle(Qt::PenJoinStyle style)
{
    pen.setJoinStyle(style);
}

void Shape::setBrushColor(Qt::GlobalColor color)
{
    brush.setColor(color);
}

void Shape::setBrushStyle(Qt::BrushStyle style)
{
    brush.setStyle(style);
}

void Shape::setShapeID(int s)
{
    shapeID = s;
}

int Shape::getShapeID()
{
    return shapeID;
}
