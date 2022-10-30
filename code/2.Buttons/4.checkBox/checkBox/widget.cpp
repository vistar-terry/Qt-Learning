#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QCheckBox* checkBox1 = new QCheckBox("CheckBox1", this);
    checkBox1->setGeometry(QRect(190, 210, 82, 62));

    QCheckBox* checkBox2 = new QCheckBox("CheckBox2", this);
    checkBox2->setGeometry(QRect(190, 220, 82, 102));
}

Widget::~Widget()
{
    delete ui;
}

