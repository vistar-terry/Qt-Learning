#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    qDebug() << ui->verticalLayout->spacing();
    ui->verticalLayout->setSpacing(5);
    qDebug() << ui->verticalLayout->spacing();

    qDebug() << ui->verticalLayout->contentsMargins();
    qDebug() << ui->verticalLayout->stretch(0);

//    ui->verticalLayout->addSpacing(200);
//    ui->horizontalLayout->addSpacing(100);
//    ui->horizontalLayout->insertSpacing(0, 100);
//    qDebug() << ui->horizontalLayout->spacing();
//    ui->horizontalLayout->setSpacing(100);
//    ui->horizontalLayout->addStretch(10);
//    ui->horizontalLayout->insertStretch(1,10);
//    ui->horizontalLayout->insertStretch(2,10);
//    ui->horizontalLayout->insertStretch(4,10);
    qDebug() << ui->horizontalLayout->stretch(1);
    ui->horizontalLayout->setStretch(1, 20);
    qDebug() << "index0: " << ui->horizontalLayout->stretch(0);
    qDebug() << "index1: " << ui->horizontalLayout->stretch(1);
    qDebug() << "index2: " << ui->horizontalLayout->stretch(2);
    qDebug() << "index3: " << ui->horizontalLayout->stretch(3);
    qDebug() << "index4: " << ui->horizontalLayout->stretch(4);
    qDebug() << "index5: " << ui->horizontalLayout->stretch(5);
    qDebug() << "index6: " << ui->horizontalLayout->stretch(6);


}

Widget::~Widget()
{
    delete ui;
}

