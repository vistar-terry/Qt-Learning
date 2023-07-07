#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QLineEdit* lineEdit2 = new QLineEdit("test", this);
    lineEdit2->setGeometry(QRect(170, 160, 251, 31));
}

Widget::~Widget()
{
    delete ui;
}

