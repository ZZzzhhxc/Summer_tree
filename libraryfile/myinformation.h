#ifndef MYINFORMATION_H
#define MYINFORMATION_H
#include <QWidget>
#include <QtSql/QSqlTableModel>
#include <QButtonGroup>
namespace Ui {
class myinformation;
}
class myinformation : public QWidget
{
    Q_OBJECT
public:
    explicit myinformation(QWidget *parent = nullptr);
    ~myinformation();
private slots:
    void on_borrowButton_clicked();
    void on_refreshButton_clicked();
    void on_returnButton_clicked();
    void on_update_infor_Button_clicked();
void on_tableView_doubleClicked(const QModelIndex &index);
void on_change_password_Button_clicked();
void on_quitButton_clicked();


private:
    Ui::myinformation *ui;
    QSqlTableModel *model;
    QButtonGroup *BG;
    bool isid(int id);
    bool isid2(int id);
    void setTitle();
    void checkwarning2();
};
#endif // MYINFORMATION_H
