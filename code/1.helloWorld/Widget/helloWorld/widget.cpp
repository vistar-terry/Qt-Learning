#include "widget.h"
#include "ui_widget.h" // 窗口ui头文件，用于初始化ui及拖拽控件对象

// Widget构造函数
// 其中将ui初始化为Ui::Widget，该类位于ui_widget.h中
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    // 为Ui对象传入当前窗口对象指针
    // 即将当前窗口对象与其Ui绑定
    ui->setupUi(this);
}

// Widget析构函数
Widget::~Widget()
{
    delete ui;
}

