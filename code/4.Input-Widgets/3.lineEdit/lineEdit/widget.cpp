#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QLineEdit* lineEdit2 = new QLineEdit("test", this);
}

Widget::~Widget()
{
    delete ui;
}

