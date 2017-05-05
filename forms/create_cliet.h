#ifndef CREATE_CLIET_H
#define CREATE_CLIET_H

#include <QDialog>

namespace Ui {
class Create_cliet;
}

class Create_cliet : public QDialog
{
    Q_OBJECT

public:
    explicit Create_cliet(QWidget *parent = 0);
    ~Create_cliet();

private:
    Ui::Create_cliet *ui;
};

#endif // CREATE_CLIET_H
