#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QAbstractButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void checkBox2CallBack(int state);
    void btnGroupCallBack(QAbstractButton* btn);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
