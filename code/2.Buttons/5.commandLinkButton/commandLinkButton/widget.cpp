#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QCommandLinkButton* commandLinkButton1 = new QCommandLinkButton("CommandLinkButton1", this);
    commandLinkButton1->setGeometry(QRect(70, 120, 631, 51));

    QCommandLinkButton* commandLinkButton2 = new QCommandLinkButton("CommandLinkButton2",
                                                                    "CommandLinkButton2", this);
    commandLinkButton2->setGeometry(QRect(70, 170, 631, 51));

    commandLinkButton2->setDescription("这里是描述文本");


    // 模仿Qt Creator历史项目的一个小例子
//    this->setStyleSheet("background-color: #1C1C1C;"
//                        "color: #7F7F7F");

    ui->commandLinkButton->setStyleSheet("QCommandLinkButton{background-color: #242424;}"
                                         "QCommandLinkButton:hover{background-color: #2B2A2A;}");
    ui->commandLinkButton->setIcon(QIcon(":/res/files.png"));
    ui->commandLinkButton->setText("qtTest");
    ui->commandLinkButton->setDescription("~/Desktop/Qt-Learning/code/0.qtTest/qtTest.pro");

    commandLinkButton1->setStyleSheet("QCommandLinkButton{background-color: #242424;}"
                                      "QCommandLinkButton:hover{background-color: #2B2A2A;}");
    commandLinkButton1->setStyleSheet("background-color: #242424;");
    commandLinkButton1->setIcon(QIcon(":/res/files.png"));
    commandLinkButton1->setText("checkBox");
    commandLinkButton1->setDescription("~/Desktop/Qt-Learning/code/2.Button/checkBox.pro");

    commandLinkButton2->setStyleSheet("background-color: #242424;");
    commandLinkButton2->setIcon(QIcon(":/res/files.png"));
    commandLinkButton2->setText("buttonGroup");
    commandLinkButton2->setDescription("~/Desktop/Qt-Learning/code/3.buttonGroup/buttonGroup.pro");

    QPushButton*  btn = new QPushButton(this);
    btn->setGeometry(QRect(70, 220, 631, 51));
    btn->setStyleSheet("QPushButton{background-color: #242424;}"
                       "QPushButton:hover{background-color: #2B2A2A;}");


}

Widget::~Widget()
{
    delete ui;
}

