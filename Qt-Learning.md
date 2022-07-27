## 一、开始的开始

### 1.1 安装软件



### 1.2 新建工程-HelloWorld

万事开头 hello world，Qt 的 hello world 就是创建一个项目并运行显示窗口。

使用 Qt Creator 4.11.0，新版本可能界面不一样，但流程大同小异。

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



### 1.3 认识工程与软件

#### 1.3.1 认识工程

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



##### 1.3.1.1 .pro文件内容解释

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





##### 1.3.1.2 其他文件内容解释





#### 1.3.2 认识Qt Creator

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



##### 1.3.2.1 模式选择

![qtcreator-mode-selector](img/qtcreator-mode-selector.png)

从上往下各模式依次为：欢迎模式、编辑模式、设计模式、调试模式、项目模式、帮助模式，第一次打开Qt Creator默认选择欢迎模式，欢迎模式中默认选择项目（Projects）。



###### 欢迎模式

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



###### 编辑模式

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



###### 设计模式

如果没有打开ui文件，设计模式默认不能用，打开ui文件，界面会自动跳转到设计模式：

![Screenshot from 2022-07-23 21-39-42](img/Screenshot%20from%202022-07-23%2021-39-42.png)

其中，

1.   控件区：包含一些常用的ui控件；
2.   编辑区：用于设计ui界面，可以将1中的控件拖到此区域；
3.   对象查看区：可以查看控件对象的父子关系及一些简单信息；
4.   动作、信号、槽编译区：可以编辑指定动作及相应控件的信号与槽；
5.   控件属性编译区：编辑指定控件的属性；



###### 调试模式

![Screenshot from 2022-07-24 16-45-36](img/Screenshot%20from%202022-07-24%2016-45-36-16586524434452.png)

调试代码运行过程中的数据等，细节待补。



###### 项目模式

![Screenshot from 2022-07-24 16-54-07](img/Screenshot%20from%202022-07-24%2016-54-07.png)

配置项目相关的构建运行、编辑器、代码风格、依赖关系等。



###### 帮助模式

![Screenshot from 2022-07-24 16-59-38](img/Screenshot%20from%202022-07-24%2016-59-38.png)

在右上角的显示内容里默认显示目录(Contents)，还可以选择书签(Bookmarks)、索引(Index)、搜索(Search)等。

如果选择搜索，可以查找Qt相关函数、类、枚举等的解释。



##### 1.3.2.2 构建套件选择

![20220723222807](img/20220723222807.png)

包括Debug、Profile、Release，他们的区别如下：

|  配置   |                    描述                    |
| :-----: | :----------------------------------------: |
|  Debug  |         带调试信息，编译时不做优化         |
| Profile |        带调试信息，编译时做一定优化        |
| Release | 不带调试信息，根据优化选项做不同程度的优化 |



##### 1.3.4.3 qmake生成makefile过程





## 二、控件

### 2.1 控件组介绍

<img src="img/2022-07-27_22-08.png" alt="2022-07-27_22-08" style="zoom:150%;" />

控件分8个组，分别为：

|           控件组            |              描述              |
| :-------------------------: | :----------------------------: |
|           Layouts           |   布局：控制控件在窗口的布局   |
|           Spacers           | 间隔：辅助控制控件在窗口的布局 |
|           Buttons           |       按钮：按钮相关控件       |
|  Item Views（Model-Based）  |            项目视图            |
| Item Widgets（Model-Based） |            项目组件            |
|         Containers          |    容器：可以存放控件的控件    |
|        Input Widgets        |     输入组件：输入相关控件     |
|       Display Widgets       |     显示组件：显示相关控件     |



### 2.2 按钮组件(Buttons)



![Battons](img/Battons.png)



|        控件         |     描述     |
| :-----------------: | :----------: |
|     Push Button     |   普通按钮   |
|     Tool Button     |   工具按钮   |
|    Radio Button     |    单选框    |
|      Check Box      |    复选框    |
| Command Link Button | 命令连接按钮 |
|  Dialog Button Box  |  对话框按钮  |





























