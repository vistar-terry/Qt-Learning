#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->verticalLayout->addSpacing(200);
    ui->horizontalLayout->addSpacing(100);
}

Widget::~Widget()
{
    delete ui;
}

