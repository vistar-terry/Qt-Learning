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
    setStyleSheet("QComboBox{combobox-popup:0;}");
//    ui->comboBox->setMaxCount(10);
//    ui->comboBox->setItemText(11, "fdsdsd");
//    qDebug() << ui->comboBox->itemText(11);

//    ui->comboBox_2->addItem("item1");
//    ui->comboBox_2->addItem("item2");
//    ui->comboBox_2->addItem("item3");
//    ui->comboBox_2->addItem("item4");
//    ui->comboBox_2->addItem("item4");
//    ui->comboBox_2->setEditable(true);
//    ui->comboBox_2->setDuplicatesEnabled(true);
    ui->comboBox_2->setPlaceholderText("占位符");
//    ui->comboBox_2->setCurrentIndex(-1);
    ui->comboBox_2->setFrame(false);
    qDebug() << ui->comboBox_2->sizeAdjustPolicy();
    qDebug() << ui->comboBox->hasFrame();
    ui->comboBox_2->setInsertPolicy(QComboBox::InsertAtTop);


}

Widget::~Widget()
{
    delete ui;
}

