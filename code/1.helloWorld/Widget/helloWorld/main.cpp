#include "widget.h"

#include <QApplication>

// Qt应用程序入口
// main()函数主要执行一些初始化工作，然后将控制转交给Qt库
// 然后Qt库通过事件向程序告知用户行为
int main(int argc, char *argv[])
{
    // Qt应用程序类，实例化Qt应用程序对象a
    QApplication a(argc, argv);
    // 创建一个窗口对象
    Widget w;
    // 窗口部件默认不可见，要调用show()方法使它可见
    w.show();
    // 程序进入消息循环，即main()函数将控制权转交给Qt
    // 当应用程序退出的时候，exec()函数就会返回
    // 在exec()函数中，Qt接收处理用户和系统的事件并将它们传递给适当的窗口部件
    return a.exec();
}
