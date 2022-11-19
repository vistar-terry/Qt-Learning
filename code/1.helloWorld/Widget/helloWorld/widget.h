// 条件编译，防止头文件被重复引用
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

// QT的命名空间，其实就是C++的命名空间封装了一层，如下是该宏定义：
// # define QT_BEGIN_NAMESPACE namespace QT_NAMESPACE {
// # define QT_END_NAMESPACE }
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; } // 声明Ui命名空间下的Widget类
QT_END_NAMESPACE

// 定义Widget类
class Widget : public QWidget
{
    // Q_OBJECT宏用于提供Qt信号槽和元对象系统服务
    // 它必须限定为私有访问权限
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    // 创建Ui::Widget类型的指针，用于操作ui界面及其控件
    Ui::Widget *ui;
};
#endif // WIDGET_H
