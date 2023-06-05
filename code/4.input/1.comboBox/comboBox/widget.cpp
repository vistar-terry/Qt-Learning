#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    ui->comboBox.it
    ui->comboBox->setItemData(0, 22, Qt::UserRole);
    ui->comboBox->setItemData(0, 123, 1);
    for (size_t i = 0; i < 14; i++)
    {
         qDebug() << i << ": " << ui->comboBox->itemData(0,i);
    }

    qDebug() << 256 << ": " << ui->comboBox->itemData(0,256);
}

Widget::~Widget()
{
    delete ui;
}

