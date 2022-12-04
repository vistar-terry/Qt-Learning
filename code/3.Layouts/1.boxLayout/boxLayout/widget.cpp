#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    qDebug() << ui->verticalLayout->spacing();
//    ui->verticalLayout->addSpacing(200);
//    ui->horizontalLayout->addSpacing(100);
//    ui->horizontalLayout->insertSpacing(0, 100);
    qDebug() << ui->horizontalLayout->spacing();
//    ui->horizontalLayout->setSpacing(20);
}

Widget::~Widget()
{
    delete ui;
}

