#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "shape.h"
#include <QMainWindow>
#include <QListView>
#include <QComboBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void getShapeType();

    void getPenColor();

    void getPenStyle();

    void getPenCapStyle();

    void getPenJoinStyle();

    void getBrushColor();

    void getBrushStyle();

    void getAlign();

    void getTextColor();

    void getTextWeight();

    void getTextStyle();

    void getFontFamily();

    void getPenWidth();

    void setShapeNonsense(Shape * shape, Shape::ShapeType, int id, Qt::GlobalColor pc, int pw, Qt::PenStyle ps, Qt::PenCapStyle pcs, Qt::PenJoinStyle pjs, Qt::GlobalColor bc, Qt::BrushStyle bs);

    QComboBox * comboTrickColors(QComboBox * combo);

    QComboBox * comboTrickShapes(QComboBox * combo);

    QComboBox * comboTrickPenStyles(QComboBox * combo);

    QComboBox * comboTrickPenCapStyles(QComboBox * combo);

    QComboBox * comboTrickPenJoinStyles(QComboBox * combo);

    QComboBox * comboTrickBushStyle(QComboBox *combo);

    QComboBox * comboTrickFlag(QComboBox *combo);

    QComboBox * comboTrickFontStyle(QComboBox *combo);

    QComboBox * comboTrickFontFam(QComboBox *combo);

    void printShapeInfo();

private:

    Ui::MainWindow *ui;
    Shape::ShapeType The_shapeType{Shape::ShapeType::Line};
    Qt::GlobalColor  The_penColor{Qt::GlobalColor::green};
    Qt::PenStyle     The_penStyle{Qt::PenStyle::SolidLine};
    Qt::PenCapStyle  The_penCap{Qt::PenCapStyle::RoundCap};
    Qt::PenJoinStyle The_penJoinStyle{Qt::PenJoinStyle::MiterJoin};
    Qt::GlobalColor  The_brushColor{Qt::GlobalColor::red};
    Qt::BrushStyle   The_brushStyle{Qt::BrushStyle::SolidPattern};
    int              The_penWidth{5};
};
#endif // MAINWINDOW_H
