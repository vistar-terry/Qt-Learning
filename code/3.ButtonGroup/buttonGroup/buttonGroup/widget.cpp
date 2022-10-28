#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_btnGroup = new QButtonGroup(this);
    m_btnGroup->addButton(ui->radioButton, 0);
    m_btnGroup->addButton(ui->radioButton_1, 1);
    //
    m_btnGroup->setExclusive(false);
}

Widget::~Widget()
{
    delete ui;
}

