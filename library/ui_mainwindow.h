/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QGroupBox *groupBox;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *searshButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *showallButton;
    QPushButton *checkaddButton;
    QWidget *tab_2;
    QTableView *tableView_2;
    QPushButton *addButton2;
    QPushButton *deleteButton2;
    QPushButton *updateButton2;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QPushButton *searshButton_2;
    QPushButton *showallButton_2;
    QPushButton *searchButton_3;
    QPushButton *checkaddButton_2;
    QPushButton *exitButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(890, 708);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, 40, 791, 531));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 791, 271));
        addButton = new QPushButton(tab);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(550, 300, 91, 31));
        updateButton = new QPushButton(tab);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(670, 300, 91, 31));
        deleteButton = new QPushButton(tab);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(550, 400, 91, 31));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 280, 531, 181));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 40, 71, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 90, 71, 31));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(90, 40, 113, 31));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(90, 90, 113, 31));
        searshButton = new QPushButton(groupBox);
        searshButton->setObjectName(QStringLiteral("searshButton"));
        searshButton->setGeometry(QRect(390, 130, 85, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 30, 131, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 60, 111, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 301, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"\344\273\277\345\256\213\";"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 30, 41, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 60, 41, 21));
        showallButton = new QPushButton(tab);
        showallButton->setObjectName(QStringLiteral("showallButton"));
        showallButton->setGeometry(QRect(670, 350, 91, 31));
        checkaddButton = new QPushButton(tab);
        checkaddButton->setObjectName(QStringLiteral("checkaddButton"));
        checkaddButton->setGeometry(QRect(550, 350, 91, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, 0, 791, 271));
        addButton2 = new QPushButton(tab_2);
        addButton2->setObjectName(QStringLiteral("addButton2"));
        addButton2->setGeometry(QRect(360, 290, 91, 31));
        deleteButton2 = new QPushButton(tab_2);
        deleteButton2->setObjectName(QStringLiteral("deleteButton2"));
        deleteButton2->setGeometry(QRect(360, 370, 91, 31));
        updateButton2 = new QPushButton(tab_2);
        updateButton2->setObjectName(QStringLiteral("updateButton2"));
        updateButton2->setGeometry(QRect(470, 330, 85, 31));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 280, 321, 161));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 30, 61, 21));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 80, 41, 21));
        lineEdit_9 = new QLineEdit(groupBox_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(140, 20, 113, 31));
        lineEdit_10 = new QLineEdit(groupBox_2);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(140, 70, 113, 31));
        searshButton_2 = new QPushButton(groupBox_2);
        searshButton_2->setObjectName(QStringLiteral("searshButton_2"));
        searshButton_2->setGeometry(QRect(110, 120, 85, 31));
        showallButton_2 = new QPushButton(tab_2);
        showallButton_2->setObjectName(QStringLiteral("showallButton_2"));
        showallButton_2->setGeometry(QRect(470, 370, 80, 31));
        searchButton_3 = new QPushButton(tab_2);
        searchButton_3->setObjectName(QStringLiteral("searchButton_3"));
        searchButton_3->setGeometry(QRect(470, 290, 171, 31));
        checkaddButton_2 = new QPushButton(tab_2);
        checkaddButton_2->setObjectName(QStringLiteral("checkaddButton_2"));
        checkaddButton_2->setGeometry(QRect(360, 330, 91, 31));
        tabWidget->addTab(tab_2, QString());
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(430, 590, 80, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 890, 17));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(addButton, SIGNAL(clicked()), MainWindow, SLOT(addbutton_clicked()));
        QObject::connect(deleteButton, SIGNAL(clicked()), MainWindow, SLOT(deletebutton_clicked()));
        QObject::connect(updateButton, SIGNAL(clicked()), MainWindow, SLOT(updatebutton_clicked()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        addButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\260\345\275\225", Q_NULLPTR));
        updateButton->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\344\271\246\347\261\215\345\220\215\347\247\260", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\344\271\246\347\261\215\344\275\234\350\200\205", Q_NULLPTR));
        searshButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\257\245\347\247\215\347\261\273\344\271\246\347\261\215\346\200\273\346\225\260\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\234\250\351\246\206\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\263\250\357\274\232\344\273\205\345\275\223\344\271\246\347\261\215\345\220\215\347\247\260\344\270\215\344\270\272\347\251\272\346\227\266\357\274\214\346\211\215\344\274\232\346\230\276\347\244\272\350\257\245\347\247\215\347\261\273\344\271\246\347\261\215\346\200\273\346\225\260\345\222\214\345\234\250\351\246\206\346\225\260\351\207\217\343\200\202", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "(...)", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "(...)", Q_NULLPTR));
        showallButton->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        checkaddButton->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\346\267\273\345\212\240", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\344\271\246\347\261\215\344\277\241\346\201\257", Q_NULLPTR));
        addButton2->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\260\345\275\225", Q_NULLPTR));
        deleteButton2->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", Q_NULLPTR));
        updateButton2->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244\344\277\256\346\224\271", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\231\256\351\200\232\346\237\245\350\257\242", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\351\231\242\347\263\273\345\220\215", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\345\271\264\347\272\247", Q_NULLPTR));
        searshButton_2->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\237\245\350\257\242", Q_NULLPTR));
        showallButton_2->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        searchButton_3->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\346\234\211\350\266\205\346\234\237\346\234\252\350\277\230\344\271\246\350\256\260\345\275\225\347\232\204\347\224\250\346\210\267", Q_NULLPTR));
        checkaddButton_2->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244\346\267\273\345\212\240", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        exitButton->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
