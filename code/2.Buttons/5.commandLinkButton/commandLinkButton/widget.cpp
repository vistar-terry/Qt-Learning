#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QCommandLinkButton* commandLinkButton1 = new QCommandLinkButton("CommandLinkButton1", this);
    commandLinkButton1->setGeometry(QRect(70, 120, 231, 51));

    QCommandLinkButton* commandLinkButton2 = new QCommandLinkButton("CommandLinkButton2", "CommandLinkButton2", this);
    commandLinkButton2->setGeometry(QRect(70, 170, 231, 51));
}

Widget::~Widget()
{
    delete ui;
}

