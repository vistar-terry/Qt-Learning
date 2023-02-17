#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton *pushButton_3 = new QPushButton(ui->formLayoutWidget);

    ui->formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton_3);
}

Widget::~Widget()
{
    delete ui;
}

