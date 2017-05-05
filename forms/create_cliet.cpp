#include "create_cliet.h"
#include "ui_create_cliet.h"

Create_cliet::Create_cliet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create_cliet)
{
    ui->setupUi(this);
}

Create_cliet::~Create_cliet()
{
    delete ui;
}
