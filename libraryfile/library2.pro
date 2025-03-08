
QT       += core gui
QT +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = library2
TEMPLATE = app

#include <QSqlDatabase> //sql驱动基础
#include <QSqlQuery>//sql查询相关
#include <QSqlError>//sql输出错误

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
win32-msvc* {
    QMAKE_CXXFLAGS += /source-charset:utf-8 /execution-charset:utf-8
}

SOURCES += main.cpp\
        mainwindow.cpp \
    userinterface.cpp \
    myinformation.cpp \
    edit.cpp \
    login.cpp \
    updatepassword.cpp \
    tabviewdelegate.cpp

HEADERS  += mainwindow.h \
    login.h \
    userinterface.h \
    myinformation.h \
    edit.h \
    updatepassword.h \
    tabviewdelegate.h

FORMS    += mainwindow.ui \
    login.ui \
    userinterface.ui \
    myinformation.ui \
    edit.ui \
    updatepassword.ui


