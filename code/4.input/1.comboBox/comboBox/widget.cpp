#include "widget.h"
#include "ui_widget.h"
#include <QStyleFactory>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->comboBox->addItem("item3");
    ui->comboBox->addItem("item4");
    ui->comboBox->addItem("item5");
    ui->comboBox->addItem("item6");
    ui->comboBox->addItem("item7");
    ui->comboBox->addItem("item7");
//    ui->comboBox->setItemData(0, 22, Qt::UserRole);
//    ui->comboBox->setItemData(0, 123, 1);
//    for (size_t i = 0; i < 14; i++)
//    {
//         qDebug() << i << ": " << ui->comboBox->itemData(0,i);
//    }

//    qDebug() << 256 << ": " << ui->comboBox->itemData(0,256);

//    qDebug() << "before maxVisibleItems: " << ui->comboBox->maxVisibleItems();
    ui->comboBox->setMaxVisibleItems(3);
//    qDebug() << "after maxVisibleItems: " << ui->comboBox->maxVisibleItems();
//    setStyleSheet("QComboBox{combobox-popup:0;}");
//    ui->comboBox->setEditable(true);

    qDebug() << "count: " << ui->comboBox->count();
    qDebug() << "maxCount: " << ui->comboBox->maxCount();
//    ui->comboBox->style()->styleHint(QStyle::SH_ComboBox_Popup);
//    ui->comboBox->setMaxCount(3);
    qDebug() << "count: " << ui->comboBox->count();
    qDebug() << "maxCount: " << ui->comboBox->maxCount();

    qDebug() << "duplicatesEnabled: " << ui->comboBox->duplicatesEnabled();

//    ui->comboBox_2->setLineEdit(ui->lineEdit);
    qDebug() << ui->lineEdit->isVisible();
    ui->comboBox_2->setVisible(true);
    qDebug() << ui->comboBox_2->isVisible();
    ui->lineEdit->setVisible(true);
    qDebug() << ui->lineEdit->isVisible();

}

Widget::~Widget()
{
    delete ui;
}

