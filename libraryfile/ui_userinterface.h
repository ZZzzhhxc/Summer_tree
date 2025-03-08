/********************************************************************************
** Form generated from reading UI file 'userinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userinterface
{
public:
    QTableView *tableView;
    QPushButton *exitButton;
    QPushButton *myinformationButton;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QPushButton *searchButton;
    QPushButton *showAllButton;
    QPushButton *search_exist_Button;

    void setupUi(QWidget *userinterface)
    {
        if (userinterface->objectName().isEmpty())
            userinterface->setObjectName(QStringLiteral("userinterface"));
        userinterface->resize(585, 451);
        tableView = new QTableView(userinterface);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 20, 521, 261));
        exitButton = new QPushButton(userinterface);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(480, 350, 80, 31));
        myinformationButton = new QPushButton(userinterface);
        myinformationButton->setObjectName(QStringLiteral("myinformationButton"));
        myinformationButton->setGeometry(QRect(480, 310, 80, 31));
        groupBox = new QGroupBox(userinterface);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 290, 421, 151));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 81, 21));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 20, 113, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 81, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 60, 113, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 291, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"\344\273\277\345\256\213\";"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 20, 81, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 20, 61, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 60, 61, 21));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 60, 61, 21));
        searchButton = new QPushButton(groupBox);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(330, 100, 80, 31));
        showAllButton = new QPushButton(groupBox);
        showAllButton->setObjectName(QStringLiteral("showAllButton"));
        showAllButton->setGeometry(QRect(330, 20, 80, 31));
        search_exist_Button = new QPushButton(groupBox);
        search_exist_Button->setObjectName(QStringLiteral("search_exist_Button"));
        search_exist_Button->setGeometry(QRect(330, 60, 80, 31));

        retranslateUi(userinterface);

        QMetaObject::connectSlotsByName(userinterface);
    } // setupUi

    void retranslateUi(QWidget *userinterface)
    {
        userinterface->setWindowTitle(QApplication::translate("userinterface", "Form", Q_NULLPTR));
        exitButton->setText(QApplication::translate("userinterface", "\351\200\200\345\207\272", Q_NULLPTR));
        myinformationButton->setText(QApplication::translate("userinterface", "\344\270\252\344\272\272\344\270\255\345\277\203", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("userinterface", "\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("userinterface", "\344\271\246\347\261\215\345\220\215\347\247\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("userinterface", "\344\271\246\347\261\215\344\275\234\350\200\205", Q_NULLPTR));
        label_3->setText(QApplication::translate("userinterface", "\346\263\250\357\274\232\344\273\205\345\275\223\344\271\246\347\261\215\345\220\215\347\247\260\344\270\215\344\270\272\347\251\272\346\227\266\357\274\214\346\211\215\344\274\232\346\230\276\347\244\272\350\257\245\347\247\215\347\261\273\344\271\246\347\261\215\346\200\273\346\225\260\345\222\214\345\234\250\351\246\206\346\225\260\351\207\217\343\200\202", Q_NULLPTR));
        label_4->setText(QApplication::translate("userinterface", "\350\257\245\347\247\215\347\261\273\344\271\246\347\261\215\346\200\273\346\225\260\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("userinterface", "\357\274\210...\357\274\211", Q_NULLPTR));
        label_5->setText(QApplication::translate("userinterface", "\345\234\250\351\246\206\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("userinterface", "\357\274\210...\357\274\211", Q_NULLPTR));
        searchButton->setText(QApplication::translate("userinterface", "\345\274\200\345\247\213\346\237\245\350\257\242", Q_NULLPTR));
        showAllButton->setText(QApplication::translate("userinterface", "\346\230\276\347\244\272\345\205\250\350\241\250", Q_NULLPTR));
        search_exist_Button->setText(QApplication::translate("userinterface", "\346\237\245\350\257\242\346\211\200\346\234\211\345\234\250\351\246\206\344\271\246\347\261\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class userinterface: public Ui_userinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
