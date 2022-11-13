#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QDialogButtonBox* buttonBox1 = new QDialogButtonBox(Qt::Orientation::Horizontal, this);
    buttonBox1->setGeometry(QRect(100, 130, 166, 25));
    buttonBox1->setStandardButtons(QDialogButtonBox::Yes|QDialogButtonBox::No);

    QDialogButtonBox* buttonBox2 = new QDialogButtonBox(QDialogButtonBox::Close|QDialogButtonBox::Open, this);
    buttonBox2->setGeometry(QRect(100, 170, 166, 25));

    QDialogButtonBox* buttonBox3 = new QDialogButtonBox(QDialogButtonBox::Apply|QDialogButtonBox::Help,
                                                        Qt::Orientation::Horizontal, this);
    buttonBox3->setGeometry(QRect(100, 210, 166, 25));

    qDebug() << buttonBox3->standardButtons();

}

Widget::~Widget()
{
    delete ui;
}

