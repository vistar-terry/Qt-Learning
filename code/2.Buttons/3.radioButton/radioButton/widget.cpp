#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QRadioButton* radioButton1 = new QRadioButton("RadioButton1", this);
    radioButton1->setGeometry(QRect(90, 150, 115, 23));

    QRadioButton* radioButton2 = new QRadioButton("RadioButton2", this);
    radioButton2->setGeometry(QRect(90, 180, 115, 23));
    radioButton2->setText("单选按钮2");

    QButtonGroup* btnGroup1 = new QButtonGroup(this);
    btnGroup1->addButton(ui->radioButton, 0);
    btnGroup1->addButton(radioButton1, 1);
    btnGroup1->addButton(radioButton2, 2);

    QRadioButton* radioButton3 = new QRadioButton("RadioButton3", this);
    radioButton3->setGeometry(QRect(250, 120, 115, 23));
    QRadioButton* radioButton4 = new QRadioButton("RadioButton4", this);
    radioButton4->setGeometry(QRect(250, 150, 115, 23));
    QRadioButton* radioButton5 = new QRadioButton("RadioButton5", this);
    radioButton5->setGeometry(QRect(250, 180, 115, 23));

    QButtonGroup* btnGroup2 = new QButtonGroup(this);
    btnGroup2->addButton(radioButton3, 0);
    btnGroup2->addButton(radioButton4, 1);
    btnGroup2->addButton(radioButton5, 2);


}

Widget::~Widget()
{
    delete ui;
}

