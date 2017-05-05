#include "new_order.h"
#include "ui_new_order.h"

New_order::New_order(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::New_order)
{
    ui->setupUi(this);
}

New_order::~New_order()
{
    delete ui;
}
