#ifndef NEW_ORDER_H
#define NEW_ORDER_H

#include <QDialog>

namespace Ui {
class New_order;
}

class New_order : public QDialog
{
    Q_OBJECT

public:
    explicit New_order(QWidget *parent = 0);
    ~New_order();

private:
    Ui::New_order *ui;
};

#endif // NEW_ORDER_H
