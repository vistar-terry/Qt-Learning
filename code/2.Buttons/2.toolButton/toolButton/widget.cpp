#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QToolButton* toolBtn = new QToolButton(this);
    toolBtn->setGeometry(QRect(230, 170, 50, 50));

    toolBtn->setIcon(QIcon(":/res/icon.png"));
    toolBtn->setIconSize(QSize(30, 30));
    toolBtn->setText("小飞机");

    toolBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    qDebug() << toolBtn->toolButtonStyle();

    toolBtn->setAutoRaise(true);



}

Widget::~Widget()
{
    delete ui;
}

