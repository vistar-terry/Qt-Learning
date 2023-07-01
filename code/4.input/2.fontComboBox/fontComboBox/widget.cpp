#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    qDebug() << ui->fontComboBox->currentFont();
    ui->label->setText("编辑器");
    QFont labelFont("Suruma");
    labelFont.setPointSize(20);
    ui->label->setFont(labelFont);
    ui->fontComboBox->setCurrentFont(labelFont);

    QObject::connect(ui->fontComboBox, &QFontComboBox::currentFontChanged
                     , this, &Widget::onFontChanged);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::onFontChanged(QFont font)
{
    qDebug() << font;

    QFont lfont = ui->label->font();
    lfont.setFamily(font.family());
    ui->label->setFont(lfont);
}
