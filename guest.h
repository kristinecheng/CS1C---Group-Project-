#ifndef GUEST_H
#define GUEST_H

#include <QMainWindow>

namespace Ui {
class Guest;
}

class Guest : public QMainWindow
{
    Q_OBJECT

public:
    explicit Guest(QWidget *parent = nullptr);
    ~Guest();

private:
    Ui::Guest *ui;
};

#endif // GUEST_H
