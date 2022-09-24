#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QToolButton* tBtn = new QToolButton(this);
//    tBtn->setGeometry(QRect(230, 170, 26, 24));
    qDebug() << tBtn->objectName();
}

Widget::~Widget()
{
    delete ui;
}

