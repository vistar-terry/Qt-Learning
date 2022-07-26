## 一、开始的开始

### 1.1 安装软件



### 1.2 新建工程-HelloWorld





### 1.3 认识工程与软件

#### 1.3.1 认识Qt Creator

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



#### 1.3.2 模式选择

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
5.   控件属性编译区：编辑指定控件的属性；



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



#### 1.3.3 构建套件选择

![20220723222807](img/20220723222807.png)

包括Debug、Profile、Release，他们的区别如下：

|  配置   |                    描述                    |
| :-----: | :----------------------------------------: |
|  Debug  |         带调试信息，编译时不做优化         |
| Profile |        带调试信息，编译时做一定优化        |
| Release | 不带调试信息，根据优化选项做不同程度的优化 |



#### 1.3.4 认识工程

新建的工程目录有如下几个文件：

![20220720223533](img/20220720223533.png)

QtCreator软件将他们做了如下分组，包含三个文件夹和一个.pro文件：

![20220720222519](img/20220720222519.png)



他们的作用分别为：

-   .pro文件：项目文件，定义项目相关信息，是`qmake`用来生成`makefile`文件的中间文件；
-   .pro.user文件：定义与用户相关的项目信息；
-   /Headers文件夹：存放头文件；
-   /Sources文件夹：存放源文件；
-   /Forms文件夹：存放ui文件；



##### 1.3.4.1 .pro文件内容解释

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





##### 1.3.4.2 其他文件内容解释



##### 1.3.4.3 qmake生成makefile过程



## 二、控件

### 2.1 控件介绍

























