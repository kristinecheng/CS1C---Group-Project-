#include "guest.h"
#include "ui_guest.h"

Guest::Guest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Guest)
{
    ui->setupUi(this);
}

Guest::~Guest()
{
    delete ui;
}
