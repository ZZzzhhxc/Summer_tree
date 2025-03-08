#ifndef LOGIN_H
#define LOGIN_H
#include <QWidget>
namespace Ui {
class login;
}
class login : public QWidget
{
    Q_OBJECT
public:
    explicit login(QWidget *parent = nullptr);
    static QString number;
    static int id;

    ~login();
private slots:
    void on_loginButton_clicked();
void on_EditButton_clicked();
void on_exitButton_clicked();



private:
    Ui::login *ui;
};
#endif // LOGIN_H
