#ifndef SHAPE_H
#define SHAPE_H

#include <QBrush>
#include <QPen>
#include <QWidget>
#include <QPainter>


//enum ShapeType {Line, Polyline,Polygon, Rectangle, Ellipse, Text};
// this causes errors because it's included somewhere within <QtGui>. creating it as an enum class within shape to solve this duplicity


class Shape : public QPainter
{
private:


    enum class ShapeType {None, Line, Polyline,Polygon, Rectangle, Ellipse, Text};

public:

    Shape(QPaintDevice *device);
    Shape();

    virtual ~Shape() {}

    QPen getPen() {return pen;}
    QBrush getBrush() {return brush;}
    QFont getFont() {return font;}

    void setNewPen(QPen);
    void setNewBrush(QBrush);
    void setNewFont(QFont);
    void setPenColor(Qt::GlobalColor);
    void setPenWidth(int width);
    void setPenStyle(Qt::PenStyle);
    void setPenCapStyle(Qt::PenCapStyle);
    void setPenJointStyle(Qt::PenJoinStyle);
    void setBrushColor(Qt::GlobalColor);
    void setBrushStyle(Qt::BrushStyle);

    // TODO: Override '>' operator (compare areas)

    virtual void draw() = 0;
    virtual void move(int,int) = 0;
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;

    void setShapeID(int s);
    int getShapeID();

protected:
    ShapeType s;
    QPen pen;
    QBrush brush;
    QColor color;
    QFont font;

    static int ShapeCount;
    static int LineCount;
    static int PolylineCount;
    static int PolygonCount;
    static int RectangleCount;
    static int SquareCount;
    static int EllipseCount;
    static int CircleCount;
    static int TextCount;

    int shapeID;
};

#endif // SHAPE_H
