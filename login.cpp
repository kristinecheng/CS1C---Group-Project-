#include "login.h"
#include "ui_login.h"
#include "adminstrator.h"
#include "guest.h"
#include <QMessageBox>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_Login_PushButton_clicked()
{
    const QString USER_NAME_ADMIN = "adminstrator";
    const QString PASSWORD_ADMIN  = "ADMINSTRATOR";
    const QString USER_NAME_GUEST = "guest";
    const QString PASSWORD_GUEST  = "GUEST";

    if(ui->lineEdit_login_UserName->text() == USER_NAME_ADMIN && ui->lineEdit_Login_Password->text() == PASSWORD_ADMIN)
    {
        QMessageBox::information(this, "Login", "Adminstrator Login Successful!");
        hide();
        Adminstrator *menu = new Adminstrator;
        menu->show();
    }
    else if(ui->lineEdit_login_UserName->text() == USER_NAME_GUEST && ui->lineEdit_Login_Password->text() == PASSWORD_GUEST)
    {
        QMessageBox::information(this, "Login", "Guest Login Successful!");
        hide();
        Guest *menu = new Guest;
        menu->show();
    }
    else
    {
        QMessageBox::information(this, "Login", "Incorrect User Name or Password, tyr again!");
        ui->lineEdit_login_UserName->setText("");
        ui->lineEdit_Login_Password->setText("");
    }
}
