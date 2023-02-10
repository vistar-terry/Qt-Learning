#include "widget.h"
#include "ui_widget.h"
#include <QBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->gridLayout->setSpacing(20);
    ui->gridLayout->setRowMinimumHeight(1, 100);
}

Widget::~Widget()
{
    delete ui;
}

