/*
 * @Author: vistar 1055311345@qq.com
 * @Date: 2022-07-29 19:21:26
 * @LastEditors: vistar 1055311345@qq.com
 * @LastEditTime: 2022-09-12 18:46:48
 * @FilePath: /2.pushButton/pushButton/widget.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void btnClicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
