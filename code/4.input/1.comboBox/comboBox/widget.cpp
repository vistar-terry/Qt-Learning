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
    ui->comboBox->addItem("item8");
    ui->comboBox->addItem("item9");
    ui->comboBox->addItem("item10");
    ui->comboBox->addItem("item11");

    qDebug() << "styles that returns for QStyle::SH_ComboBox_Popup: "
             << ui->comboBox->style()->styleHint(QStyle::SH_ComboBox_Popup);
    ui->comboBox->setMaxVisibleItems(5);
//    setStyleSheet("QComboBox{combobox-popup:0;}");
}

Widget::~Widget()
{
    delete ui;
}

