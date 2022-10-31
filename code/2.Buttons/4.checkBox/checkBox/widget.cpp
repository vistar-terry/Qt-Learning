#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QButtonGroup>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QCheckBox* checkBox1 = new QCheckBox("CheckBox1", this);
    checkBox1->setGeometry(QRect(130, 160, 111, 22));

    QCheckBox* checkBox2 = new QCheckBox("CheckBox2", this);
    checkBox2->setGeometry(QRect(130, 190, 111, 22));
    checkBox2->setTristate(true);
    checkBox2->setCheckState(Qt::CheckState::Checked);

    connect(checkBox2, SIGNAL(stateChanged(int)),
            this, SLOT(checkBox2CallBack(int)));

    QButtonGroup* btnGroup = new QButtonGroup(this);
    btnGroup->addButton(ui->checkBox, 0);
    btnGroup->addButton(checkBox1, 1);
    btnGroup->addButton(checkBox2, 2);

    connect(btnGroup, SIGNAL(buttonClicked(QAbstractButton*)),
            this, SLOT(btnGroupCallBack(QAbstractButton*)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::checkBox2CallBack(int state)
{
    switch(state)
    {
    case Qt::CheckState::Checked:
        qDebug("checkBox2 is checked.");
        break;
    case Qt::CheckState::PartiallyChecked:
        qDebug("checkBox2 is partiallyChecked.");
        break;
    case Qt::CheckState::Unchecked:
        qDebug("checkBox2 is unchecked.");
        break;
    default:
        break;
    }
}

void Widget::btnGroupCallBack(QAbstractButton* btn)
{
    if (0 == btn->objectName().compare("checkBox") && btn->isChecked())
    {

    }
}

