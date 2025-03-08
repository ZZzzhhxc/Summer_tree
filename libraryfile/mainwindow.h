#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QSqlDatabase>
#include <QMainWindow>
#include <QtSql/QSqlTableModel>
#include <QSqlQuery>
#include <QItemDelegate>
namespace Ui {
class MainWindow;
class ReadOnlyDelegate;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_updateButton_clicked();
    void on_updateButton2_clicked();
    void on_addButton2_clicked();
    void on_deleteButton2_clicked();
    void on_searshButton_clicked();
    void on_searshButton_2_clicked();
    void on_showallButton_clicked();
    void on_showallButton_2_clicked();
    void on_searchButton_3_clicked();
    void on_checkaddButton_clicked();
void on_checkaddButton_2_clicked();
void on_quitButton_clicked();
//void on_tableView_doubleClicked(const QModelIndex &index);
//void on_tableView_2_doubleClicked(const QModelIndex &index);






private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlTableModel *model2;
    void setTitle();
};
class ReadOnlyDelegate: public QItemDelegate
{
public:
    ReadOnlyDelegate(QWidget *parent = NULL):QItemDelegate(parent)
    {}
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,const QModelIndex &index) const override //final
    {
        Q_UNUSED(parent)
        Q_UNUSED(option)
        Q_UNUSED(index)
        return NULL;
    }
};
#endif // MAINWINDOW_H
