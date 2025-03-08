#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include <QWidget>
#include <QtSql/QSqlTableModel>
namespace Ui {
class userinterface;
}
class userinterface : public QWidget
{
    Q_OBJECT
public:
    explicit userinterface(QWidget *parent = 0);
    ~userinterface();
private slots:
    void on_myinformationButton_clicked();
    void on_searchButton_clicked();
    void on_search_exist_Button_clicked();
    void on_showAllButton_clicked();
void on_tableView_doubleClicked(const QModelIndex &index);



void on_exitButton_clicked();

private:
    Ui::userinterface *ui;
    QSqlTableModel *model;
    void setTitle();
};
#endif // USERINTERFACE_H
