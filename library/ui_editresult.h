/********************************************************************************
** Form generated from reading UI file 'editresult.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITRESULT_H
#define UI_EDITRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditResult
{
public:
    QLabel *label;
    QPushButton *returntologinButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *EditResult)
    {
        if (EditResult->objectName().isEmpty())
            EditResult->setObjectName(QStringLiteral("EditResult"));
        EditResult->resize(400, 300);
        label = new QLabel(EditResult);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 59, 91, 21));
        returntologinButton = new QPushButton(EditResult);
        returntologinButton->setObjectName(QStringLiteral("returntologinButton"));
        returntologinButton->setGeometry(QRect(90, 100, 81, 21));
        pushButton_2 = new QPushButton(EditResult);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 100, 81, 21));

        retranslateUi(EditResult);
        QObject::connect(pushButton_2, SIGNAL(clicked()), EditResult, SLOT(close()));

        QMetaObject::connectSlotsByName(EditResult);
    } // setupUi

    void retranslateUi(QWidget *EditResult)
    {
        EditResult->setWindowTitle(QApplication::translate("EditResult", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("EditResult", "      \346\263\250\345\206\214\346\210\220\345\212\237\357\274\201", Q_NULLPTR));
        returntologinButton->setText(QApplication::translate("EditResult", "\350\277\224\345\233\236\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("EditResult", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditResult: public Ui_EditResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITRESULT_H
