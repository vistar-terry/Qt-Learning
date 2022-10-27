#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>

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
    void btnClicked(int btn);
    void btnToggled(int btn, bool tog);

private:
    Ui::Widget *ui;
    QButtonGroup* btnGroup1 = new QButtonGroup(this);
};
#endif // WIDGET_H
