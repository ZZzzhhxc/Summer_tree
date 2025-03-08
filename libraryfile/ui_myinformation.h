/********************************************************************************
** Form generated from reading UI file 'myinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYINFORMATION_H
#define UI_MYINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myinformation
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *borrowButton;
    QPushButton *returnButton;
    QPushButton *refreshButton;
    QLabel *label_9;
    QWidget *tab_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *update_infor_Button;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *change_password_Button;
    QLabel *label_10;
    QPushButton *quitButton;

    void setupUi(QWidget *myinformation)
    {
        if (myinformation->objectName().isEmpty())
            myinformation->setObjectName(QStringLiteral("myinformation"));
        myinformation->resize(585, 457);
        tabWidget = new QTabWidget(myinformation);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 0, 541, 391));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 541, 192));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 220, 211, 21));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(230, 210, 113, 31));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 260, 201, 21));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 250, 113, 31));
        borrowButton = new QPushButton(tab);
        borrowButton->setObjectName(QStringLiteral("borrowButton"));
        borrowButton->setGeometry(QRect(360, 210, 80, 31));
        returnButton = new QPushButton(tab);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(360, 250, 80, 31));
        refreshButton = new QPushButton(tab);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setGeometry(QRect(450, 210, 80, 31));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 300, 391, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 30, 41, 21));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 110, 41, 21));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 70, 41, 21));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 150, 41, 21));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 190, 41, 21));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 230, 41, 21));
        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(260, 20, 113, 31));
        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(260, 60, 113, 31));
        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(260, 100, 113, 31));
        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(260, 180, 113, 31));
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(260, 220, 113, 31));
        update_infor_Button = new QPushButton(tab_2);
        update_infor_Button->setObjectName(QStringLiteral("update_infor_Button"));
        update_infor_Button->setGeometry(QRect(170, 320, 80, 31));
        radioButton = new QRadioButton(tab_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(260, 150, 69, 21));
        radioButton_2 = new QRadioButton(tab_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(350, 150, 69, 21));
        change_password_Button = new QPushButton(tab_2);
        change_password_Button->setObjectName(QStringLiteral("change_password_Button"));
        change_password_Button->setGeometry(QRect(290, 320, 80, 31));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(180, 270, 291, 21));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        tabWidget->addTab(tab_2, QString());
        quitButton = new QPushButton(myinformation);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(380, 410, 80, 31));

        retranslateUi(myinformation);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(myinformation);
    } // setupUi

    void retranslateUi(QWidget *myinformation)
    {
        myinformation->setWindowTitle(QApplication::translate("myinformation", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("myinformation", "\350\257\267\350\276\223\345\205\245\346\202\250\346\203\263\350\246\201\345\200\237\347\232\204\344\271\246\347\261\215\345\272\217\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("myinformation", "\350\257\267\350\276\223\345\205\245\346\202\250\346\203\263\350\246\201\350\277\230\347\232\204\344\271\246\350\256\260\345\272\217\345\217\267", Q_NULLPTR));
        borrowButton->setText(QApplication::translate("myinformation", "\345\200\237\344\271\246", Q_NULLPTR));
        returnButton->setText(QApplication::translate("myinformation", "\350\277\230\344\271\246", Q_NULLPTR));
        refreshButton->setText(QApplication::translate("myinformation", "\345\210\267\346\226\260", Q_NULLPTR));
        label_9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("myinformation", "\346\210\221\345\200\237\347\232\204\344\271\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("myinformation", "\350\264\246\345\217\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("myinformation", "\345\247\223\345\220\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("myinformation", "\345\257\206\347\240\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("myinformation", "\346\200\247\345\210\253", Q_NULLPTR));
        label_7->setText(QApplication::translate("myinformation", "\351\231\242\347\263\273", Q_NULLPTR));
        label_8->setText(QApplication::translate("myinformation", "\345\271\264\347\272\247", Q_NULLPTR));
        update_infor_Button->setText(QApplication::translate("myinformation", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
        radioButton->setText(QApplication::translate("myinformation", "\345\245\263", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("myinformation", "\347\224\267", Q_NULLPTR));
        change_password_Button->setText(QApplication::translate("myinformation", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_10->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("myinformation", "\346\210\221\347\232\204\344\277\241\346\201\257", Q_NULLPTR));
        quitButton->setText(QApplication::translate("myinformation", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myinformation: public Ui_myinformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYINFORMATION_H
