#include "widget.h"
#include "ui_widget.h"
#include <QBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    int row, column, rowSpan, columnSpan;
    ui->gridLayout->getItemPosition(1, &row, &column, &rowSpan, &columnSpan);
    qDebug("index: 1, row: %d, column: %d, rowSpan: %d, columnSpan: %d",
           row, column, rowSpan, columnSpan);
}

Widget::~Widget()
{
    delete ui;
}

