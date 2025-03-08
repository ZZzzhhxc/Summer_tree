/********************************************************************************
** Form generated from reading UI file 'updatepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEPASSWORD_H
#define UI_UPDATEPASSWORD_H

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

class Ui_updatepassword
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *submitButton;

    void setupUi(QWidget *updatepassword)
    {
        if (updatepassword->objectName().isEmpty())
            updatepassword->setObjectName(QStringLiteral("updatepassword"));
        updatepassword->resize(629, 208);
        label = new QLabel(updatepassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 141, 21));
        label_2 = new QLabel(updatepassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 100, 151, 21));
        lineEdit = new QLineEdit(updatepassword);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 40, 113, 31));
        lineEdit_2 = new QLineEdit(updatepassword);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 90, 113, 31));
        label_4 = new QLabel(updatepassword);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 50, 281, 21));
        submitButton = new QPushButton(updatepassword);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(220, 160, 80, 31));

        retranslateUi(updatepassword);

        QMetaObject::connectSlotsByName(updatepassword);
    } // setupUi

    void retranslateUi(QWidget *updatepassword)
    {
        updatepassword->setWindowTitle(QApplication::translate("updatepassword", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("updatepassword", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("updatepassword", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("updatepassword", "\357\274\210\345\255\227\346\257\215\343\200\201\346\225\260\345\255\227\345\220\214\346\227\266\345\255\230\345\234\250\357\274\214\344\270\2246-18\344\275\215\357\274\211", Q_NULLPTR));
        submitButton->setText(QApplication::translate("updatepassword", "\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updatepassword: public Ui_updatepassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEPASSWORD_H
