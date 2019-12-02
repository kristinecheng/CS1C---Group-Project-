#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QFile>
#include <QTextStream>
#include "shape.h"
#include "Vector.h"
#include <QPaintEvent>
#include <QWidget>
#include <QMessageBox>
#include <QCoreApplication>
#include <QDir>


class RenderArea : public QWidget
{
    public:
        RenderArea(QWidget *parent = nullptr);

        void paintEvent();
        QSize sizeHint() const override;
        QSize minimumSizeHint() const override;

        const vector<Shape*>& getShapes();

        void addShape(Shape* shapeIn);

        int getSize();
        int getNumShapes();

        void removeShape(int indexRemove);//Shape remove
        void moveShape(int indexMove, int coordMove, int x, int y); //Move shape

   //     void writeShapeFile(); //Writing to shape File

   private:
        const QImage renderArea;
        vector<Shape*> ShapeList;
        int numShapes;

        void readShapeFile();

        QString getStringColor(QColor color);
        QString getStringPenCap(Qt::PenCapStyle penCapStyle);
        QString getStringPenStyle(Qt::PenStyle penStyle);
        QString getStringPenJointStyle(Qt::PenJoinStyle penJointStyle);
        QString getStringBrush(Qt::BrushStyle brush);
        QString getStringFlag(Qt::AlignmentFlag  flag);
        QString getStringFontStyle(QFont::Style fontStyle);
        QString getStringFontWeight(int fontWeight);

        Shape::ShapeType  getShapeType(QString shape);
        Qt::GlobalColor   getColor(QString color);
        Qt::PenCapStyle   getPenCapStyle(QString cap);
        Qt::PenStyle      getPenStyle(QString pen);
        Qt::PenJoinStyle  getPenJointStyle(QString penJoint);
        Qt::BrushStyle    getBrushStyle(QString brushStyle);
        Qt::AlignmentFlag getFlag(QString flag);
        QFont::Style      getFontStyle(QString fontStyle);
        QFont::Weight     getFontWeight(QString fontWeight);
};


#endif // RENDERAREA_H
