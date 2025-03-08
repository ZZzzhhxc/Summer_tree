/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *loginButton;
    QPushButton *exitButton;
    QPushButton *EditButton;
    QLabel *label_3;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(524, 340);
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 50, 41, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 110, 41, 31));
        label_2->setFont(font);
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(242, 50, 161, 31));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(242, 110, 161, 31));
        loginButton = new QPushButton(login);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(180, 180, 80, 31));
        loginButton->setFont(font);
        exitButton = new QPushButton(login);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(350, 180, 80, 31));
        exitButton->setFont(font);
        EditButton = new QPushButton(login);
        EditButton->setObjectName(QStringLiteral("EditButton"));
        EditButton->setGeometry(QRect(350, 230, 80, 31));
        EditButton->setFont(font);
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 230, 91, 41));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("login", "\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201", Q_NULLPTR));
        loginButton->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        exitButton->setText(QApplication::translate("login", "\351\200\200\345\207\272", Q_NULLPTR));
        EditButton->setText(QApplication::translate("login", "\346\263\250\345\206\214", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "\350\213\245\346\234\252\346\263\250\345\206\214\350\264\246\346\210\267\357\274\214\n"
"\350\257\267\345\205\210\346\263\250\345\206\214\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
