#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton->setText("按钮");
    ui->pushButton->resize(80, 80);
    ui->pushButton->setStyleSheet("QPushButton {"
                                  "background-color: green;" // 按钮背景色
                                  "font: bold 20px;"	// 按钮字体
                                  "border-width: 1px;"	// 按钮边框线宽
                                  "border-radius: 40px;" // 按钮边框圆角半径
                                  "color: white;"      // 按钮文字颜色
                                  "}");

    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::btnClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::btnClicked()
{
    qDebug() << " button is clicked";
}
