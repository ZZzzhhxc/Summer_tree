/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QPushButton *EditResultButton;
    QPushButton *quitButton;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_7;
    QLabel *label_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QComboBox *comboBox;

    void setupUi(QWidget *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QStringLiteral("edit"));
        edit->resize(662, 448);
        label = new QLabel(edit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 30, 41, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(edit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 80, 41, 31));
        label_2->setFont(font);
        lineEdit = new QLineEdit(edit);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(230, 30, 113, 31));
        lineEdit_2 = new QLineEdit(edit);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 80, 113, 31));
        label3 = new QLabel(edit);
        label3->setObjectName(QStringLiteral("label3"));
        label3->setGeometry(QRect(140, 180, 41, 31));
        label3->setFont(font);
        lineEdit_3 = new QLineEdit(edit);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(230, 180, 113, 31));
        lineEdit_6 = new QLineEdit(edit);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(230, 340, 113, 31));
        label4 = new QLabel(edit);
        label4->setObjectName(QStringLiteral("label4"));
        label4->setGeometry(QRect(140, 230, 41, 31));
        label4->setFont(font);
        label5 = new QLabel(edit);
        label5->setObjectName(QStringLiteral("label5"));
        label5->setGeometry(QRect(140, 280, 41, 31));
        label5->setFont(font);
        label6 = new QLabel(edit);
        label6->setObjectName(QStringLiteral("label6"));
        label6->setGeometry(QRect(140, 330, 41, 31));
        label6->setFont(font);
        EditResultButton = new QPushButton(edit);
        EditResultButton->setObjectName(QStringLiteral("EditResultButton"));
        EditResultButton->setGeometry(QRect(170, 390, 80, 31));
        EditResultButton->setFont(font);
        quitButton = new QPushButton(edit);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(350, 390, 80, 31));
        quitButton->setFont(font);
        label_3 = new QLabel(edit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 30, 141, 21));
        label_4 = new QLabel(edit);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 80, 281, 21));
        lineEdit_7 = new QLineEdit(edit);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(230, 130, 113, 31));
        label_5 = new QLabel(edit);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 130, 81, 31));
        label_5->setFont(font);
        radioButton = new QRadioButton(edit);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(230, 240, 69, 21));
        radioButton_2 = new QRadioButton(edit);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(320, 240, 69, 21));
        comboBox = new QComboBox(edit);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(230, 290, 111, 31));

        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QWidget *edit)
    {
        edit->setWindowTitle(QApplication::translate("edit", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("edit", "\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("edit", "\345\257\206\347\240\201", Q_NULLPTR));
        label3->setText(QApplication::translate("edit", "\345\247\223\345\220\215", Q_NULLPTR));
        label4->setText(QApplication::translate("edit", "\346\200\247\345\210\253", Q_NULLPTR));
        label5->setText(QApplication::translate("edit", "\345\255\246\351\231\242", Q_NULLPTR));
        label6->setText(QApplication::translate("edit", "\345\271\264\347\272\247", Q_NULLPTR));
        EditResultButton->setText(QApplication::translate("edit", "\346\263\250\345\206\214", Q_NULLPTR));
        quitButton->setText(QApplication::translate("edit", "\351\200\200\345\207\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("edit", "\357\274\21013\344\275\215\346\225\260\345\255\227\357\274\211", Q_NULLPTR));
        label_4->setText(QApplication::translate("edit", "\357\274\210\345\255\227\346\257\215\343\200\201\346\225\260\345\255\227\345\220\214\346\227\266\345\255\230\345\234\250\357\274\214\344\270\2246-18\344\275\215\357\274\211", Q_NULLPTR));
        label_5->setText(QApplication::translate("edit", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        radioButton->setText(QApplication::translate("edit", "\345\245\263", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("edit", "\347\224\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
