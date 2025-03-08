#ifndef UPDATEPASSWORD_H
#define UPDATEPASSWORD_H
#include <QWidget>
#include <QSqlTableModel>
namespace Ui {
class updatepassword;
}
class updatepassword : public QWidget
{
    Q_OBJECT
public:
    explicit updatepassword(QWidget *parent = 0);
    ~updatepassword();
private slots:
void on_submitButton_clicked();
void on_quitButton_clicked();
private:
    Ui::updatepassword *ui;
};
#endif // UPDATEPASSWORD_H
