#include "widget.h"
#include "qobjectdefs.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_btnGroup = new QButtonGroup(this);
    m_btnGroup->addButton(ui->radioButton, 0);
    m_btnGroup->addButton(ui->radioButton_1, 1);
    m_btnGroup->addButton(ui->radioButton_2, 2);

    // 为按钮设置id
//    m_btnGroup->setId(ui->radioButton_1, -1);

    // 获取按钮组中按钮互斥状态
    qDebug("exclusive-before: %s", m_btnGroup->exclusive()?"true":"false");
    // 设置按钮组中的按钮不互斥
    m_btnGroup->setExclusive(false);
    qDebug("exclusive-after: %s", m_btnGroup->exclusive()?"true":"false");

    // 获取组内所有按钮
    QList<QAbstractButton*> btnList = m_btnGroup->buttons();
    qDebug("number of btns: %lld", btnList.size());

    for (int i = 0; i < btnList.size(); i++)
    {
        qDebug("id: %s", btnList.at(i)->objectName().toStdString().c_str());
    }

//    // 删除按钮
//    m_btnGroup->removeButton(ui->radioButton);

//    // 删除按钮后再获取组内按钮
//    btnList = m_btnGroup->buttons();
//    qDebug("number of btns: %lld", btnList.size());

    // 获取按钮点击信号，并返回被点击的按钮对象指针
    connect(m_btnGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(btnClicked(QAbstractButton*)));    

//    connect(m_btnGroup, SIGNAL(idClicked(int)), this, SLOT(btnClicked(int)));
    connect(m_btnGroup, static_cast<void(QButtonGroup::*)(int)>(&QButtonGroup::idClicked),
            this, static_cast<void(Widget::*)(int)>(&Widget::btnClicked));// 用指针表示重载函数?????

    // 获取按钮状态改变信号
    connect(m_btnGroup, SIGNAL(idToggled(int,bool)), this, SLOT(btnToggled(int,bool)));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::btnClicked(QAbstractButton* btn)
{
    // 通过按钮对象指针索引按钮id
    qDebug("clickedBtnId: %d", m_btnGroup->id(btn));
}

void Widget::btnClicked(int btnId)
{
    switch (btnId)
    {
    case 0:
        qDebug("This is button zreo");
        break;
    case 1:
        qDebug("This is button one");
        break;
    case 2:
        qDebug("This is button two");
        break;
    default:
        break;
    }
}

void Widget::btnToggled(int id, bool state)
{
    qDebug("%d: %s", id, state?"true":"false");
}



