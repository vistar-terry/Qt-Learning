#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton *pushButton_1 = new QPushButton(ui->formLayoutWidget);
    QPushButton *pushButton_2 = new QPushButton(ui->formLayoutWidget);
    QPushButton *pushButton_3 = new QPushButton(ui->formLayoutWidget);

    pushButton_1->setText("QFormLayout::LabelRole");
    pushButton_2->setText("QFormLayout::FieldRole");
    pushButton_3->setText("QFormLayout::SpanningRole");

    ui->formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, pushButton_1);
    ui->formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, pushButton_2);
    ui->formLayout->setWidget(3, QFormLayout::ItemRole::SpanningRole, pushButton_3);

    ui->formLayout->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::ExpandingFieldsGrow);
    int row = 0;
    QFormLayout::ItemRole role = QFormLayout::ItemRole::SpanningRole;
    ui->formLayout->getItemPosition(0, &row, &role);
    qDebug("row: %d, role: %d", row, (int)role);

//    ui->formLayout->setHorizontalSpacing(30);
//    ui->formLayout->setVerticalSpacing(20);

//    qDebug("horizontalSpacing: %d\n", ui->formLayout->horizontalSpacing());
//    qDebug("verticalSpacing: %d\n", ui->formLayout->verticalSpacing());
//    qDebug("spacing: %d\n", ui->formLayout->spacing());
}

Widget::~Widget()
{
    delete ui;
}

