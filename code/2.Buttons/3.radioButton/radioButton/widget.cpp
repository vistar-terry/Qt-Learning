#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QRadioButton* radioButton1 = new QRadioButton("RadioButton1", this);
    radioButton1->setGeometry(QRect(220, 220, 115, 23));

    QRadioButton* radioButton2 = new QRadioButton("RadioButton2", this);
    radioButton2->setGeometry(QRect(220, 250, 115, 23));
    radioButton2->setText("单选按钮2");

}

Widget::~Widget()
{
    delete ui;
}

