# 一、开始的开始

## 1. 安装软件

### 1.1 Qt 5.15之前版本的安装与卸载

> 适合5.15（不包括5.15）之前的版本，5.15（包括5.15）之后，官方不再提供单独安装包，需要在线安装。
> 安装方法见 [Qt 5.15 之后版本的在线安装与卸载](https://blog.csdn.net/maizousidemao/article/details/120613828)

> OS：Ubuntu 16.04
> （Windows系统除下载的安装包格式不同外，其他安装过程大同小异）

#### 1.1.1 下载安装包

点击下面链接下载 Qt Creator 安装包
[http://download.qt.io/archive/qt/](http://download.qt.io/archive/qt/)
包含各个版本的 Qt Creator 如下图：

![在这里插入图片描述](img/20200202231527315.png)

我选择了最新版本，点进去还有更详细版本，按需选择，根据系统选择安装包：

![在这里插入图片描述](img/20200202231747783.png)

由于是Linux系统，选择 qt-opensource-linux-x64-5.14.1.run 安装包，点击即可下载。（Windows 选择 .exe 格式的）
下载完成后得到安装包如下：
![在这里插入图片描述](img/20200202233707889.png)

#### 1.1.2 开始安装

**1. 运行安装程序**

有两种方法，一种通过命令行操作，一种通过界面操作（推荐界面操作）。
**a. 命令行操作**
在安装包所在目录打开 terminal，输入如下命令为安装包添加可执行权限（安装包的名称根据你自己的修改）：

```bash
chmod +x qt-opensource-linux-x64-5.14.1.run
```

然后再输入命令运行安装程序：

```bash
./qt-opensource-linux-x64-5.14.1.run
```

**b. 界面操作**

右键安装包，选属性，权限，勾选”允许作为程序执行文件“，然后关闭对话框。
(这一步相当于`a`中的第1条命令)

![在这里插入图片描述](img/20200202234308681.png)

然后双击安装包(这一步相当于`a`中的第2条命令)，即可打开安装程序，如下：

![在这里插入图片描述](img/20200202234639293.png)

**2. 安装配置**
**2.1** 点击 Next，如果你没有连接网络，会直接跳到 `2.3` 的欢迎界面，如果你连接了网络，会出现账户认证界面，如下：

![在这里插入图片描述](img/20200202235848478.png)

如果有账户，在 `Login` 填写，如果没有账户，在 `Sign-up` 申请，并勾选 “I accept the service terms.”，然后点 Next 即可创建账户，如下：

![在这里插入图片描述](img/20200203000235676.png)

**2.2** 创建成功如下图：

![在这里插入图片描述](img/20200203000513954.png)

勾选”I have read and approve the obligations of using Open Source Qt“，然后下一步。
**2.3** 欢迎界面，如下图，点击下一步

![在这里插入图片描述](img/20200203000739484.png)

**2.4** 指定 Qt 安装目录，默认就好（Windows不要安装在C盘），点击下一步

![在这里插入图片描述](img/20200203001332462.png)

**2.5** 选择要安装的组件
我只选择了第一个，其他按需要选择，点击下一步

![在这里插入图片描述](img/20200203001613935.png)

**2.6** 许可协议
选择我已阅读，点击下一步

![在这里插入图片描述](img/20200203001928307.png)

**2.7** 准备安装
点击安装，等待即可

![在这里插入图片描述](img/20200203002041307.png)

![在这里插入图片描述](img/20200203002149957.png)



#### 1.1.3 卸载

到 Qt Creator 的安装目录下，找到 MaintenanceTool，双击打开。

![在这里插入图片描述](img/20200203003024649.png)

出现”维护 Qt“对话框，点击 Next

![在这里插入图片描述](img/20200203003203683.png)

勾选 Uninstall only，点击 Next即可卸载。

![在这里插入图片描述](img/20200203003314782.png)





### 1.2 Qt 5.15 之后版本的在线安装与卸载

> 5.15（包括5.15）之后，官方不再提供单独安装包，需要在线安装。

#### 1.2.1 下载在线安装工具

点击下面链接下载 Qt 在线安装工具
[https://download.qt.io/official_releases/online_installers/](https://download.qt.io/official_releases/online_installers/)
包含各个版本的 Qt 在线安装工具如下图：
![在这里插入图片描述](img/b10a48b9389a4854b5fefd0bb103ac0b.png)

由于是Linux系统，选择 qt-unified-linux-x64-online.run 安装，点击即可下载。（Windows 选择 .exe 格式的)

#### 1.2.2 开始安装

**1. 运行安装程序**
有两种方法，一种通过命令行操作，一种通过界面操作。
**方法一： 命令行操作**
在安装工具所在目录打开 terminal，输入如下命令为其添加可执行权限（安装工具的名称根据你自己的修改）：

```bash
chmod +x qt-unified-linux-x64-online.run
```

然后再输入命令运行安装程序：

```bash
./qt-unified-linux-x64-online.run
```

**方法二： 界面操作**
右键安装工具，选属性，权限，勾选”允许作为程序执行文件“，然后关闭对话框。
(这一步相当于`方法一`中的第1条命令)

![在这里插入图片描述](img/ea7cb7fd4a5a414f8220056a5815b0b4.png)

然后双击安装工具(这一步相当于`方法一`中的第2条命令)，即可打开安装程序，如下：
如果有账户，填写然后点击Next。
如果没有账户，点击 Sign up 申请。

![在这里插入图片描述](img/d5bc6c228a9b4351b48ecfd11e49cef1.png)

输入邮箱并设置密码，勾选 `I accept the service terms.`，然后点 Next 即可创建账户

![在这里插入图片描述](img/38be698401634314bd5489e1e75aadef.png)

点击Next之后，界面如下：
勾选 `I have read and approve the obligations of using Open Source Qt`，
如果是公司用户，填写公司名称，如果是个人，勾选 `I am an individual person not using Qt for any company`，然后点击Next。

![在这里插入图片描述](img/8ae530bf8cc64de385743fe065491025.png)

接下来是欢迎界面，如下图，点击Next

![在这里插入图片描述](img/b14106e4a1294339a21e56ce494c4385.png)

是否加入用户提升计划，选第二个，Next

![在这里插入图片描述](img/663200e904b145be983c0d08b3743fac.png)

指定 Qt 安装目录，我在用户目录下新建了一个Software，安装在Software下的Qt目录里，
然后是安装方式，我选择了用户自定义安装，Next

![在这里插入图片描述](img/8e46b68b3f364f75b6e422c21d7ccc56.png)

然后是选择要安装的组件，我选择了我需要的，如果是新手入门，在默认的基础上加一个Qt组件就可以了，比如Qt 6.2.0，其他组件随着学习的深入可以后期添加，添加方法同上述步骤，Next

![在这里插入图片描述](img/9d19446bb23d4245b53dcc93fee50569.png)

license协议，勾选，Next

![在这里插入图片描述](img/83df4cb1b6864e6da9aa08fd472a5d36.png)

开始安装，点击Install

![在这里插入图片描述](img/85e4053276f042c593b0fb86f84e41bf.png)

安装过程，这个根据你选择的组件不同，时间不同，反正时间挺长的，去泡杯咖啡耐心等待。

![在这里插入图片描述](img/1b89140431d041cc9723eb3ca3cc9f7e.png)



#### 1.2.3 卸载

到 Qt Creator 的安装目录下，找到 MaintenanceTool，双击打开。

![在这里插入图片描述](img/3740a13f0c2c4a58934a7e9ff8274d38.png)

勾选左下角的Uninstall only，点击Next，然后点击Uninstall即可卸载。

![在这里插入图片描述](img/9026b625cb1f4f96af2409713a71caaa.png)

卸载过程：

![在这里插入图片描述](img/5ffc3b1d930d4f69b286fb61ab97d3aa.png)

进度条结束即卸载完成。



## 2. 新建工程-HelloWorld

万事开头 hello world，Qt 的 hello world 就是创建一个项目并运行显示窗口。

当前使用 Qt Creator 4.11.0，新版本可能界面不一样，但流程大同小异。

打开 Qt Creator，默认界面如下：
![20200203095004937](img/20200203095004937.png)

点击 Projects 中的 New 新建一个项目：

![20200203095004938](img/20200203095004938.png)



这里选择项目模板，左边一栏第一个是 Application（应用），中间一栏是对 Application 项目的细分，右边是各项目模板的介绍，可以根据介绍具体了解。
我们选择 Application 中的 Qt Widgets Application，创建一个桌面窗口应用，然后点击 右下角的 `Choose...`

![20200203095956551](img/20200203095956551.png)


这里设置项目名称和路径，有两点需要注意：

1. **项目名称不能有空格和中文**
   	01 Qt第一天  ——>  错误的，有空格和中文
   	01_Qt_the First Day  ——>  错误的，有空格
   	01_HelloWorld  ——>  正确的
2. **路径不能有中文**
   	/home/vistar/桌面/Qt ——> 错误的，有中文
   	/home/vistar/desktop/Qt ——> 正确的
   	/home/vistar/desktop/Qt/1. helloWorld ——> 正确的

然后下一步：

![20200203101001627](img/20200203101001627.png)

选择 build system，有qmake、CMake 和 Qbs 三个选项。
CMake 很常用，功能也很强大，许多知名的项目都是用它，比如 OpenCV 和 VTK，但它的语法繁杂。
qmake 是针对辅助 Qt 开发的，但也可以在非 Qt 项目使用，特点是语法简单明了，但功能也相对简单。
Qbs 号称下一代构建工具，也有好多人力捧 Qbs，没用过。
这里选择默认的 qmake，下一步：

![20200203111412932](img/20200203111412932.png)

这里设置类信息，首先Class name是自定义的，而且下面的Header file、Source file和From file的名称会根据自定义的Class name自动填充。
然后是Base class（基类），有三个基类供选择，QMainWindow、QWidget 和 QDialog，QMainWindow 和 QDialog 是 QWidget 的两个派生类，可以理解为都是窗口，但窗口样式不同。


QMainWindow 是主窗口，可以理解为应用程序打开后的第一个窗口（主界面），类似这样：

![20200203113231552](img/20200203113231552.png)

QWidget 是空窗口，类似这样：

![20200203112218288](img/20200203112218288.png)

QDialog 是对话框窗口，没有最小化按钮，类似这样：

![20200203120326467](img/20200203120326467.png)

这里选择 QWidget，其中 Generate form 复选框是否使用UI设计功能，如果使用，可以通过拖拽控件来设计UI界面，如果不选，则使用纯代码编辑界面，初学建议选择，下一步。

![20200203120932557](img/20200203120932557.png)

这里可以为你的项目创建一个翻译文件，将你的应用界面翻译成其他语言，初学先不管，默认none就好，下一步：

![20200203121708549](img/20200203121708549.png)

选择编译套件，如有多个，按你需要的选择，下一步：

![20200203121834752](img/20200203121834752.png)

添加版本控制系统，如不使用，默认 None 即可，同时汇总了要创建的文件和路径，可以检查是否有误，点击完成。

进入到代码编辑界面：

![20200203122300725](img/20200203122300725.png)

点击左下角的绿色小三角（或使用快捷键Ctrl + R)编译运行程序。
出现空白窗口，Qt Hello World 就完成了。



## 3. 认识工程与软件

### 3.1 认识工程

以`Widget`窗口部件项目为例，新建的工程目录有如下几个文件：

![20220720223533](img/20220720223533.png)

QtCreator软件将他们做了如下分组，包含三个文件夹和一个.pro文件：

![20220720222519](img/20220720222519.png)



他们的作用分别为：

-   .pro文件：项目文件，定义项目相关信息，是`qmake`用来生成`makefile`文件的中间文件；
-   .pro.user文件：定义与用户相关的项目信息；
-   /Headers文件夹：存放头文件；
-   /Sources文件夹：存放源文件；
-   /Forms文件夹：存放ui文件；



#### 3.1.1 .pro文件内容解释

新建简单Qt工程，默认生成的 .pro文件内容如下，解释见注释：

```cmake
# [QT+= ]语法，定义该工程包含的Qt模块
QT       += core gui
# 由于Qt5将widgets模块从gui模块独立出来了，所以定义Qt主版本大于4就要包含widgets模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# 编译宏，使用c++17编译
CONFIG += c++17
# 也可以 CONFIG -=
# CONFIG -= debug 不编译debug类型

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# 需要编译的源文件路径（项目根目录的相对路径）
SOURCES += \
    main.cpp \
    widget.cpp

# 需要编译的头文件路径（项目根目录的相对路径）
HEADERS += \
    widget.h

# 需要编译的ui文件路径（项目根目录的相对路径）
FORMS += \
    widget.ui

# 只知道是设置目标可以执行文件路径的，具体语法看不懂，如果你知道欢迎评论区留言
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
```



除工程默认的一些字段，.pro文件还有一些其他字段：

```cmake
# 目标可执行文件的名称，不指定默认为工程名
TARGET = exe_name

# 目标可执行文件的存放目录，不指定默认为realse目录
# 几个指定目录的符号：
# 宏 $$PWD 代表当前目录和 ./ 等效
# ../ 代表上一级目录
DESTDIR = exe_dir

# 编译宏开关，根据不同宏作不同的编译
DEFINES += defines

# obj文件目录，即 .o 文件
OBJECTS_DIR = obj_dir

# 资源文件路径，包括图片、音频等（项目根目录的相对路径）
RESOURCES += res.rc

# 链接库路径（项目根目录的相对路径）
DEPENDPATH += depend_dir

# 链接库文件（项目根目录的相对路径）
LIBS += -Llib_name
# 也可以直接写带路径的链接库文件
LIBS += -Llib_dir_name

# 引用库头文件路径（项目根目录的相对路径）
INCLUDES += include_dir

# 项目使用的模板类型
TEMPLATE = app
TEMPLATE = lib
```



#### 3.1.2 main文件内容解释

以`Widget`窗口部件项目为例，解释一下main函数内容：

```c++
#include "widget.h"

#include <QApplication>

// Qt应用程序入口
// main()函数主要执行一些初始化工作，然后将控制转交给Qt库
// 然后Qt库通过事件向程序告知用户行为
int main(int argc, char *argv[])
{
    // Qt应用程序类，实例化Qt应用程序对象a
    QApplication a(argc, argv);
    // 创建一个窗口对象，这里调到widget.cpp中
    Widget w;
    // 窗口部件默认不可见，要调用show()方法使它可见
    w.show();
    // 程序进入消息循环，即main()函数将控制权转交给Qt
    // 当应用程序退出的时候，exec()函数就会返回
    // 在exec()函数中，Qt接收处理用户和系统的事件并将它们传递给适当的窗口部件
    return a.exec();
}
```



#### 3.1.3 widget.cpp/widget.h文件内容解释

在main函数中实例化了`Widget`窗口对象，这里介绍一下`widget.cpp`和`widget.h`中的代码：

widget.cpp

```c++
#include "widget.h"
#include "ui_widget.h" // 窗口ui头文件，用于初始化ui及拖拽控件对象

// Widget构造函数
// 其中将ui初始化为Ui::Widget，该类位于ui_widget.h中，用于初始化ui及拖拽控件对象
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    // 为Ui对象传入当前窗口对象指针
    // 即将当前窗口对象与其Ui绑定
    ui->setupUi(this);
}

// Widget析构函数
Widget::~Widget()
{
    delete ui;
}
```



widget.h

```c++
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
```



#### 3.1.4 ui_widget.h文件内容解释

该文件初始化了ui及拖拽控件对象，由`widget.ui`文件生成，所以不能手动修改，即使修改也会在下次编译被覆盖。

```c++
#pragma once // 避免头文件被重复引用
// Qt头部声明
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

// 该类用于初始化ui及拖拽控件对象
class Ui_Widget
{
public:

    // 该函数用于初始化窗口及创建窗口中的控件对象
    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);

        retranslateUi(Widget);

        // Qt元对象系统生成信号与槽的连接
        // 递归搜索给定对象的所有子对象，并将来自这些子对象的匹配信号连接到对象插槽
        // 所连接的槽函数要按特定形式的定义，如下：
        // void on_<object name>_<signal name>(<signal parameters>);
        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    // 动态翻译Ui界面的文字，用于国际化
    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    // 声明Ui对应的类继承于该Ui类
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE
```



#### 3.1.5 widget.ui文件内容解释

该文件为xml格式，类似于HTML，用于表示ui界面，Qt根据该文件生成ui_widget.h文件，Qt Creator可将其解析为图形界面，文件内容如下：

```xml
<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>Widget</class>
 <widget class="QWidget" name="Widget">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>800</width>
    <height>600</height>
   </rect>
  </property>
  <property name="windowTitle">
   <string>Widget</string>
  </property>
 </widget>
 <resources/>
 <connections/>
</ui>
```

对应的图形界面如下：

![20200203112218288](img/20200203112218288.png)



添加一个按钮，文件内容如下：

```xml
<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>Widget</class>
 <widget class="QWidget" name="Widget">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>800</width>
    <height>600</height>
   </rect>
  </property>
  <property name="windowTitle">
   <string>Widget</string>
  </property>
  <widget class="QPushButton" name="pushButton">
   <property name="geometry">
    <rect>
     <x>140</x>
     <y>140</y>
     <width>231</width>
     <height>71</height>
    </rect>
   </property>
   <property name="styleSheet">
    <string notr="true"/>
   </property>
   <property name="text">
    <string>PushButton</string>
   </property>
  </widget>
 </widget>
 <resources/>
 <connections/>
</ui>

```

对应的图形界面如下：

![20221120235105](img/20221120235105.png)





#### 3.1.6 资源文件介绍与使用

Qt工程分组中，除了`Headers`、`Sources`、`Forms`外，还有一个文件夹`Resources`，只有当工程中有图片、音频等资源文件时才会用到。

首先将资源文件存放到工程目录下的文件夹中，然后添加`.qrc`文件，方法如下：

在工程目录右键-->选择`Add New` 

![2022-09-24-15-49-24](img/2022-09-24-15-49-24.png)

选择Qt-->Qt Resource File，然后点击Choose...

![2022-09-24-15-54-59](img/2022-09-24-15-54-59.png)

然后可以自定义文件名和路径，点击Next>

![2022-09-24-15-57-06](img/2022-09-24-15-57-06.png)

然后可以选择要添加到的工程和使用的版本控制工具，这里默认，然后点击Finish

![2022-09-24-15-59-18](img/2022-09-24-15-59-18.png)

然后，工程目录中就会出现`Resources`目录和`res.qrc`文件，点击`Add Prefix`添加前缀

![2022-09-24-16-08-03](img/2022-09-24-16-08-03.png)

Qt通过前缀对资源文件分类，如有需要用户可以自定义前缀名称，如不需要分类可以修改前缀为`/`，然后点击`Add Files`添加资源文件

![2022-09-24-16-14-03](img/2022-09-24-16-14-03.png)

找到工程目录下的资源文件位置，全选导入，再构建一下（点右下角那个小锤子），就可以在`Resources`目录下看到这些文件了，如下图：

![2022-09-24-17-04-32](img/2022-09-24-17-04-32.png)

其中`.qrc`文件存储的是资源文件的相对路径，`.qrc`文件格式如下：

```xml
<RCC>
    <qresource prefix="/">
        <file>res/742c.png</file>
        <file>res/20220918143827.png</file>
        <file>res/Einstein.png</file>
        <file>res/icon.png</file>
    </qresource>
</RCC>
```

使用资源文件时输入的路径格式为`“:/res/icon.png”`，其中`:`后面是前缀+文件相对路径，比如为按钮添加背景图片：

```c++
toolBtn->setIcon(QIcon(":/res/icon.png"));
```

如果需要对资源文件进行分类，上面点击`Add Prefix`添加前缀那一步，可以填写自定义的前缀名称，点击一次`Add Prefix`添加一个前缀（分类），然后把对应的文件添加进去，再构建一下就可以了。

![2022-09-24-17-17-53](img/2022-09-24-17-17-53.png)

其中`.qrc`文件内容如下：

```xml
<RCC>
    <qresource prefix="/first">
        <file>res/742c.png</file>
        <file>res/20220918143827.png</file>
    </qresource>
    <qresource prefix="/second">
        <file>res/Einstein.png</file>
        <file>res/icon.png</file>
    </qresource>
</RCC>
```

这时`icon.png`文件的路径就变为`:/second/res/icon.png`了。



**小建议**

获取文件路径，建议在`Resources`目录下对应的资源文件上右键，选择`Copy Path`复制：

![2022-09-24-17-23-28](img/2022-09-24-17-23-28.png)



### 3.2 认识Qt Creator

打开Qt Creator默认界面如下

![1](img/1.png)

其中，

1.   Qt Creator工作模式选择；
2.   构建套件选择；
3.   构建并运行程序；
4.   调试程序；
5.   构建程序；
6.   搜索项目、文件、类、函数、文档和文件系统，输入数字n，可以跳转到当前文件的第n行；
7.   任务栏，显示运行、调试或构建程序时的输出。



#### 3.2.1 模式选择

![qtcreator-mode-selector](img/qtcreator-mode-selector.png)

从上往下各模式依次为：欢迎模式、编辑模式、设计模式、调试模式、项目模式、帮助模式，第一次打开Qt Creator默认选择欢迎模式，欢迎模式中默认选择项目（Projects）。



##### 欢迎模式

![2](img/2.png)

其中，

1.   创建新项目，创建流程介绍见：[Qt 学习(二) —— 创建项目及注意事项](https://blog.csdn.net/maizousidemao/article/details/104152353)
2.   打开已有项目
3.   帮助，跳转到帮助模式
4.   项目，即右侧当前页5、6
5.   最近打开的会话
6.   最近打开的项目
7.   官方示例项目
8.   官方教程，需要YouTube播放
9.   Qt商店，可以安装Qt扩展，有些需要付费
10.   下载Qt安装程序
11.   创建或管理Qt账户
12.   Qt在线社区
13.   Qt官方博客
14.   用户手册，跳转到帮助模式



##### 编辑模式

![3](img/3.png)

其中，

1.   显示内容，有如下选择：

![20220724000625](img/20220724000625.png)

分别为：项目(Project)、打开的文件(Open Documents)、书签(Bookmarks)、文件系统(File System)、类视图(Class View)、Git分支(Git Branches)、当前文件的函数概要(Outline)、测试(Tests)、类层次结构(Type Hierarchy)、头文件层次结构(Include Hierarchy)

2.   对项目树的显示作进一步设置，可以打开、关闭或简化显示的项目文件树。
3.   是否与右侧编辑器同步选择文件。
4.   添加更多显示栏，用于显示1中的内容。
5.   关闭当前显示栏。
6.   显示当前已打开的文件列表。
7.   可快速将光标跳转到当前文件的函数或变量的行首，右键可以选择是否按字母排序。
8.   设置当前文件的换行符。
9.   设置文件静态检查。
10.   执行文件静态检查。
11.   显示光标所在行列位置。
12.   编辑器分栏。
13.   更多显示栏，同1。
14.   显示编译文件时的编译警告或错误。
15.   清空错误和警告。
16.   选择编译警告和错误。
17.   关闭显示编译警告。



##### 设计模式

如果没有打开ui文件，设计模式默认不能用，打开ui文件，界面会自动跳转到设计模式：

![Screenshot from 2022-07-23 21-39-42](img/Screenshot%20from%202022-07-23%2021-39-42.png)

其中，

1.   控件区：包含一些常用的ui控件；
2.   编辑区：用于设计ui界面，可以将1中的控件拖到此区域；
3.   对象查看区：可以查看控件对象的父子关系及一些简单信息；
4.   动作、信号、槽编译区：可以编辑指定动作及相应控件的信号与槽；
5.   控件属性编译区：编辑指定控件的属性，会按继承关系展示所选控件的各属性；



##### 调试模式

![Screenshot from 2022-07-24 16-45-36](img/Screenshot%20from%202022-07-24%2016-45-36-16586524434452.png)

调试代码运行过程中的数据等，细节待补。



##### 项目模式

![Screenshot from 2022-07-24 16-54-07](img/Screenshot%20from%202022-07-24%2016-54-07.png)

配置项目相关的构建运行、编辑器、代码风格、依赖关系等。



##### 帮助模式

![Screenshot from 2022-07-24 16-59-38](img/Screenshot%20from%202022-07-24%2016-59-38.png)

在右上角的显示内容里默认显示目录(Contents)，还可以选择书签(Bookmarks)、索引(Index)、搜索(Search)等。

如果选择搜索，可以查找Qt相关函数、类、枚举等的解释。



#### 3.2.2 构建套件选择

![20220723222807](img/20220723222807.png)

包括Debug、Profile、Release，他们的区别如下：

|  配置   |                    描述                    |
| :-----: | :----------------------------------------: |
|  Debug  |         带调试信息，编译时不做优化         |
| Profile |        带调试信息，编译时做一定优化        |
| Release | 不带调试信息，根据优化选项做不同程度的优化 |



### 3.3 qmake生成makefile过程





## 4. Qt模块与控件

Qt由许多模块组成，分别支持不同领域的功能，主要分为 `Essentials` 和 `Add-On`。

`Qt Essential` 是基本模块，它们可以在所有受支持的开发平台和经过测试的目标平台上使用。基本模块是通用的，适用于大多数Qt应用程序。

`Qt Add-On` 是附加模块/扩展模块，用于特殊目的开发。这些模块可能仅在某些开发平台上可用。许多附加模块要么功能完整，存在是为了向后兼容，要么仅适用于某些平台。每个附加模块分别指定其兼容性。

Qt支持拖拽控件创建UI界面，每个控件都对应的类，主要是`Qt Widgets`模块的图形界面类。

### 4.1 Qt模块

#### 4.1.1 Qt基本模块

Qt 基本模块如下表：

|       模块        |                             描述                             |
| :---------------: | :----------------------------------------------------------: |
|      Qt Core      | 所有基于Qt的应用程序的基础，其他模块使用的核心非图形类。<br>提供信号与槽的对象通信机制、并发和多线程、容器/事件系统、插件和I/O设施。 |
|     Qt D-Bus      | D总线协议上进程间通信的类。<br>是一种进程间通信(IPC)和远程过程调用(RPC)机制，一般用于用于多对多通信。 |
|      Qt GUI       | 图形用户界面（GUI）组件的基类。<br>包括与窗⼝系统的集成、事件处理、OpenGL和OpenGL ES集成、2D图像、字体、拖放等。<br>这些类⼀般在Qt⽤户界⾯类内部使⽤，当然也可以⽤于访问底层的OpenGL ES 图像API。<br>Qt Gui模块提供的是所有图形⽤户界⾯程序都需要的通⽤功能。 |
|    Qt Network     |      提供跨平台的⽹络功能，使网络编程更容易和更可移植。      |
|      Qt QML       |                  用于QML和JavaScript语言。                   |
|     Qt Quick      | ⼀种基于 Qt 的⾼度动画的⽤户界⾯，适合于移动平台开发，用于构建具有自定义用户界面的高度动态应用程序的声明性框架。 |
| Qt Quick Controls | 提供轻量级QML类型，用于为桌面、嵌入式和移动设备创建高性能的用户界面。这些类型采用简单的样式体系结构，非常有效。 |
| Qt Quick Dialogs  |     用于从Qt快速应用程序创建系统对话框并与之交互的类型。     |
| Qt Quick Layouts  |             用于在 Qt Quick 2 中安排项目的布局。             |
|   Qt Quick Test   | QML应用程序的单元测试框架，其中测试用例以JavaScript函数的形式编写。<br>注：二进制兼容性保证不适用于 Qt 快速测试。但是，它将保持源代码兼容。 |
|      Qt Test      | 用于单元测试 Qt 应用程序和库的类。<br/>注意：二进制兼容性保证不适用于 Qt 测试。 但是，它将保持源兼容。 |
|    Qt Widgets     |                 扩展Qt GUI模块的C++窗口类 。                 |



#### 4.1.2 Qt扩展模块

Qt扩展模块如下表：

|       模块        | 开发平台 |                    目标支持平台                    |                             描述                             |
| :---------------: | :------: | :------------------------------------------------: | :----------------------------------------------------------: |
|     Active Qt     | Windows  |                      Windows                       |                 用于ActiveX和COM应用程序的类                 |
|   Qt Bluetooth    |   All    | Android, iOS, Linux, Boot to Qt, macOS and Windows |                    提供对蓝牙硬件的访问。                    |
|       Qt 3D       |   All    |                        All                         |            支持2D和3D渲染的近实时仿真系统的功能。            |
|      Qt CoAP      |   All    |                        All                         |                实现RFC 7252定义的CoAP客户端。                |
|   Qt Concurrent   |   All    |                        All                         |         用于编写多线程程序而不使用低级线程原语的类。         |
|      Qt Help      |   All    |                        All                         |               用于将文档集成到应用程序中的类。               |
| Qt Image Formats  |   All    |                        All                         |        用于其他图像格式的插件：TIFF、MNG、TGA、WBMP。        |
|     Qt OpenGL     |   All    |                        All                         | 使OpenGL在Qt应用程序中易于使用的C++类。一个单独的Qt OpenGL Widgets C++类，提供了一个用于渲染OpenGL图形的窗口小部件。 |
|   Qt Multimedia   |   All    |            All (except QNX, INTEGRITY)             | 一组丰富的QML类型和C++类，用于处理多媒体内容。还包括处理摄像头访问的API。 |
| Qt Print Support  |   All    |                        All                         |                  使打印更容易和更便携的类。                  |
| Qt Quick Widgets  |   All    |                        All                         |             提供用于显示Qt快速用户界面的C++类。              |
| Qt Remote Objects |   All    |                        All                         | 提供了一种易于使用的机制，用于在进程或设备之间共享QObject的API（属性/信号/插槽）。 |
|     Qt OPC UA     |   All    |           All (except QNX, WebAssembly)            |              工业应用中数据建模和数据交换协议。              |
|     Qt SCXML      |   All    |                        All                         | 提供用于从SCXML文件创建状态机并将其嵌入应用程序的类和工具。  |
|    Qt Sensors     |   All    |             Android, iOS, and Windows              |                   提供对传感器硬件的访问。                   |
|   Qt Serial Bus   |   All    |        Linux, Boot to Qt, macOS and Windows        | 提供对串行工业总线接口的访问。目前，该模块仅支持CAN总线和Modbus协议。 |
|  Qt Serial Port   |   All    |        Linux, Boot to Qt, macOS and Windows        |              提供与硬件和虚拟串行端口交互的类。              |
|      Qt SQL       |   All    |                        All                         |                 使用SQL进行数据库集成的类。                  |
| Qt State Machine  |   All    |                        All                         |                提供用于创建和执行状态图的类。                |
|      Qt SVG       |   All    |                        All                         | 用于显示SVG文件内容的类。支持SVG1.2标准的一个子集。一个单独的Qt SVG Widgets C++类库，支持在Widgets UI中显示SVG文件。 |
|    Qt UI Tools    |   All    |                        All                         | 用于在运行时动态加载QtDesigner中创建的基于QWidget的表单的类。 |
|   Qt WebChannel   |   All    |                        All                         | 提供对来自HTML客户端的QObject或QML对象的访问，以实现Qt应用程序与HTML/JavaScript客户端的无缝集成。 |
|   Qt WebEngine    |   All    |             Windows, Linux, and macOS              | 用于在使用Chromium浏览器项目的应用程序中嵌入web内容的类和函数。 |
|   Qt WebSockets   |   All    |                        All                         |              提供符合RFC 6455的WebSocket通信。               |
|    Qt WebView     |   All    |               具有本地web引擎的平台                | 通过使用平台原生的API在QML应用程序中显示web内容，而无需包含完整的web浏览器堆栈。 |
|      Qt XML       |   All    |                        All                         |             在文档对象模型（DOM）API中处理XML。              |
|  Qt Positioning   |   All    |       Android, iOS, macOS, Linux and Windows       |            提供位置、卫星信息和区域监测类的访问。            |
|      Qt NFC       |   All    |                  Android and iOS                   |              提供对近场通信（NFC）硬件的访问。               |

以下扩展模块需要在商业许可证或GNU通用公共许可证v3下使用。

|           模块           | 开发平台 |                    目标支持平台                    |                             描述                             |
| :----------------------: | :------: | :------------------------------------------------: | :----------------------------------------------------------: |
|        Qt Charts         |   All    |                        All                         |       由静态或动态数据模型驱动的用于显示图表的UI组件。       |
|  Qt Data Visualization   |   All    |                        All                         |               用于创建三维数据可视化的UI组件。               |
|   Qt Lottie Animation    |   All    |                        All                         | 用于渲染由Adobe After Effects的Bodymovin插件以JSON格式导出的图形和动画。 |
|         Qt MQTT          |   All    |                        All                         |                   提供MQTT协议规范的实现。                   |
| Qt Network Authorization |   All    |                        All                         |             为在线服务提供基于OAuth的授权支持。              |
|   Qt Virtual Keyboard    |   All    | Linux and Windows desktop, and Boot to Qt targets. | 用于实现不同输入方法以及QML虚拟键盘的框架。支持本地化键盘布局和自定义视觉主题。 |
|       Qt Quick 3D        |   All    |                        All                         |          提供基于Qt Quick创建3D内容或UI的高级API。           |
|    Qt Quick Timeline     |   All    |                        All                         |                启用基于关键帧的动画和参数化。                |
|     Qt Shader Tools      |   All    |                        All                         | 为跨平台Qt着色器管道提供工具。这些支持处理图形和计算着色器，使其可用于Qt Quick和Qt生态系统中的其他组件。 |
|  Qt Wayland Compositor   |   All    |           Linux and Boot to Qt targets.            |                提供开发Wayland合成器的框架。                 |

以下扩展模块仍在开发中：

|  模块  | 开发平台 |        目标支持平台        |            描述             |
| :----: | :------: | :------------------------: | :-------------------------: |
| Qt PDF |   All    | Windows, Linux, and macOS. | 用于显示PDF文档的类和函数。 |



### 4.2 Qt控件

像模块一样，控件根据功能分为8组，如下：

<img src="img/2022-07-27_22-08.png" alt="2022-07-27_22-08" style="zoom:150%;" />

每个控件组对应不同的功能，分别为：

|           控件组           |              描述              |
| :------------------------: | :----------------------------: |
|          Layouts           |   布局：控制控件在窗口的布局   |
|          Spacers           | 间隔：辅助控制控件在窗口的布局 |
|          Buttons           |       按钮：按钮相关控件       |
| Item Views（Model-Based）  |            项目视图            |
| Item Widgets（Item-Based） |            项目组件            |
|         Containers         |    容器：可以存放控件的控件    |
|       Input Widgets        |     输入组件：输入相关控件     |
|      Display Widgets       |     显示组件：显示相关控件     |



# 二、Qt Widgets模块（控件类）

## 1. 按钮组件(Buttons)

![Battons](img/Battons.png)



|        控件         |     描述     |
| :-----------------: | :----------: |
|     Push Button     |   普通按钮   |
|     Tool Button     |   工具按钮   |
|    Radio Button     |    单选框    |
|      Check Box      |    复选框    |
| Command Link Button | 命令连接按钮 |
|  Dialog Button Box  |  对话框按钮  |



按钮各控件类的继承关系如下：

<img src="img/button.png" alt="button" style="zoom: 50%;" />



### 1.1 QPushButton

QPushButton按钮，是Qt常用的控件之一，提供普通的按钮功能。

通过信号槽机制接收触发信号并执行对应动作。

#### 1.1.1 创建QPushButton

它有三个构造函数：

```c++
// 空对象
explicit QPushButton(QWidget *parent = nullptr);
// 指定QPushButton显示的文字
explicit QPushButton(const QString &text, QWidget *parent = nullptr);
// 指定QPushButton背景图片和显示的文字
QPushButton(const QIcon& icon, const QString &text, QWidget *parent = nullptr);
```

最常用的创建方法为：`QPushButton(QWidget *parent = nullptr);` 并且把它的父对象指定为它所在的窗口对象。



#### 1.1.2 信号

它通过信号来接收特定的操作，信号包括：

| 信号                                | 操作           | 描述                                     |
| ----------------------------------- | -------------- | ---------------------------------------- |
| void pressed();                     | 按下按钮       | 按钮被按下会发出此信号                   |
| void released();                    | 释放按钮       | 按钮被释放（松开）会发出此信号           |
| void clicked(bool checked = false); | 点击按钮       | 按钮被点击（即按下后再释放）会发出此信号 |
| void toggled(bool checked);         | 按钮状态被切换 | 按钮状态被切换时会发出此信号             |

这些信号在`QAbstractButton`中定义，也就是说继承于`QAbstractButton`的按钮类都可以使用这些信号。

由于`QPushButton`使用最多的操作是点击触发某个行为，所以它常用的信号为`pressed`和`released`， 当然也可以使用其他信号实现一些特殊功能。



#### 1.1.3 使用

最常用的点击触发某个行为：

创建一个widget空窗口项目，

首先，切换到ui设计界面，拖动添加一个`Push Button`按钮，

![2022-09-12-21-58-16](img/2022-09-12-21-58-16.png)

可以在右侧修改按钮对象的名称，也可以使用默认的`pushButton`。

然后，回到widget.cpp文件，连接信号与槽，并实现槽函数(点击按钮要实现的动作)。

![2022-09-18-17-04-11](img/2022-09-18-17-04-11.png)

其中，`connect(ui->pushButton, &QPushButton::clicked, this, &Widget::btnClicked);`用于连接按钮信号与其槽函数（关于connect见[Qt 学习(四) —— 信号和槽](https://blog.csdn.net/maizousidemao/article/details/104199773)）

`void Widget::btnClicked()`是其槽函数，按键`clicked`信号触发的动作实现在这个函数里。

这里点击按钮后会在`QtCreator`的`Application OutPut`窗口打印`button is clicked`，如下图：

![2022-09-18-17-17-02](img/2022-09-18-17-17-02.png)

以上是pushbutton按钮的使用方法，可以把信号换成`pressed`或`released`试一下。



#### 1.1.4 按钮样式

##### 1.按钮文字

通常我们通过按钮上的文字说明按钮的功能，可以使用`setText()`函数设置按钮文字。

```c++
ui->pushButton->setText("按钮");
```

如果想获取一个按钮的文字，可以使用`text()`函数：

```c++
QString btnText = ui->pushButton->text();
```

##### 2.按钮大小

使用`setGeometry`函数可以设置按钮的大小及位置，`setGeometry`接收一个`QRect`矩形对象，用以指定按钮大小及位置，如下：

```c++
pushButton->setGeometry(QRect(140, 140, 231, 71));
```

其中前两个参数指定位置（x, y），后两个参数指定大小（height, width）。

![2022-09-21-22-34-13](img/2022-09-21-22-34-13.png)

另外还可以使用`resize`函数单独设置按钮的大小：

```c++
ui->pushButton->resize(80, 80);
```

##### 3.其他样式

其他样式主要使用`void setStyleSheet(const QString& styleSheet);` 函数设置样式表。

该函数传入`QString`类型的参数，是遵循 `qss` 语法的编码字符串。

`qss` 语法和 `css` 语法基本相同。

比如基本常用的设置按钮的背景色、按钮字体、矩形按钮圆角等。

```c++
ui->pushButton->setStyleSheet("QPushButton {"
                              "background-color: green;" // 按钮背景色
                              "font: bold 20px;"	// 按钮字体
                              "border-width: 1px;"	// 按钮边框线宽
                              "border-radius: 16px;" // 按钮边框圆角半径
                              "color: white;" 	// 按钮文字颜色
                              "}");
```

效果如下：

![2022-09-21-21-21-03](img/2022-09-21-21-21-03.png)

合理配合大小与圆角的设置，还可以画出圆形按钮：

```c++
ui->pushButton->resize(80, 80);
ui->pushButton->setStyleSheet("QPushButton {"
                              "background-color: green;" // 按钮背景色
                              "font: bold 20px;"	// 按钮字体
                              "border-width: 1px;"	// 按钮边框线宽
                              "border-radius: 40px;" // 按钮边框圆角半径
                              "color: white;"      // 按钮文字颜色
                              "}");
```

效果如下：

![2022-09-21-22-40-31](img/2022-09-21-22-40-31.png)



### 1.2 QToolButton

QToolButton按钮常用作工具栏的快捷工具，

比如Qt Creator右下角的构建套件选择器，就是QToolButton：

![2022-09-24-09-15-02](img/2022-09-24-09-15-02.png)

还有PhotoShop中工具栏的一些快捷工具，也是QToolButton：

![2022-09-24-09-28-02](img/2022-09-24-09-28-02.png)

更常见的office word中，也普遍使用QToolButton：

![2022-09-24-09-43-02](img/2022-09-24-09-43-02.png)

（注：以上例子不一定使用Qt开发，只是举例按钮符合QToolButton的特征。）



可以发现QToolButton常用的是显示图片，而不是像QPushButton一样显示文字；

另外有些QToolButton旁边有小箭头，点击会弹出一个子列表显示更多的功能；

还有些QToolButton的文字在图标下方，不像QPushButton文字在图标右方；

这些都是QToolButton特性，接下来逐一介绍。



#### 1.2.1 创建QToolButton

和QPushButton不同，QToolButton只有一个构造函数

```cpp
explicit QToolButton(QWidget *parent = nullptr);
```

当然通常也是把它的父对象指定为它所在的窗口对象。

可以使用代码创建，也可以拖拽控件创建，拖拽控件会自动生成代码。

这里我们看一下究竟生成了哪些代码：

创建一个widget空窗口项目，打开`ui_widget.h`文件（widget是你自定义的类名，总之就是打开前面带`ui_`的这个头文件，这里注意，打开之前要先编译一下工程，否则该文件没有生成，会报错），报错如下：

![2022-09-24-13-03-34](img/2022-09-24-13-03-34.png)

编译后，`ui_widget.h`文件打开如下：

![2022-09-24-13-07-04](img/2022-09-24-13-07-04.png)

然后切换到ui设计界面，拖动添加一个`Tool Button`按钮，这样就生成了一个`QToolButton`对象，到这里就可以使用这个对象了。

但我们要看一下拖拽控件生成了哪些代码，保存刚刚编辑的ui界面，然后回到代码编辑界面，再次编译（是为了更新`ui_widget.h`文件，刚刚添加的控件只是保存在了`widget.ui`文件中，相关的对象还没有创建），打开`ui_widget.h`如下：

![2022-09-24-13-20-29](img/2022-09-24-13-20-29.png)

其中，

```c++
#include <QtWidgets/QToolButton>
```

引用`QToolButton`头文件。

```c++
QToolButton *toolButton;
```

创建一个`QToolButton`对象指针。

```c++
toolButton = new QToolButton(Widget);
toolButton->setObjectName(QString::fromUtf8("toolButton"));
toolButton->setGeometry(QRect(230, 180, 26, 24));
```

实例化一个`QToolButton`对象，并设置对象名称、按钮位置和按钮大小。

```c++
toolButton->setText(QApplication::translate("Widget", "...", nullptr));
```

设置按钮文字，这里设置为`...`

其中，必要的是“`QToolButton`头文件”和“实例化`QToolButton`对象”，其余均可以按照需求自定义。

所以自己写代码使用`QToolButton`时，可以参考以下代码：

```c++
#include <QtWidgets/QToolButton>
// this是QToolButton所在窗口的指针
QToolButton* toolBtn = new QToolButton(this);
```



#### 1.2.2 为QToolButton添加图标

这里涉及到Qt资源，软件使用的声音文件、图片文件等，都以资源的形式加载，使用前需要为工程添加资源文件，具体添加方法见[qrc资源文件介绍与使用](https://blog.csdn.net/maizousidemao/article/details/127033800?spm=1001.2014.3001.5502)

以上述使用代码创建的`QToolButton`对象`toolBtn`为例，为了方便展示，首先给按钮设置一个合适的大小：

```c++
toolBtn->setGeometry(QRect(230, 170, 50, 50));
```

然后使用`setIcon`函数为按钮添加背景图标：

```c++
toolBtn->setIcon(QIcon(":/res/icon.png"));
// 调整背景图标大小
toolBtn->setIconSize(QSize(30, 30));
```

![2022-09-25-18-40-34](img/2022-09-25-18-40-34.png)



#### 1.2.3 为QToolButton添加文字

函数`setText`可以设置QToolButton的文字：

```c++
toolBtn->setText("小飞机");
```

但会发现，文字并没有显示，这是因为QToolButton有一个`toolButtonStyle`属性，可以设置文本和图片的显示方式，该属性默认只显示图标，当同时设置文字和图标时，会只显示图标不显示文字。



#### 1.2.4 设置按钮风格

可以通过`setToolButtonStyle(Qt::ToolButtonStyle style)`函数设置按钮风格，入参为枚举值：

```c++
enum ToolButtonStyle {
    ToolButtonIconOnly,
    ToolButtonTextOnly,
    ToolButtonTextBesideIcon,
    ToolButtonTextUnderIcon,
    ToolButtonFollowStyle
};
```

枚举值描述如下：

|           枚举常量           |  值  |               描述                |
| :--------------------------: | :--: | :-------------------------------: |
|    Qt::ToolButtonIconOnly    |  0   |            只显示图标             |
|    Qt::ToolButtonTextOnly    |  1   |            只显示文本             |
| Qt::ToolButtonTextBesideIcon |  2   |        文本显示在图标旁边         |
| Qt::ToolButtonTextUnderIcon  |  3   |        文本显示在图标下方         |
|  Qt::ToolButtonFollowStyle   |  4   | 按照QStyle::StyleHint所设置的显示 |

设置`文本显示在图标下方`：

```c++
toolBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
```

![2022-09-25-22-06-39](img/2022-09-25-22-06-39.png)



#### 1.2.5 设置按钮扁平化

`autoRaise`属性可以控制`toolButton`的扁平化，即按钮和界面齐平，不显示按钮的边框。

可以使用`void setAutoRaise(bool enable);`函数设置`autoRaise`的值：

```c++
toolBtn->setAutoRaise(true);
```

设置后的效果如下：

![2022-09-25-22-43-32](img/2022-09-25-22-43-32.png)



#### 1.2.6 设置按钮菜单



### 1.3 QRadioButton

`QRadioButton`既单选框，常用作表单互斥选择选项，在“多选一”的场景中使用。

office word和PhotoShop中都有使用单选框，如下：

![20221015143039](img/20221015143039.png)



![20221015142747](img/20221015142747.png)



#### 1.3.1 创建QRadioButton

`QRadioButton`有两个构造函数，都要指定父对象，其中一个可以设置单选框的文本。

```c++
explicit QRadioButton(QWidget *parent = nullptr);
explicit QRadioButton(const QString &text, QWidget *parent = nullptr);
```

同样可以通过拖动控件创建，也可以使用代码直接创建，控件创建默认使用构造函数`QRadioButton(QWidget *parent = nullptr);`。

如下图创建了三个单选按钮，其中，`RadioButton`通过拖拽控件创建，`RadioButton1`和`RadioButton2`通过代码直接创建：

![2022-10-19-21-43-06](img/2022-10-19-21-43-06.png)



#### 1.3.2 修改QRadioButton文本

不仅在构造时指定按钮的文本，构造后也可以修改，使用函数`void setText(const QString &text);`

![2022-10-19-21-50-13](img/2022-10-19-21-50-13.png)



#### 1.3.3 QRadioButton分组

`QRadioButton`默认属于同一父组件的所有单选框都互斥，如果同一界面需要有多组“多选一”的单选按钮，可以使用`QButtonGroup`为单选框分组，则每个分组内部的按钮都默认互斥。

左右两个按钮组内的按钮分别互斥。

![20221030113120](img/20221030113120.png)



#### 1.3.4 QRadioButton的信号

`QRadioButton` 没有自己独有的信号，它继承于 `QAbstractButton` ，可以使用`pressed`、`released`、`clicked`、`toggled`等信号。

由于`QRadioButton`常用作选择按钮，需要判断选择状态，所以`toggled`信号比较常用，

对于单个按钮，使用`void toggled(bool checked);`信号可以获得该按钮的选中状态：

```c++
// 连接信号与槽函数
connect(radioButton, SIGNAL(toggled(bool)), this, SLOT(btnToggled(bool)));

// 在槽函数中根据按钮选中与否进行相应操作
void Widget::btnToggled(bool checked)
{
    if (checked)
    {
        qDebug("button is checked.");
    }
    else
    {
        qDebug("button is unchecked.");
    }
}
```



对于按钮组（一组QRadioButton按钮），每个按钮写一个槽函数不太现实（QRadioButton的信号不能返回按钮索引，不适用多个按钮的情况），需要使用按钮组`QRadioButton`的` void idToggled(int, bool);`信号，它不仅可以返回按钮id还可以返回按钮选中状态，

```c++
// 连接信号与槽函数
connect(btnGroup1, SIGNAL(idToggled(int,bool)), this, SLOT(btnToggled(int,bool)));

// 在槽函数中根据按钮选中与否进行相应操作
void Widget::btnToggled(int btn, bool checked)
{
    if (!checked)
    {
        return;
    }

    switch (btn)
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
```



### 1.4 QCheckBox

`QCheckBox`即复选框，常用作表单非互斥选择，，在“多选多”的场景中使用。

office word和PhotoShop中都有使用复选框，如下：

![20221030155203](img/20221030155203.png)

![20221030155516](img/20221030155516.png)



#### 1.4.1 创建QCheckBox

`QCheckBox`有两个构造函数，都要指定父对象，其中一个可以设置复选框的文本。

```c++
explicit QCheckBox(QWidget *parent = nullptr);
explicit QCheckBox(const QString &text, QWidget *parent = nullptr);
```

同样可以通过拖动控件创建，也可以使用代码直接创建，控件创建默认使用构造函数`QCheckBox(QWidget *parent = nullptr);`。

如下图创建了三个单选按钮，其中，`CheckBox`通过拖拽控件创建，`CheckBox1`和`CheckBox2`通过代码直接创建：

![20221030162254](img/20221030162254.png)



#### 1.4.2 成员函数与信号

`QCheckBox`除了继承于`QAbstractButton`的信号外，还有一个自己的信号`void stateChanged(int);`，当复选框状态改变，会发出该信号，并返回复选框的状态，其中复选框的状态有三种：

|       Constant       | Value |                 Description                  |
| :------------------: | :---: | :------------------------------------------: |
|    Qt::Unchecked     |   0   |                   未被选中                   |
| Qt::PartiallyChecked |   1   | 部分被选中，即复选框有子项且子项未被全部选中 |
|     Qt::Checked      |   2   |                    被选中                    |



`QCheckBox`的成员函数除了继承于`QAbstractButton`外，还有两个比较常用，

|                 函数原型                  |                             描述                             |
| :---------------------------------------: | :----------------------------------------------------------: |
|     void setTristate(bool y = true);      | 设置复选框是否可为三种状态，函数参数默认为true，但该属性默认为false |
|         bool isTristate() const;          |                  获取复选框是否可为三种状态                  |
| void setCheckState(Qt::CheckState state); |                        设置复选框状态                        |
|    Qt::CheckState checkState() const;     |                        获取复选框状态                        |



#### 1.4.3 示例

##### 1.设置复选框是否可为三种状态

```c++
checkBox2->setTristate(true);
```

![20221031222027](img/20221031222027.png)

如图，分别展示了CheckBox的三种状态。



##### 2.设置复选框状态

除了通过鼠标点击改变复选框状态，还可以通过代码设置：

![20221031222630](img/20221031222630.png)

其中复选框状态由枚举列出：

```c++
enum CheckState {
    Unchecked,
    PartiallyChecked,
    Checked
};
```



##### 3.通过复选框状态作相应操作

```c++
#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

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
```

打印结果如下：

![20221031224152](img/20221031224152.png)



##### 4.通过多个复选框状态作相应操作

这里可以借助按钮组（QButtonGroup），代码如下：

```c++
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

    m_btnGroup = new QButtonGroup(this);
    m_btnGroup->addButton(ui->checkBox, 0);
    m_btnGroup->addButton(checkBox1, 1);
    m_btnGroup->addButton(checkBox2, 2);

    connect(m_btnGroup, SIGNAL(idClicked(int)),
            this, SLOT(btnGroupCallBack(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::btnGroupCallBack(int btn)
{
    if (m_btnGroup->button(btn)->isChecked())
    {
        switch(btn)
        {
        case 0:
            qDebug("checkBox0 is checked.");
            break;
        case 1:
            qDebug("checkBox1 is checked.");
            break;
        case 2:
            qDebug("checkBox2 is checked.");
            break;
        default:
            break;
        }
    }
}
```

打印结果如下：

![20221101223056](img/20221101223056.png)



### 1.5 QCommandLinkButton

#### 1.5.1 简介

`QCommandLinkButton`是`Windows Vista`引入的一个新控件。它的预期用途类似于单选按钮，它用于在一组互斥选项之间进行选择。`QCommandLinkButton`不应单独使用，而应作为向导和对话框中单选按钮的替代。外观通常类似于平面按钮，但它允许在普通按钮文本之外添加描述性文本。默认情况下，它还将带有一个箭头图标，表示按下该控件将打开另一个窗口或页面。

我们常用的`Visual Studio`的欢迎页面就是用了类似按钮作为向导，如下：

![20221101155203](img/20221101155203.png)

还有Qt Creator的历史项目也用了类似`QCommandLinkButton`的按钮：

![2022-11-02-20-27-29](img/2022-11-02-20-27-29.png)



#### 1.5.2 创建QCommandLinkButton

`QCommandLinkButton`有三个构造函数，都要指定父对象，可以选择设置按钮文本和描述文本。

```c++
explicit QCommandLinkButton(QWidget *parent = nullptr);
explicit QCommandLinkButton(const QString &text, QWidget *parent = nullptr);
explicit QCommandLinkButton(const QString &text, const QString &description, QWidget *parent = nullptr);
```

同样可以通过拖动控件创建，也可以使用代码直接创建，控件创建默认使用构造函数`QCommandLinkButton(QWidget *parent = nullptr);`。

如下图创建了三个`QCommandLinkButton`，其中，`QCommandLinkButton`通过拖拽控件创建，`QCommandLinkButton1`和`QCommandLinkButton2`通过代码直接创建，依次使用了上面三个构造函数：

![20221101234755](img/20221101234755.png)



#### 1.5.3 成员函数与信号

`QCommandLinkButton`公有继承了`QPushButton`类，所以`QPushButton`的公有成员函数`QCommandLinkButton`都能使用。

`QCommandLinkButton`只有一个自己的成员函数比较常用：

```c++
QString description() const;
void setDescription(const QString &description);
```

对描述文本的获取与设置。

![20221102202148](img/20221102202148.png)



#### 1.5.4 示例

这里模仿Qt Creator的历史项目写一个小例子。

![2022-11-03-22-39-30](img/2022-11-03-22-39-30.png)

有些功能没实现，只是个UI显示，就不贴代码了，有需要自行下载 [链接](https://download.csdn.net/download/maizousidemao/86894584)。



### 1.6 QDialogButtonBox

#### 1.6.1 简介

`QDialogButtongBox`是一个包含很多按钮的控件，对话框中有多个需要分组排列的按钮时，可以使用QDialogButtongBox类。
开发人员可以向`QDialogButtonBox`添加按钮，`QDialogButtonBox`会根据平台自动使用合适的布局。

Qt Creator 添加新文件的对话框和Photoshop调整曲线的对话框都可以使用`QDialogButtonBox`来处理：

![20221106163542](img/20221106163542.png)



![20221106155516](img/20221106155516.png)



#### 1.6.2 创建QDialogButtongBox

`QDialogButtongBox`有4个构造函数，

```c++
QDialogButtonBox(QWidget *parent = nullptr);
QDialogButtonBox(Qt::Orientation orientation, QWidget *parent = nullptr);
explicit QDialogButtonBox(StandardButtons buttons, QWidget *parent = nullptr);
QDialogButtonBox(StandardButtons buttons, Qt::Orientation orientation, QWidget *parent = nullptr);
```

同样可以通过拖动控件创建，也可以使用代码直接创建，控件创建默认使用构造函数`QDialogButtonBox(QWidget *parent = nullptr);`，控件创建会默认添加`cancel`和`ok`两个标准按钮。

对于其他三个构造函数的参数，其中，`Qt::Orientation`是枚举，可以指定按钮纵向或横向排列（如上图两个例子）；`StandardButtons`也是枚举，用于指定标准按钮。

如下图创建了四个`QDialogButtonBox`，其中，第一行通过拖拽控件创建，其余通过代码直接创建，依次使用了上面四个构造函数：

![20221106173535](img/20221106173535.png)



#### 1.6.3 枚举

`QDialogButtonBox`有用到一些枚举变量，详见下方：

##### 1. Qt::Orientation

按钮排列方式

```c++
enum Orientation {
    Horizontal = 0x1,
    Vertical = 0x2
};
```

说明：

|    Constant    | Value | Description |
| :------------: | :---: | :---------: |
| Qt::Horizontal |  0x1  |  水平排列   |
|  Qt::Vertical  |  0x2  |  垂直排列   |



##### 2. QDialogButtonBox::ButtonRole

描述按钮角色，不同角色的按钮有不同的行为

```c++
enum ButtonRole {
    InvalidRole = -1,
    AcceptRole,
    RejectRole,
    DestructiveRole,
    ActionRole,
    HelpRole,
    YesRole,
    NoRole,
    ResetRole,
    ApplyRole,

    NRoles
};
```

说明：

| Constant | Value | Description |
| :------: | :---: | :---------: |
|QDialogButtonBox::InvalidRole     |     -1   | 无效按钮 |
|QDialogButtonBox::AcceptRole      |     0    | 单击按钮可接受对话框（如OK按钮） |
|QDialogButtonBox::RejectRole      |      1   | 单击按钮可接受对话框（如Cancel按钮） |
|QDialogButtonBox::DestructiveRole |     2    | 单击该按钮会导致破坏性更改（例如“放弃更改”）并关闭对话框 |
|QDialogButtonBox::ActionRole      |      3   | 单击该按钮将更改对话框中的元素 |
|QDialogButtonBox::HelpRole        |    4     | 单击按钮可请求帮助 |
|QDialogButtonBox::YesRole         |         5| 类似于“是”的按钮 |
|QDialogButtonBox::NoRole          |        6 | 类似于“否”的按钮 |
|QDialogButtonBox::ResetRole       |      7   | 该按钮将对话框的字段重置为默认值 |
|QDialogButtonBox::ApplyRole       |      8   | 按钮应用当前更改 |



##### 3. QDialogButtonBox::StandardButton

标准按钮

```c++
enum StandardButton {
    NoButton           = 0x00000000,
    Ok                 = 0x00000400,
    Save               = 0x00000800,
    SaveAll            = 0x00001000,
    Open               = 0x00002000,
    Yes                = 0x00004000,
    YesToAll           = 0x00008000,
    No                 = 0x00010000,
    NoToAll            = 0x00020000,
    Abort              = 0x00040000,
    Retry              = 0x00080000,
    Ignore             = 0x00100000,
    Close              = 0x00200000,
    Cancel             = 0x00400000,
    Discard            = 0x00800000,
    Help               = 0x01000000,
    Apply              = 0x02000000,
    Reset              = 0x04000000,
    RestoreDefaults    = 0x08000000,

#ifndef Q_MOC_RUN
    FirstButton        = Ok,
    LastButton         = RestoreDefaults
#endif
};
```

说明：

|         Constant         | Value | Description |
| :----------------------: | :---: | :---------: |
|QDialogButtonBox::Ok                       |    0x00000400 |AcceptRole角色下定义的Ok按钮|
|QDialogButtonBox::Open                     |  0x00002000 |AcceptRole角色下定义的Open按钮|
|QDialogButtonBox::Save                     |    0x00000800| AcceptRole角色下定义的Save按钮 |
|QDialogButtonBox::Cancel                   |     0x00400000 |RejectRole角色下定义的Cancel按钮|
|QDialogButtonBox::Close                    |       0x00200000 |RejectRole角色下定义的Close按钮|
|QDialogButtonBox::Discard                  |     0x00800000| DestructiveRole角色下定义的Discard或Don't Save按钮，具体取决于使用的平台 |
|QDialogButtonBox::Apply                    |       0x02000000 |ApplyRole角色下定义的Apply按钮|
|QDialogButtonBox::Reset                    |      0x04000000 |ResetRole角色下定义的Reset按钮|
|QDialogButtonBox::RestoreDefaults  | 0x08000000| ResetRole角色下定义的RestoreDefaults按钮 |
|QDialogButtonBox::Help             |            0x01000000| HelpRole角色下定义的Help按钮 |
|QDialogButtonBox::SaveAll          |               0x00001000 |AcceptRole角色下定义的Save All按钮|
|QDialogButtonBox::Yes              |           0x00004000| YesRole角色下定义的Yes按钮 |
|QDialogButtonBox::YesToAll         |                0x00008000 |YesRole角色下定义的Yes to All按钮|
|QDialogButtonBox::No               |          0x00010000 |NoRole角色下定义的No按钮|
|QDialogButtonBox::NoToAll          |               0x00020000 |NoRole角色下定义的No to All按钮|
|QDialogButtonBox::Abort            |             0x00040000 |RejectRole角色下定义的Abort按钮|
|QDialogButtonBox::Retry            |             0x00080000 |AcceptRole角色下定义的Retry按钮|
|QDialogButtonBox::Ignore           |              0x00100000| AcceptRole角色下定义的Ignore按钮 |
|QDialogButtonBox::NoButton         |                0x00000000| 无效按钮 |



#### 1.6.4 成员函数与信号

`QDialogButtonBox` 公有继承与`QWidget`，所以`QWidget`的公有成员函数`QDialogButtonBox`都能使用。

`QDialogButtonBox`的成员函数如下： 

##### 1. 按钮排列方式

|                     函数原型                      |                  描述                   |
| :-----------------------------------------------: | :-------------------------------------: |
| void setOrientation(Qt::Orientation orientation); | 设置按钮排列方式，Qt::Orientation为枚举 |
|       Qt::Orientation orientation() const;        |            获取按钮排列方式             |



##### 2. 添加与删除按钮

|                           函数原型                           |                             描述                             |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|  void addButton(QAbstractButton *button, ButtonRole role);   | 将给定按钮添加到具有指定角色的按钮框中。如果角色无效，则不添加按钮。<br>如果已添加按钮，则将其删除并使用新角色再次添加<br />按钮框拥有按钮的所有权。 |
| QPushButton *addButton(const QString &text, ButtonRole role); | 使用给定文本创建一个按钮，将其添加到指定角色的按钮框，并返回相应的按钮。如果角色无效，则不创建按钮，并返回 nullptr。 |
|        QPushButton *addButton(StandardButton button);        | 如果 button 有效，则将标准按钮添加到按钮框，并返回一个按钮。<br />如果 button 无效，则不添加到按钮框中，返回nullptr。 |
|         void removeButton(QAbstractButton *button);          |    从按钮框中移除按钮而不删除它并将其父级设置为nullptr。     |
|                        void clear();                         |               清除按钮框，删除其中的所有按钮。               |



##### 3. 按钮与角色

|                       函数原型                        |                             描述                             |
| :---------------------------------------------------: | :----------------------------------------------------------: |
|       QList<QAbstractButton *> buttons() const;       |          返回已添加到按钮框中的所有按钮的对象列表。          |
| ButtonRole buttonRole(QAbstractButton *button) const; | 返回指定按钮的按钮角色。<br />如果按钮为 nullptr 或尚未添加到按钮框，则返回 InvalidRole。按钮角色具体见枚举QDialogButtonBox::ButtonRole |



##### 4. 标准按钮

|                           函数原型                           |                             描述                             |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
|      void setStandardButtons(StandardButtons buttons);       | 为按钮框添加标准按钮，入参为StandardButton枚举，可多个（使用\|拼接） |
|           StandardButtons standardButtons() const;           |                 返回该按钮框已添加的标准按钮                 |
| StandardButton standardButton(QAbstractButton *button) const; | 返回与给定按钮对应的标准按钮枚举值，如果给定按钮不是标准按钮，则返回 NoButton。 |
|       QPushButton *button(StandardButton which) const;       |        返回一个标准按钮类型的QPushButton按钮对象指针         |



##### 5. 按钮居中

|              函数原型               |              描述              |
| :---------------------------------: | :----------------------------: |
| void setCenterButtons(bool center); |     设置按钮框中的按钮居中     |
|     bool centerButtons() const;     | 返回钮框中的按钮是否设置了居中 |



## 2. 布局组件(Layouts)



![Layouts](img/Layouts.png)



|       控件        |   描述   |
| :---------------: | :------: |
|  Vertical Layout  | 垂直布局 |
| Horizontal Layout | 水平布局 |
|    Grid Layout    | 网格布局 |
|    Form Layout    | 表单布局 |



各控件类的继承关系如下：

![20221113221456](img/20221113221456.png)

### 2.1 QBoxLayout

`QBoxLayout`可以在水平方向或垂直方向上排列控件，由`QHBoxLayout`和`QVBoxLayout`继承。

QHBoxLayout：水平布局，在水平方向上排列控件，即：左右排列。
QVBoxLayout：垂直布局，在垂直方向上排列控件，即：上下排列。

如下图：

![20221118223526](img/20221118223526.png)

这里仅以按钮为例，布局也可用于其他控件。

`QHBoxLayout`和`QVBoxLayout`都公有继承于`QBoxLayout`，没有自己的成员函数。



#### 2.1.1 QBoxLayout布局规则

QBoxLayout布局主要是控制控件在盒模型中的排列与尺寸，有如下规则：

**控件的sizePolicy：**

-   控件sizePolicy的优先级最高，其次才会考虑布局的规则。
-   `QSizePolicy`是`Qt Widgets`模块下一个单独的类，没有父类也没有子类，只供其他类调用。
-   `QSizePolicy`有两个枚举，`QSizePolicy::PolicyFlag`和`QSizePolicy::Policy`，用于表示控件的sizePolicy。
-   `QSizePolicy::PolicyFlag`枚举如下：

|        Constant         | Value |                        Description                         |
| :---------------------: | :---: | :--------------------------------------------------------: |
|  QSizePolicy::GrowFlag  |   1   |        如有必要，控件大小可以超过系统推荐的最大尺寸        |
| QSizePolicy::ExpandFlag |   2   | 在父布局允许的范围内，控件要尽可能的大，获得尽可能多的空间 |
| QSizePolicy::ShrinkFlag |   4   |        如有必要，控件大小可以小于系统推荐的最小尺寸        |
| QSizePolicy::IgnoreFlag |   8   |          忽略系统推荐尺寸，控件获得尽可能多的空间          |

-   `QSizePolicy::Policy`枚举如下：

|                           Constant                           |      Value      |                         Description                          |
| :----------------------------------------------------------: | :-------------: | :----------------------------------------------------------: |
|                      QSizePolicy::Fixed                      |        0        | 将控件默认尺寸设置为` QWidget::sizeHint()`系统推荐尺寸，不可拉伸与缩放 |
|       QSizePolicy::Minimum<br>(QSizePolicy::GrowFlag)        |        1        | 控件最小尺寸设置为` QWidget::sizeHint()`系统推荐最小尺寸，最大尺寸不限制，可拉伸与缩放，但最小不能小于最小尺寸 |
|      QSizePolicy::Maximum<br>(QSizePolicy::ShrinkFlag)       |        4        | 控件最大尺寸设置为` QWidget::sizeHint()`系统推荐最大尺寸，最小尺寸不限制，可拉伸与缩放，但最大不能大于最大尺寸 |
|       QSizePolicy::Preferred<br>(GrowFlag\|ShrinkFlag)       |   5<br>(1\|4)   | 将控件默认尺寸设置为` QWidget::sizeHint()`系统推荐尺寸，可拉伸与缩放，可以超过系统推荐的最大最小尺寸 |
|   QSizePolicy::MinimumExpanding<br>(GrowFlag\|ExpandFlag)    |   3<br>(1\|2)   | 控件要获得尽可能多的空间，最小不能小于` QWidget::sizeHint()`系统推荐的最小尺寸，最大尺寸不限制，可拉伸与缩放 |
| QSizePolicy::Expanding<br>(GrowFlag\|ExpandFlag\|ShrinkFlag) | 7<br>(1\|2\|4)  |   控件要获得尽可能多的空间，可以超过系统推荐的最大最小尺寸   |
|  QSizePolicy::Ignored<br>(GrowFlag\|ShrinkFlag\|IgnoreFlag)  | 13<br>(1\|4\|8) |           忽略系统推荐尺寸，控件获得尽可能多的空间           |

**布局规则，控件尺寸：**

-   基本没有规则，主要以控件的sizePolicy为准。

-   如果布局中多个控件的sizePolicy不同，不同sizePolicy会产生空间竞争，他们的竞争等级如下，等级越高获取的空间越大：

    `MinimumExpanding` = `Expanding` > `Preferred` = `Minimum` = `Ignored` > `Maximum` = `Fixed`

- 如下图：

    -   布局`(A)`，由于`Ignored`忽略了系统推荐尺寸（没有强大后台了，哈哈），所以比他等级高的都有绝对竞争力，结果就是等级为`Ignored`的控件被挤没了，如下图。
    -   布局`(B)`，由于 `Maximum` 和 `Fixed` 一个最大不超过系统推荐尺寸，一个最大尺寸被固定为系统推荐尺寸，所以两者都不去竞争多余空间，如下图。
    -   布局`(C)`，`PushButton1`和`PushButton2`的`Vertical Policy`设置为`Minimum`，所以可以调整高度以填满布局，`PushButton3`的 `Vertical Policy`为`Fixed`，无法调整高度。
    -   布局`(C)`，`PushButton1`和`PushButton2`的`Horizontal Policy`设置为`Minimum`，`PushButton3`的 `Horizontal Policy`为`Fixed`，所以`PushButton3`的宽度为固定值，布局水平方向的剩余空间由`PushButton1`和`PushButton2`调整宽度来填充。

![2022-12-04-19-41-19](img/2022-12-04-19-41-19.png)

**布局规则，控件间距：**

-   规则一：控件sizePolicy的设置，如布局中有可以自由调整尺寸的控件，不设置控件间距，则默认控件间距为`6`，控件自动调整尺寸以填满布局盒模型。
-   规则二：控件sizePolicy的设置，如布局中没有可以自由调整尺寸的控件，则控件间距将被拉伸，以满足sizePolicy，但此时控件间距的值仍为默认值或所设置的值。
-   如下图：
    -   布局`(A)`，`PushButton1`和`PushButton4`的`Vertical Policy`设置为`Fixed`，不能自由调整高度，但`PushButton2`和`PushButton3`的`Vertical Policy`设置为`Minimum`，可以自由调整高度，根据规则一，控件间距为默认值`6`。
    -   布局`(B)`，`PushButton1`和`PushButton3`的`Horizontal Policy`都为`Minimum`，`PushButton2`的`Horizontal Policy`都为`Fixed`，根据规则一，控件间距为默认值`6`。
    -   布局`(C)`，`PushButton1`和`PushButton2`的`Horizontal Policy`都为`Fixed`，都不能自由调整宽度，根据规则二，控件间距被拉伸，但此时控件间距的值仍为默认值`6`。


![2022-12-05-22-54-23](img/2022-12-05-22-54-23.png)



#### 2.1.2. 创建QBoxLayout

QBoxLayout只有一个构造函数如下：

```c++
explicit QBoxLayout(Direction, QWidget *parent = nullptr);
```

其中`Direction`是一个枚举，表示控件布局的方向：

```c++
enum Direction 
{ 	
	LeftToRight, 
	RightToLeft, 
	TopToBottom, 
	BottomToTop,
    Down = TopToBottom, 
    Up = BottomToTop 
};
```

枚举描述如下：

|          枚举           |  值  |       描述       |
| :---------------------: | :--: | :--------------: |
| QBoxLayout::LeftToRight |  0   | 水平方向从左到右 |
| QBoxLayout::RightToLeft |  1   | 水平方向从右到左 |
| QBoxLayout::TopToBottom |  2   | 垂直方向从上到下 |
| QBoxLayout::BottomToTop |  3   | 垂直方向从下到上 |

`QHBoxLayout`和`QVBoxLayout`的继承如下：

```c++
QHBoxLayout::QHBoxLayout(QWidget *parent) : QBoxLayout(LeftToRight, parent){}
QHBoxLayout::QHBoxLayout() : QBoxLayout(LeftToRight){}

QVBoxLayout::QVBoxLayout(QWidget *parent) : QBoxLayout(TopToBottom, parent){}
QVBoxLayout::QVBoxLayout() : QBoxLayout(TopToBottom){}
```

他们构造的初始方向分别为：水平方向从左到右（QHBoxLayout）与垂直方向从上到下（QVBoxLayout）。

由于布局是默认铺满父级`Widget`的，为了方便控制布局的整体大小，一般不是将最外层的`Widget`窗口传给`QHBoxLayout`或`QVBoxLayout`，而是再新建一个`Widget`，如下，以`QVBoxLayout`为例：

```c++
// 创建指针
QWidget *verticalLayoutWidget;
QVBoxLayout *verticalLayout;

// 创建新Widget
verticalLayoutWidget = new QWidget(Widget);
// 为新Widget设置大小
verticalLayoutWidget->setGeometry(QRect(70, 33, 591, 271));
// 实例化布局对象，并将新Widget传入
verticalLayout = new QVBoxLayout(verticalLayoutWidget);
```



#### 2.1.3 成员函数

`QBoxLayout`的常用函数如下：

##### 1. 布局排列方向

```c++
Direction direction() const; // 获取当前排列方向
void setDirection(Direction); // 设置排列方向
```

从`QHBoxLayout`和`QVBoxLayout`的构造函数可以看出，他们只是对`QBoxLayout`设置了不同的排列方向。

对于从`QHBoxLayout`和`QVBoxLayout`，还可重新设置排列方向。

![2022-12-01-21-58-00](img/2022-12-01-21-58-00.png)

##### 2. 控件间距

```c++
void setSpacing(int spacing) override; // 设置控件间距大小
int spacing() const override; // 获取控件当前间距
```



##### 3. 添加间隙

```c++
void addSpacing(int size); // 在控件队列最后面添加一个固定大小的间隙
void insertSpacing(int index, int size); // 在指定位置插入一个固定大小的间隙
```



##### 4. 可拉伸控件（弹簧）

```c++
void addStretch(int stretch = 0); // 在控件队列最后面添加一个弹簧
void insertStretch(int index, int stretch = 0); // 在指定位置插入一个弹簧
// 一下函数不仅用于弹簧，也可用于其他控件
void setStretch(int index, int stretch); // 设置指定位置控件的拉伸系数
int stretch(int index) const; // 获取指定位置的拉伸系数
```

其中，index需要注意：

-   index从0开始；
-   弹簧和原有控件分别占用一个index；
-   插入后弹簧后，插入位置后面的index都会加 1；
-   由于弹簧也是控件，所以布局的控件间距仍适用于弹簧与其他控件之间；
-   如下图：
    -   布局`(A)`，没有插入弹簧，三个`PushButton`的`index`以此为0、1、2；
    -   布局`(B)`，在`PushButton1`和`PushButton2`之间插入一个弹簧，则`PushButton2`和`PushButton3`的`index`变为了2、3；
    -   布局`(C)`，全部插入弹簧后，`index`依次变化。


所以手动插入弹簧时要注意`index`的变化。

![2022-12-08-23-21-06](img/2022-12-08-23-21-06.png)



对于拉伸系数`stretch`，即在`sizePolicy`的前提下，可拉伸控件按照什么样的比例分配空间，

- 如果`stretch`为`0`，该控件只保留自己最小的空间，不参与空间争夺
- 如果`sizePolicy`为`Fixed`，该控件保持`Fixed`大小，也不参与空间争夺
- 如果控件达到了`sizePolicy`或其他限制的大小，仍无法满足`stretch`所设置的比例，则控件以限制大小为准，不再按`stretch`所设置比例拉伸。
- 如下图，
    - 布局`(A)`，布局空间可以满足控件比例`1:2:1`，`PushButton1`、`PushButton2`和`PushButton3`的大小分别为`98:197:98`。
    - 布局`(B)`，布局空间不足以满足控件比例`1:2:3`，`PushButton1`和`PushButton2`的比例明显不满足`1:2`。
    - 如果布局空间不足以满足控件比例，这里还有个规律，就是**先剥夺占比小的控件的空间**，优先保证占比大的控件的比例。比如布局`(B)`中，先剥夺`PushButton1`的空间，不管他是不是满足控件比例，他们的大小分别为`97:118:178`，可以发现`PushButton2`和`PushButton3`仍然满足`2:3`的比例。

![qlayoutbox-stretch](img/qlayoutbox-stretch.png)



##### 5. 添加控件

```c++
// 在控件队列最后面添加一个新控件
// 其中可以指定控件的拉伸系数和对齐方式
void addWidget(QWidget *, int stretch = 0, Qt::Alignment alignment = Qt::Alignment());
// 在指定位置插入一个控件
void insertWidget(int index, QWidget *widget, int stretch = 0, 
                  Qt::Alignment alignment = Qt::Alignment());
```



### 2.2 QGridLayout

与`QBoxLayout`只能在一个方向布局不同，`QGridLayout`可以在网格中布局（垂直和水平两个方向）。

![2023-02-07-23-23-40](img/2023-02-07-23-23-40.png)

这里仅以按钮为例，布局也可用于其他控件。



#### 2.2.1 QGridLayout布局规则

与`QBoxLayout`类似，详见 [2.1.1](# 2.1.1 QBoxLayout布局规则)



#### 2.2.2 创建QGridLayout

`QGridLayout`只有一个构造函数

```c+++
explicit QGridLayout(QWidget *parent = nullptr);
```

可以通过拖动控件创建，也可以使用代码直接创建

由于布局是默认铺满父级`Widget`的，为了方便控制布局的整体大小，一般不是将最外层的`Widget`窗口传给`QGridLayout`，而是再新建一个`Widget`，如下：

```c++
// 创建指针
QWidget *gridLayoutWidget;
QGridLayout *gridLayout;

// 创建新Widget
gridLayoutWidget = new QWidget(Widget);
// 为新Widget设置大小
gridLayoutWidget->setGeometry(QRect(149, 80, 321, 191));
// 实例化布局对象，并将新Widget传入
gridLayout = new QGridLayout(gridLayoutWidget);
```



#### 2.2.3 成员函数

##### 1. 控件间距

和`QBoxLayout`类似，`QGridLayout`也有间距的概念，不同是`QGridLayout`可以设置两个方向的间距，如下：

```c++
void setHorizontalSpacing(int spacing); // 设置水平方向的间距
int horizontalSpacing() const; // 获取水平方向的间距
void setVerticalSpacing(int spacing); // 设置垂直方向的间距
int verticalSpacing() const; // 获取处置方向的间距
void setSpacing(int spacing) override; // 设置两个方向的间距
int spacing() const override; // 获取两个方向的间距
```



##### 2. 可拉伸控件（弹簧）

同样和`QBoxLayout`类似，参考 [可拉伸控件](# 4. 可拉伸控件（弹簧）) ，相关函数如下：

```c++
void setRowStretch(int row, int stretch); // 设置指定行的弹簧系数
void setColumnStretch(int column, int stretch); // 设置指定列的弹簧系数
int rowStretch(int row) const; // 获取指定行的弹簧系数
int columnStretch(int column) const; // 获取指定列的弹簧系数
```



##### 3. 最小行高/列宽

```c++
void setRowMinimumHeight(int row, int minSize); // 设置最小行高
void setColumnMinimumWidth(int column, int minSize); // 设置最小列宽
int rowMinimumHeight(int row) const; // 获取最小行高
int columnMinimumWidth(int column) const; // 获取最小列宽
```



##### 4. 行数和列数

```c++
int columnCount() const; // 获取列数
int rowCount() const; // 获取行数
```



##### 5. 锁定纵横比

根据宽度计算高度

```c++
bool hasHeightForWidth() const override; 
int heightForWidth(int) const override;
int minimumHeightForWidth(int) const override;
```

这三个函数默认是没有实际功能的，如要使用，需要自己重载实现，他们的源码如下：

```c++
bool QLayoutItem::hasHeightForWidth() const
{
    return false;
}

int QLayoutItem::heightForWidth(int /* w */) const
{
    return -1;
}

int QLayoutItem::minimumHeightForWidth(int w) const
{
    return heightForWidth(w);
}
```

官方给出了重载的例子，如下：

```c++
 int MyLayout::heightForWidth(int w) const
 {
     if (cache_dirty || cached_width != w) {
         MyLayout *that = const_cast<MyLayout *>(this);
         int h = calculateHeightForWidth(w);
         that->cached_hfw = h;
         return h;
     }
     return cached_hfw;
 }
```



##### 6. 添加控件

```c++
// 在控件队列最后面添加一个新控件
inline void addWidget(QWidget *w) { QLayout::addWidget(w); }
// 在布局的指定位置添加一个新控件
void addWidget(QWidget *, int row, int column, Qt::Alignment = Qt::Alignment());
// 在布局的指定位置添加一个新控件，并可指定跨行/列
void addWidget(QWidget *, int row, int column, int rowSpan, int columnSpan, Qt::Alignment = Qt::Alignment());
```

其中，`inline void addWidget(QWidget *w) { QLayout::addWidget(w); }` 如果队列中间有空的位置，也会忽略过，只会在队列最后添加新控件，如下：

![2023-02-11-23-39-29](img/2023-02-11-23-39-29.png)

第三行第二列空出一个位置，添加控件后，跳过了该位置，如下：

![2023-02-11-23-43-47](img/2023-02-11-23-43-47.png)

如果想一个控件占多行/列，可以使用函数`void addWidget(QWidget *, int row, int column, int rowSpan, int columnSpan, Qt::Alignment = Qt::Alignment());` ，其中，参数`row`和`column`用以指定控件的位置，从`0`开始计数，`rowSpan`和`columnSpan` 指定从当前位置向右或向下所占的行和列数，如下：

原始布局，为了方便显示控件所占空间，将控件的`sizePolicy`设置为`Expanding`，使其充满布局单元格（关于`sizePolicy`详见[QGridLayout布局规则](#2.2.1 QGridLayout布局规则)）：

![2023-02-12-00-24-15](img/2023-02-12-00-24-15.png)

示例1：

在`(2, 0)`的位置添加行控件，所占空间为1行1列，如下：

```c++
ui->gridLayout->addWidget(btn, 2, 0, 1, 1);
```

![2023-02-12-00-31-28](img/2023-02-12-00-31-28.png)

示例2：

在`(2, 0)`的位置添加行控件，所占空间为2行1列，如下：

```c++
ui->gridLayout->addWidget(btn, 2, 0, 2, 1);
```

![2023-02-12-00-38-43](img/2023-02-12-00-38-43.png)

示例3：

如果`rowSpan`和`columnSpan` 为`-1`，则控件所占控件一直延申到最右和最底部边界，如下：

![2023-02-12-00-42-26](img/2023-02-12-00-42-26.png)



##### 7. 添加布局

```c++
void addLayout(QLayout *, int row, int column, Qt::Alignment = Qt::Alignment());
void addLayout(QLayout *, int row, int column, int rowSpan, int columnSpan, Qt::Alignment = Qt::Alignment());
```

布局中还能嵌套布局，函数入参与使用方法和`addWidget`类似，这里不再赘述。



##### 8. 设置栅格布局原点位置

```c++
void setOriginCorner(Qt::Corner);
Qt::Corner originCorner() const;
```

和`QBoxLayout`的`Direction`类似，设置布局中控件的排列方向。

其中，`Qt::Corner`是一个枚举如下：

```c++
enum Corner {
    TopLeftCorner = 0x00000,
    TopRightCorner = 0x00001,
    BottomLeftCorner = 0x00002,
    BottomRightCorner = 0x00003
};
```

|         枚举          |   值    |     描述     |
| :-------------------: | :-----: | :----------: |
|   Qt::TopLeftCorner   | 0x00000 | 矩形的左上角 |
|  Qt::TopRightCorner   | 0x00001 | 矩形的右上角 |
| Qt::BottomLeftCorner  | 0x00002 | 矩形的左下角 |
| Qt::BottomRightCorner | 0x00003 | 矩形的右上角 |

布局原点默认为`Qt::TopLeftCorner`左上角，如下图：

![2023-02-12-01-09-39](img/2023-02-12-01-09-39.png)

右上角如下图，其他方向同理：

![2023-02-12-01-09-39](img/2023-02-12-01-08-22.png)



##### 9. 操作布局项

Qt提供了一个布局项的抽象类`QLayoutItem `，提供了对布局中单元格的操作。

这里仅介绍`QGridLayout`直接涉及到的几个方法，关于`QLayoutItem `更详细的描述见

**访问布局项：**

```c++
QLayoutItem *itemAt(int index) const override; 
QLayoutItem *itemAtPosition(int row, int column) const;
```

可以通过索引访问，也可以通过所在行列位置访问。

默认计数都是从0开始，需要注意的是，`index`的方式是从远离原点的位置开始计数，行列定位的则是从靠近原点的位置开始计数，如下：

`index`方式：（测试发现的，不知道为什么要这么设计，和习惯用法不同，如果你知道原因欢迎评论区留言）

![2023-02-12-15-27-41](img/2023-02-12-15-27-41.png)

行列方式：

![2023-02-12-15-26-29](img/2023-02-12-15-26-29.png)



**删除布局项：**

```c++
QLayoutItem *takeAt(int index) override;
```

这个只能通过索引定位，索引计数方法同上。

![2023-02-12-15-42-52](img/2023-02-12-15-42-52.png)



**通过索引获取布局项位置信息：**

```c++
void getItemPosition(int idx, int *row, int *column, int *rowSpan, int *columnSpan) const;
```

![2023-02-12-16-23-06](img/2023-02-12-16-23-06.png)



**获取布局项数量：**

```c++
int count() const override;
```

![2023-02-12-15-51-36](img/2023-02-12-15-51-36.png)



### 2.3 QFormLayout

表单布局 `QFormLayout` 以两列形式布局其子项。左列由标签组成，右列由小部件（行编辑器、数字调整框等）组成。

如下图，有两列布局，左侧为标签，右侧为行编辑框或下拉列表，就可以用`QFormLayout`实现。

![2023-02-17-22-00-31](img/2023-02-17-22-00-31.png)



#### 2.3.1 创建QFormLayout

和 `QGridLayout`一样，`QFormLayout`也只有一个构造函数：

```c+++
explicit QFormLayout(QWidget *parent = nullptr);
```

可以通过拖动控件创建，也可以使用代码直接创建。

由于布局是默认铺满父级`Widget`的，为了方便控制布局的整体大小，一般不是将最外层的`Widget`窗口传给`QFormLayout`，而是再新建一个`Widget`，如下：

```c++
// 创建指针
QWidget *formLayoutWidget;
QFormLayout *formLayout;

// 创建新Widget
formLayoutWidget = new QWidget(Widget);
// 为新Widget设置大小
formLayoutWidget->setGeometry(QRect(60, 60, 531, 291));
// 实例化布局对象，并将新Widget传入
formLayout = new QFormLayout(formLayoutWidget);
```



#### 2.3.2 成员函数

##### 1. 对行操作

对于表单布局，可以以行为单位作为一个成员，并对其进行操作。

**a. 添加行：**

```c++
void addRow(QWidget *label, QWidget *field); // 使用指定的标签和小部件在表单末尾添加一行
void addRow(QWidget *label, QLayout *field);
void addRow(const QString &labelText, QWidget *field);
void addRow(const QString &labelText, QLayout *field);
void addRow(QWidget *widget); // 直接在表单末尾添加小部件，此时小部件占两列
void addRow(QLayout *layout);
```

**b. 插入行：**

参数同`addRow`，不同的是可以通过`row`指定新行的位置。

```c++
void insertRow(int row, QWidget *label, QWidget *field);
void insertRow(int row, QWidget *label, QLayout *field);
void insertRow(int row, const QString &labelText, QWidget *field);
void insertRow(int row, const QString &labelText, QLayout *field);
void insertRow(int row, QWidget *widget);
void insertRow(int row, QLayout *layout);
```

**c. 删除行：**

删除行的同时删除该行所有小部件及嵌套布局，所有后续行都向上移动一行。

```c++
void removeRow(int row); // 指定行索引
void removeRow(QWidget *widget); // 指定行小部件对象
void removeRow(QLayout *layout); // 指定行布局对象
```

只从布局中删除行，不删除小部件，其余同`removeRow`

```c++
TakeRowResult takeRow(int row);
TakeRowResult takeRow(QWidget *widget);
TakeRowResult takeRow(QLayout *layout);
```



##### 2. 操作布局项

当然也可以操作每一个子项，如下：

**a. 将给定行的布局项设置为`item`、`widget`、`layout`**

```c++
void setItem(int row, ItemRole role, QLayoutItem *item);
void setWidget(int row, ItemRole role, QWidget *widget);
void setLayout(int row, ItemRole role, QLayout *layout);
```

请勿使用`setItem()`添加子布局或子小部件项目，请使用 `setLayout()` 或 `setWidget()`。

其中布局项通过`role`指定，`ItemRole`是一个枚举：

```c++
enum ItemRole {
    LabelRole = 0,
    FieldRole = 1,
    SpanningRole = 2
};
```

描述如下：

|           常量            |  值  |     描述     |
| :-----------------------: | :--: | :----------: |
|  QFormLayout::LabelRole   |  0   | 左列的标签项 |
|  QFormLayout::FieldRole   |  1   | 右列的小部件 |
| QFormLayout::SpanningRole |  2   | 横跨左右两列 |

示例如下：

![20230329214531413](img/20230329214531413.png)



**b. 获取`item`、`widget`、`layout`的位置**

```c++
void getItemPosition(int index, int *rowPtr, ItemRole *rolePtr) const;
void getWidgetPosition(QWidget *widget, int *rowPtr, ItemRole *rolePtr) const;
void getLayoutPosition(QLayout *layout, int *rowPtr, ItemRole *rolePtr) const;
```

通过给定的`index`、`widget`、`layout`获取项所在的行（\*rowPtr）和列（\*rolePtr），如果给定的项不存在，则`*rowPtr`为`-1`，`*rolePtr`保持原来的值不变，其中`index`是布局项在队列中的索引（从0开始）。



**c. 获取右列小部件对应的label对象**

```c++
QWidget *labelForField(QWidget *field) const;
QWidget *labelForField(QLayout *field) const;
```



**d. 通过索引与位置访问布局项**

```c++
QLayoutItem *itemAt(int row, ItemRole role) const;
// reimplemented from QLayout
QLayoutItem *itemAt(int index) const override;
```



**e. 添加/删除布局项**

```c++
// reimplemented from QLayout
void addItem(QLayoutItem *item) override;
QLayoutItem *takeAt(int index) override;
```



##### 3. 间距

```c++
void setHorizontalSpacing(int spacing);	// 设置水平间距
int horizontalSpacing() const;			// 获取水平间距

void setVerticalSpacing(int spacing);   // 设置垂直间距
int verticalSpacing() const;     		// 获取垂直间距

void setSpacing(int) override;  // 同时设置水平和垂直间距
int spacing() const override;	// 同时获取水平和垂直间距（若水平和垂直间距不相等，则返回-1）
```



##### 4. 设置布局规则

```c++
void setFieldGrowthPolicy(FieldGrowthPolicy policy);
FieldGrowthPolicy fieldGrowthPolicy() const;
void setRowWrapPolicy(RowWrapPolicy policy);
RowWrapPolicy rowWrapPolicy() const;
```

其中`FieldGrowthPolicy`定义右列小部件的布局规则，枚举如下：

```c++
enum FieldGrowthPolicy {
    FieldsStayAtSizeHint,
    ExpandingFieldsGrow,
    AllNonFixedFieldsGrow
};
```

描述如下：

|                常量                |  值  |                             描述                             |
| :--------------------------------: | :--: | :----------------------------------------------------------: |
| QFormLayout::FieldsStayAtSizeHint  |  0   |  大小永远不会超出其有效大小提示（QWidgetItem::sizeHint()）   |
|  QFormLayout::ExpandingFieldsGrow  |  1   | 小部件的水平大小策略为 Expanding 或 MinimumExpanding 时，其被拉伸以填充可用空间。其他小部件不会超出其有效大小提示。 |
| QFormLayout::AllNonFixedFieldsGrow |  2   | 只要小部件的大小策略允许拉伸，都将被拉伸以填充可用空间。 这是大多数样式的默认策略。 |

`RowWrapPolicy`定义换行策略，枚举如下：

```c++
enum RowWrapPolicy {
    DontWrapRows,
    WrapLongRows,
    WrapAllRows
};
```

描述如下：

|           常量            |  值  |                             描述                             |
| :-----------------------: | :--: | :----------------------------------------------------------: |
| QFormLayout::DontWrapRows |  0   |              右列小部件总是排列在对应的标签旁边              |
| QFormLayout::WrapLongRows |  1   | 空间优先分配给标签，其余的空间被分配给右列小部件。 如果最小的小部件的大小大于可用空间，则该小部件将换行到下一行。 |
| QFormLayout::WrapAllRows  |  2   |              右列小部件总是排列在对应的标签下方              |



**5. 对齐方式**

```c++
void setLabelAlignment(Qt::Alignment alignment); // 设置标签列的水平对齐方式
Qt::Alignment labelAlignment() const;
void setFormAlignment(Qt::Alignment alignment); // 设置布局的对齐方式
Qt::Alignment formAlignment() const;
```

？？？对齐方式不生效的问题？？？





## 3. 输入组件(Input Widgets)

### 3.1 QComboBox

组合框 `QComboBox`即我们常用的下拉列表，如下是一些使用示例：

office word 中的字体字号设置、段落设置等，很普遍的使用了类似 `QComboBox` 的下拉列表。

![屏幕截图 2023-05-17 225250](img/屏幕截图 2023-05-17 225250.png)



![屏幕截图 2023-05-17 225443](img/屏幕截图 2023-05-17 225443.png)

`QComboBox` 不仅可以用于多选项选择，还节省屏幕空间。



#### 3.1.1 创建QComboBox

 他只有一个构造函数

```cpp
QComboBox(QWidget *parent = nullptr);
```

使用时一般传入父级窗口对象指针。



#### 3.1.2 数据结构

`QComboBox` 可以看做是一个类似列表的容器，列表每一项是一个`item`对象，该对象有类似 `Map` 的成员，`Map`包含类似`text`、`icon`等`key`，并在`value`域存储对应的数据。

![2023-06-05 234253](img/2023-06-05 234253.png)

对于 `key` ，Qt有自己的枚举定义，如下：

```cpp
enum ItemDataRole {
    DisplayRole = 0,
    DecorationRole = 1,
    EditRole = 2,
    ToolTipRole = 3,
    StatusTipRole = 4,
    WhatsThisRole = 5,
    // Metadata
    FontRole = 6,
    TextAlignmentRole = 7,
    BackgroundRole = 8,
    ForegroundRole = 9,
    CheckStateRole = 10,
    // Accessibility
    AccessibleTextRole = 11,
    AccessibleDescriptionRole = 12,
    // More general purpose
    SizeHintRole = 13,
    InitialSortOrderRole = 14,
    // Internal UiLib roles. Start worrying when public roles go that high.
    DisplayPropertyRole = 27,
    DecorationPropertyRole = 28,
    ToolTipPropertyRole = 29,
    StatusTipPropertyRole = 30,
    WhatsThisPropertyRole = 31,
    // Reserved
    UserRole = 0x0100
};
```

枚举说明如下：

| 常量                          | 值     | 描述                                           | value的数据类型                                              |
| :---------------------------- | :----- | :--------------------------------------------- | ------------------------------------------------------------ |
| Qt::DisplayRole               | 0      | 要以文本形式呈现的数据                         | QString                                                      |
| Qt::DecorationRole            | 1      | 要以图标形式呈现的数据                         | QColor/QIcon/QPixmap                                         |
| Qt::EditRole                  | 2      | 适合在编辑器中编辑的数据                       | QString                                                      |
| Qt::ToolTipRole               | 3      | 显示在item的工具提示中的数据                   | QString                                                      |
| Qt::StatusTipRole             | 4      | 状态栏中显示的数据                             | QString                                                      |
| Qt::WhatsThisRole             | 5      | 显示在项目的“what is this?”模式下的数据        | QString                                                      |
| Qt::FontRole                  | 6      | item的默认字体                                 | QFont                                                        |
| Qt::TextAlignmentRole         | 7      | item的文本对齐方式                             | Qt::Alignment                                                |
| Qt::BackgroundRole            | 8      | item的背景笔刷                                 | QBrush                                                       |
| Qt::ForegroundRole            | 9      | item的前景笔刷（通常为文本颜色）               | QBrush                                                       |
| Qt::CheckStateRole            | 10     | 用于获取item的已检查状态                       | Qt::CheckState                                               |
| Qt::AccessibleTextRole        | 11     | 可访问性扩展和插件（如屏幕阅读器）要使用的文本 | QString                                                      |
| Qt::AccessibleDescriptionRole | 12     | 出于可访问性目的对item的描述                   | QString                                                      |
| Qt::SizeHintRole              | 13     | 提供给视图的项目的建议尺寸                     | QSize                                                        |
| Qt::InitialSortOrderRole      | 14     | 获取页眉视图部分的初始排序顺序（Qt 4.8引入）   | Qt::SortOrder                                                |
| Qt::DisplayPropertyRole       | 27     | Qt内部使用                                     | -                                                            |
| Qt::DecorationPropertyRole    | 28     | Qt内部使用                                     | -                                                            |
| Qt::ToolTipPropertyRole       | 29     | Qt内部使用                                     | -                                                            |
| Qt::StatusTipPropertyRole     | 30     | Qt内部使用                                     | -                                                            |
| Qt::WhatsThisPropertyRole     | 31     | Qt内部使用                                     | -                                                            |
| Qt::UserRole                  | 0x0100 | 存储用户数据                                   | 由用户决定使用哪些类型，并确保组件在访问和设置数据时使用正确的类型 |



#### 3.1.3 成员函数

##### 1. 添加选项

```cpp
void addItem(const QString &text, const QVariant &userData = QVariant());
void addItem(const QIcon &icon, const QString &text,
             const QVariant &userData = QVariant());
void addItems(const QStringList &texts){ insertItems(count(), texts); }
```

该函数在列表的末尾添加`item`，其中`userData`是用户数据，用户可以把 `QComboBox` 作为选择列表使用，也可以看作是类似 `Map` 的存储容器，在选择时操作用户自定义数据。



##### 2. 插入选项

```cpp
void insertItem(int index, const QString &text, const QVariant &userData = QVariant());
void insertItem(int index, const QIcon &icon, const QString &text,
                const QVariant &userData = QVariant());
void insertItems(int index, const QStringList &texts);
```

通过指定索引插入 `item`。



##### 3. 删除选项

```cpp
void removeItem(int index);
```

通过指定索引删除 `item` 。



##### 4. 选项属性

```cpp
void setItemText(int index, const QString &text); // 设置item的文本
void setItemIcon(int index, const QIcon &icon); // 设置item的图标
void setIconSize(const QSize &size); // 设置item的图标尺寸
// 设置item的用户数据
void setItemData(int index, const QVariant &value, int role = Qt::UserRole);
void setMaxCount(int max); // 设置item的允许最大数量

QString itemText(int index) const; // 获取item的文本
QIcon itemIcon(int index) const; // 获取item的图标
QSize iconSize() const; // 获取item的图标尺寸
QVariant itemData(int index, int role = Qt::UserRole) const; // 获取item的用户数据
int count() const; // 获取item的数量
int maxCount() const; // 获取item的允许最大数量
```



##### 5. 当前选择的item

```cpp
int currentIndex() const;
QString currentText() const;
QVariant currentData(int role = Qt::UserRole) const;
```

获取当前选择的 `item` 的文本、图标和用户数据。



##### 6. 用户是否可编辑组合框

```cpp
bool isEditable() const;
void setEditable(bool editable);
```

下拉列表不仅可供选择，也可以让用户输入列表中没有的选项（默认不可编辑），如下图：

![image-20230607230339421](img/image-20230607230339421.png)



另外还有一个函数也可以实现组合框可编辑：

```cpp
void setLineEdit(QLineEdit *edit);
QLineEdit *lineEdit() const;
```

他将行编辑框的编辑权赋予组合框，实际上在函数`setEditable` 内部也调用了 `setLineEdit`，如下：

![image-20230609194226465](img/image-20230609194226465.png)



##### 7. 设置显示item的个数

```cpp
int maxVisibleItems() const;
void setMaxVisibleItems(int maxItems);
```

一般情况下，下拉列表有多少 `item` 就会显示多少，如下：

![image-20230610224613939](img/image-20230610224613939.png)

如 `item` 过多，会显得不美观，可以通过该函数设置显示item的个数，如下设置最大显示个数为 `5`，其余会隐藏在滚动条中：

![image-20230610225103148](img/image-20230610225103148.png)



> 关于这个函数有一个很迷的现象，官方文档有如下描述：
> 
> ![image-20230610225349082](img/image-20230610225349082.png)
> 
> 对于不可编辑的组合框，`QStyle::SH_ComboBox_Popup`返回`true`，该属性将被忽略，例如 `Mac style` 或 `Gtk+ Style`。
> 
> 然而，在 `ubuntu` 系统下，对于不可编辑的组合框，`QStyle::SH_ComboBox_Popup`返回 `0`，该属性仍然未生效；在`windows` 系统下，对于不可编辑的组合框，`QStyle::SH_ComboBox_Popup`返回 `0`，该属性生效。
> 
> **如你知道原因欢迎评论区留言。**
> 
> 有图有真相：
> 
> Ubuntu下：
> 
> ![image-20230610230645258](img/image-20230610230645258.png)
> 
> Windows下：
> 
> ![image-20230610232313093](img/image-20230610232313093.png)

该问题可以通过以下方法规避，即使该属性在 `Ubuntu` 系统中生效：

方法一：设置组合框可编辑，`setEditable(true);`

方法二：设置`setStyleSheet("QComboBox{combobox-popup:0;}");`



##### 8. 组合框的item个数

```cpp
int count() const;	// 当前存储的item个数
void setMaxCount(int max);  // 设置允许存储的item最大个数
int maxCount() const; // 获取允许存储的item最大个数
```

如果设置的最大个数小于当前存储的个数，多余的item会被删除。



##### 9. 添加重复的item

有时会在组合框中添加重复的项，如下：

![image-20230611213306770](img/image-20230611213306770.png)

有两种方式添加重复项，一种是通过代码（Qt总是允许通过代码添加重复项），如下：

```cpp
ui->comboBox->addItem("item1");
ui->comboBox->addItem("item2");
ui->comboBox->addItem("item3");
ui->comboBox->addItem("item4");
ui->comboBox->addItem("item4");
```

第二种是用户编辑输入，但Qt默认不允许这种方式，需要设置属性：

```cpp
bool duplicatesEnabled() const;
void setDuplicatesEnabled(bool enable);
```



##### 10. 是否绘制边框

```cpp
void setFrame(bool);
bool hasFrame() const;
```



##### 11. 查找item

```cpp
// 通过text查找
inline int findText(const QString &text, Qt::MatchFlags flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const
{ return findData(text, Qt::DisplayRole, flags); }

// 通过data查找
int findData(const QVariant &data, int role = Qt::UserRole, Qt::MatchFlags flags = static_cast<Qt::MatchFlags>(Qt::MatchExactly|Qt::MatchCaseSensitive)) const;
```

可以发现 `findText` 也是通过 `findData` 实现的，所以对于其他属性的搜索，我们也可以通过 `findData` 实现，因为 `findData` 的 `data` 参数是通用类型，使用时只需指定相应的 `role` 即可（role枚举见`ItemDataRole`）。

第三个参数 `flags` 定义了匹配方式，`Qt::MatchFlags` 枚举如下：

```cpp
enum MatchFlag {
    MatchExactly = 0,
    MatchContains = 1,
    MatchStartsWith = 2,
    MatchEndsWith = 3,
    MatchRegularExpression = 4,
    MatchWildcard = 5,
    MatchFixedString = 8,
    MatchTypeMask = 0x0F,
    MatchCaseSensitive = 16,
    MatchWrap = 32,
    MatchRecursive = 64
};
```

枚举成员描述如下：

|            常量            |  值  |                             描述                             |
| :------------------------: | :--: | :----------------------------------------------------------: |
|      Qt::MatchExactly      |  0   |                    搜索词与item的完全匹配                    |
|     Qt::MatchContains      |  1   |                      搜索词包含在item中                      |
|    Qt::MatchStartsWith     |  2   |                    搜索词与item的开头匹配                    |
|     Qt::MatchEndsWith      |  3   |                    搜索词与item的结尾匹配                    |
| Qt::MatchRegularExpression |  4   |        使用正则表达式作为搜索项执行基于字符串的匹配。        |
|     Qt::MatchWildcard      |  5   |   使用带有通配符的字符串作为搜索词，执行基于字符串的匹配。   |
|    Qt::MatchFixedString    |  8   | 执行基于字符串的匹配。除非同时指定MatchCaseSensitive标志，否则基于字符串的比较不区分大小写。 |
|   Qt::MatchCaseSensitive   |  16  |                       搜索区分大小写。                       |
|       Qt::MatchWrap        |  32  | 执行一个环绕的搜索，这样，当搜索到达模型中的最后一个项目时，它会从第一个项目开始，并一直持续到检查完所有项目为止。 |
|       MatchRecursive       |  64  |                      搜索整个层次结构。                      |

注意：`Qt::MatchExamplete`、`Qt::MatchContains`、`Qt::MatchStartsWith`、`Qt::MatchEndsWith`，`Qt::MatchRegularExpression`、`Qt::MatchWildcard` 和 `Qt::MatchFixedString` 是互斥的，Qt还不支持通过 `Qt::MatchFlags` 参数同时设置多个。



##### 12. 插入策略

当组合框可编辑，用户可以通过手动输入来添加`item`，这时新的`item` 插入到哪里，由枚举 `InsertPolicy`指定，默认为 `InsertAtBottom`在下方新增，使用如下方法设置插入策略：

```cpp
InsertPolicy insertPolicy() const;
void setInsertPolicy(InsertPolicy policy);
```

`InsertPolicy`枚举如下：

```cpp
enum InsertPolicy {
    NoInsert,
    InsertAtTop,
    InsertAtCurrent,
    InsertAtBottom,
    InsertAfterCurrent,
    InsertBeforeCurrent,
    InsertAlphabetically
};
```

说明如下：

|              常量               |  值  |                 描述                 |
| :-----------------------------: | :--: | :----------------------------------: |
|       QComboBox::NoInsert       |  0   |       字符串不会插入到组合框中       |
|     QComboBox::InsertAtTop      |  1   |  字符串会被插入到组合框的第一个位置  |
|   QComboBox::InsertAtCurrent    |  2   |   当前选择的item会被新的字符串覆盖   |
|    QComboBox::InsertAtBottom    |  3   | 字符串会被插入到组合框的最后一个位置 |
|  QComboBox::InsertAfterCurrent  |  4   | 字符串会被插入到当前选择的后一个位置 |
| QComboBox::InsertBeforeCurrent  |  5   | 字符串会被插入到当前选择的前一个位置 |
| QComboBox::InsertAlphabetically |  6   |     字符串按字母顺序插入组合框中     |



##### 13. 尺寸调整策略

由于不同`item`的内容长度不同，组合框的大小调整会有一定策略，默认 `AdjustToContentsOnFirstShow`，使用如下函数设置该策略：

```cpp
SizeAdjustPolicy sizeAdjustPolicy() const;
void setSizeAdjustPolicy(SizeAdjustPolicy policy);
```

策略枚举如下：

```cpp
enum SizeAdjustPolicy {
    AdjustToContents,
    AdjustToContentsOnFirstShow,
    AdjustToMinimumContentsLengthWithIcon
};
```

说明如下：

|                       常量                       |  值  |                             描述                             |
| :----------------------------------------------: | :--: | :----------------------------------------------------------: |
|           QComboBox::AdjustToContents            |  0   |           始终根据item内容进行调整，以使其全部显示           |
|      QComboBox::AdjustToContentsOnFirstShow      |  1   |          组合框将在第一次显示时根据item内容进行调整          |
| QComboBox::AdjustToMinimumContentsLengthWithIcon |  2   | 组合框将调整为最小内容长度加上图标空间。使用该策略，需要考虑性能问题 |

其中`MinimumContentsLength`和`iconSize`都可以另外设置，方法如下：

```cpp
int minimumContentsLength() const; // 默认为0
void setMinimumContentsLength(int characters);
QSize iconSize() const;
void setIconSize(const QSize &size);
```



##### 14. 占位符文本

当组合框没有任何 `item` 时，可以添加占位符文本，以使组合框显示不为空，如下：

![image-20230618215612483](img/image-20230618215612483.png)

当然，占位符是灰色的不可被选择的。

方法接口如下：

```cpp
void setPlaceholderText(const QString &placeholderText);
QString placeholderText() const;
```



##### 15. 自定义数据模型

组合框除了显示为下拉列表，也可以显示自定义的数据模型，比如树或表格，相关方法如下：

```cpp
QAbstractItemModel *model() const;
virtual void setModel(QAbstractItemModel *model); // 将自定义的数据模型添加到组合框

QModelIndex rootModelIndex() const;
void setRootModelIndex(const QModelIndex &index); // 设置项目的根模型项目索引

int modelColumn() const;
// 设置模型可见列。如果在填充组合框之前设置，则视图不受影响，将显示第一列（使用此属性的默认值0）。
void setModelColumn(int visibleColumn);
```



### 3.2 QFontComboBox

该控件用于选择字体，在一些软件中经常有类似控件，如下：

Microsoft Office：

![屏幕截图 2023-07-01 164711](img/屏幕截图 2023-07-01 164711.png)

Photoshop：

![屏幕截图 2023-07-01 165042](img/屏幕截图 2023-07-01 165042.png)

`QFontComboBox` 继承于 `QComboBox` ，所以他有 `QComboBox` 大部分属性与成员，但也有自己特有的。

**注意：**

> 这里虽然说是 `Font` 选择器，实际上每次选择只对 `Font` 中的 `family` 进行了修改，不会改变其他字体属性。 但每次选择 `QFontComboBox` 会返回一个同时包含其他字体属性的 `Font` 对象，如果直接将该对象设置给文本，那么文本当前其他的字体属性会被覆盖。所以，这里注意做好处理，只将`QFontComboBox` 返回的 `family` 属性设置给文本。



#### 3.2.1 创建 QFontComboBox

同样，他也支持通过拖拽控件创建，也可以在自定义代码中创建。

他只有一个构造函数：

```cpp
QFontComboBox(QWidget *parent = nullptr);
~QFontComboBox();
```

默认构造函数`QFontComboBox()`创建一个空的字体选择器。

也可以传入一个`QWidget`对象指针，`QFontComboBox(QWidget *parent)`，它允许将字体选择器嵌入到另一个`QWidget`中。



#### 3.2.2 成员函数

##### 1. 书写系统

```cpp
void setWritingSystem(QFontDatabase::WritingSystem);
QFontDatabase::WritingSystem writingSystem() const;
```

`setWritingSystem()`成员函数用于设置字体选择器所使用的书写系统。它接受一个`QFontDatabase::WritingSystem`参数，指定Qt应该使用哪种书写系统。

> 书写系统（writingSystem） ：书写系统包括一个或多个文字集和一系列规则，一个书写系统至少对应一种语言，可以用书写系统的符号集合和规则比如拼写规则、大小写等来表达对应的语言，如汉字、日文、罗马字等。

以下是一个示例使用`setWritingSystem`方法的代码片段：

```cpp
QFontComboBox *fontCombo = new QFontComboBox(this);
fontCombo->setWritingSystem(QFontDatabase::SimplifiedChinese);
```

其中，`QFontDatabase::WritingSystem` 枚举了Qt支持的书写系统：

```cpp
enum WritingSystem {
    Any,

    Latin,
    Greek,
    Cyrillic,
    Armenian,
    Hebrew,
    Arabic,
    Syriac,
    Thaana,
    Devanagari,
    Bengali,
    Gurmukhi,
    Gujarati,
    Oriya,
    Tamil,
    Telugu,
    Kannada,
    Malayalam,
    Sinhala,
    Thai,
    Lao,
    Tibetan,
    Myanmar,
    Georgian,
    Khmer,
    SimplifiedChinese,
    TraditionalChinese,
    Japanese,
    Korean,
    Vietnamese,

    Symbol,
    Other = Symbol,

    Ogham,
    Runic,
    Nko,

    WritingSystemsCount
};
```

默认值为`QFontDatabase::Any` ，表示支持平台系统所有的书写系统。



##### 2. 字体过滤器

```cpp
void setFontFilters(FontFilters filters);
FontFilters fontFilters() const;
```

`setFontFilters`成员函数允许开发人员指定字体选择器可以显示的字体。它接受一个`QFontComboBox::FontFilters`参数，该参数允许开发人员选择要允许的字体类型。例如，可以仅允许选择等宽字体，或仅允许选择粗体或斜体字体。

以下是一个示例使用`setFontFilters`方法的代码片段：

```cpp
QFontComboBox *fontCombo = new QFontComboBox(this);
fontCombo->setFontFilters(QFontComboBox::MonospacedFonts);
```

其中，`QFontComboBox::FontFilters` 枚举了可选择的字体类型：

```cpp
enum FontFilter {
    AllFonts = 0,
    ScalableFonts = 0x1,
    NonScalableFonts = 0x2,
    MonospacedFonts = 0x4,
    ProportionalFonts = 0x8
};
```

说明如下：

| 枚举                             | 值   | 描述             |
| -------------------------------- | ---- | ---------------- |
| QFontComboBox::AllFonts          | 0    | 显示所有字体     |
| QFontComboBox::ScalableFonts     | 0x1  | 显示可缩放字体   |
| QFontComboBox::NonScalableFonts  | 0x2  | 显示不可缩放字体 |
| QFontComboBox::MonospacedFonts   | 0x4  | 显示等宽字体     |
| QFontComboBox::ProportionalFonts | 0x8  | 显示比例字体     |

> 缩放字体(ScalableFonts)：是指可以按比例缩放而不会失去质量的字体。与点阵字体（BitmapFonts）相比，缩放字体可以在任何尺寸下保持线条的清晰度和平滑度，而不会像点阵字体一样在放大时变得模糊和失真。缩放字体通常用于显示需要在不同大小的显示器和不同分辨率的屏幕上按比例扩展的文本。它们的另一个优点是它们可以用来创建真正的平滑曲线，尤其是在大的字体尺寸下，这对于设计师和艺术家来说非常重要。
>
> 比例字体(ProportionalFonts)：是指每一个字符都有不同的宽度。例如，在比例字体中，大写字母"O"的宽度比小写字母"i"的宽度要宽得多。比例字体通常用于文本编辑和排版，因为它可以更好地适应不同字母的宽度，从而提高文本的可读性。
>
> 等宽字体(MonospacedFonts)：是指每一个字符都有相同的宽度。例如，在等宽字体中，大写字母"O"和小写字母"i"的宽度是相同的。等宽字体通常用于编程和数据展示，因为字符对于编程和数据处理来说是等价的，这种字体使得代码和表格更易于阅读和理解。



##### 3. 当前字体

既然是和`QComboBox` 类似的选择器，就会有当前所选择的`item`这一属性。

```cpp
void setCurrentFont(const QFont &f);
QFont currentFont() const;
```

`setCurrentFont`函数用于设置当前选中的字体。它接受一个`QFont`类型的参数，该参数指定要设置为当前字体的字体。例如：

```cpp
QFont font("Arial", 12);
fontComboBox->setCurrentFont(font);
```

`currentFont`函数返回当前选中的字体。例如：

```cpp
QFont font = fontComboBox->currentFont();
```



##### 4.  信号

当字体被选择，列表当前值发生改变时，`QFontComboBox`会发出 `currentFontChanged` 信号。

```cpp
void currentFontChanged(const QFont &f);
```

它包含一个QFont类型的参数，指定用户选择的新字体。

以下是一个示例使用`currentFontChanged`信号的代码片段：

```cpp
QFontComboBox *fontCombo = new QFontComboBox(this);
connect(fontCombo, SIGNAL(currentFontChanged(const QFont &)), this, SLOT(onFontChanged(const QFont &)));

void onFontChanged(const QFont &font)
{
    // do something
}
```



### 3.3 QLineEdit

`QLineEdit`是一个用于输入单行文本的控件，常用于获取用户名、密码、搜索关键词、文件选取对话框中的文件路径输入框、特定格式的文本(IP、掩码、密钥)等。



#### 3.3.1 构造函数

```cpp
explicit QLineEdit(QWidget *parent = nullptr);
explicit QLineEdit(const QString &, QWidget *parent = nullptr);
~QLineEdit();
```

其中可以在构造时为其设置初始文本。



#### 3.3.2 成员函数









































































## 4. 显示组件(Display Widgets)

## 5. 容器组件(Containers)

## 6. 单元视图(Item Views)和单元部件(Item Widgets)



# 三、Qt Widgets模块（非控件类）



## 3.1 QButtonGroup

### 0. QButtonGroup简介

`QButtonGroup`提供了一个抽象容器，可以将按钮小部件放入其中。它不提供此容器的可视化表示（请参见`QGroupBox`中的容器小部件），而是管理组中每个按钮的状态。

互斥按钮组，将关闭除已单击的按钮外的所有可选中（可切换）按钮。默认情况下，按钮组是互斥的。按钮组中的按钮通常是可检查的，如`QPushButtons`、`QCheckBoxes`（通常用于非互斥按钮组）或`QRadioButtons`。如果创建互斥按钮组，则应确保最初选中该组中的一个按钮；否则，该组最初将处于未选中按钮的状态。

可以使用`addButton()`将按钮添加到组中，然后使用`removeButton()`将其删除。如果组是独占的，则当前选中的按钮可用于`checkedButton()`。如果单击按钮，则会发出`buttonClicked()`信号；对于独占组中的可检查按钮，这意味着该按钮已被选中。组中的按钮列表由`button()`返回。

此外，`QButtonGroup`可以在整数和按钮之间进行映射。您可以使用`setId()`为按钮分配一个整数`id`，并使用`id()`检索它。当前选中的按钮的id可以通过`checkedId()`获得，并且有一个重载的信号`buttonClicked()`，它会发出按钮的`id`。`id`值`-1`为`QButtonGroup`保留值，表示“没有这样的按钮”。映射机制的目的是简化用户界面中枚举值的表示。



### 1. 创建QButtonGroup

`QButtonGroup`的构造函数如下：

```c++
QButtonGroup(QObject *parent = nullptr);
```

接收一个对象指针作为其父对象。



### 2. 成员函数与信号

`QButtonGroup`常用成员函数有：

|                    函数原型                     |                             描述                             |
| :---------------------------------------------: | :----------------------------------------------------------: |
|            void setExclusive(bool);             |         设置组内按钮是否互斥，不设置默认互斥（true）         |
|             bool exclusive() const;             |    获取组内按钮是否互斥的标志，true：互斥，false：不互斥     |
| void addButton(QAbstractButton *, int id = -1); |                为按钮组添加按钮，为按钮设置id                |
|      void removeButton(QAbstractButton *);      |                        从组内删除按钮                        |
|    QList<QAbstractButton*> buttons() const;     |                       获取组内所有按钮                       |
|    QAbstractButton * checkedButton() const;     | 获取按钮组中被选中按钮的指针，如果没有按钮被选中，则返回nullptr |
|             int checkedId() const;              |   获取按钮组中被选中按钮的id，如果没有按钮被选中，则返回-1   |
|     QAbstractButton *button(int id) const;      |                  通过按钮id索引按钮对象指针                  |
|     int id(QAbstractButton *button) const;      |                  通过按钮对象指针索引按钮id                  |
|  void setId(QAbstractButton *button, int id);   |                         为按钮设置id                         |



`QButtonGroup`共有8个信号，两两一组共4组：

|                             信号                             |                             描述                             |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
| void buttonClicked(QAbstractButton *);<br />void buttonClicked(int);<br /> | 按钮点击信号，按钮组中有按钮被点击发出此信号，并返回被点击的按钮对象指针或id |
| void buttonPressed(QAbstractButton *);<br />void buttonPressed(int); | 按钮按下信号，按钮组中有按钮被按下发出此信号，并返回被按下的按钮对象指针或id |
| void buttonReleased(QAbstractButton *);<br />void buttonReleased(int); | 按钮释放信号，按钮组中有按钮被释放发出此信号，并返回被释放的按钮对象指针或id |
| void buttonToggled(QAbstractButton *, bool);<br /> void buttonToggled(int, bool); | 按钮状态改变信号，按钮组中有按钮状态改变发出此信号，并返回状态改变的按钮对象指针/id以及按钮当前状态（点击按钮或程序设置改变按钮状态都会发出此信息号） |

其中，返回按键id的信号，在Qt5.15之后，就使用以下信号替代了，Qt5.15是过渡版本，之后版本和之前不兼容：

```c++
void buttonClicked(int);   -->   void idClicked(int);
void buttonPressed(int);   -->   void idPressed(int);
void buttonReleased(int);  -->   void idReleased(int);
void buttonToggled(int, bool);  -->  void idToggled(int, bool);
```



### 3. 示例

#### 1. 为按钮组添加按钮

```c++
// 创建按钮组对象
QButtonGroup* btnGroup = new QButtonGroup(this);

// 为按钮组添加三个按钮，并设置id（id可以不设置）
btnGroup->addButton(ui->radioButton, 0);
btnGroup->addButton(ui->radioButton_1, 1);
btnGroup->addButton(ui->radioButton_2, 2);
```

如果不设置id，函数默认传入的值为`-1`，此时函数为自动为按钮设置id，自动设置的id为负数且从`-2`开始。



#### 2. 为按钮设置id

```c++
btnGroup->setId(ui->radioButton, 0);
```

由于`addButton`函数的特性，这里设置id不能为`-1`（-1视为无效值），且建议使用正值。



#### 3. 按钮组中按钮的互斥状态

```c++
// 获取按钮组中按钮的互斥状态
btnGroup->exclusive();

// 设置按钮组中按钮的互斥状态
btnGroup->setExclusive(false);
```

如不设置，获取按钮组中按钮的互斥状态默认为`true`，即同组中所有按钮互斥。



#### 4. 获取组内所有按钮

```c++
QList<QAbstractButton*> btnList = btnGroup->buttons();
```

返回所有按钮的对象列表。



#### 5. 获取按钮点击信号，并作相应操作

```c++
// 连接信号和槽函数
connect(m_btnGroup, SIGNAL(idClicked(int)), this, SLOT(btnClicked(int)));
        
// 槽函数
void btnClicked(int btnId)
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
```







# 四、其他



## 3.2 QFlags![20221218220933](img/20221218220933.png)













