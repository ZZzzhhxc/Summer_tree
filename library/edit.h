#ifndef EDIT_H
#define EDIT_H
#include <QWidget>
#include <QtSql/QSqlTableModel>
#include <QSqlQuery>
#include <QObject>
#include <QButtonGroup>
namespace Ui {
class edit;
}
class edit : public QWidget
{
    Q_OBJECT
public:
    explicit edit(QWidget *parent = nullptr);
    static bool ispassword(QString &str);
    static bool iscard(QString &str);
static bool isonly(QString str);
 void setComboBox();
    ~edit();
private slots:
void on_EditResultButton_clicked();
void on_quitButton_clicked();
private:
    Ui::edit *ui;
    QButtonGroup *BG;
};
#endif // EDIT_H
