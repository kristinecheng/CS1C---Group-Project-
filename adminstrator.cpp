#include "adminstrator.h"
#include "ui_adminstrator.h"

Adminstrator::Adminstrator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Adminstrator)
{
    ui->setupUi(this);
}

Adminstrator::~Adminstrator()
{
    delete ui;
}
