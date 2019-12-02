#ifndef ADMINSTRATOR_H
#define ADMINSTRATOR_H

#include <QMainWindow>

namespace Ui
{
    class Adminstrator;
}

class Adminstrator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Adminstrator(QWidget *parent = nullptr);
    ~Adminstrator();

private:
    Ui::Adminstrator *ui;
};

#endif // ADMINSTRATOR_H
