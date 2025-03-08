#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <mainwindow.h>
#include "userinterface.h"
#include "edit.h"
#include <QLineEdit>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("登录"));
}
login::~login()
{
    delete ui;
}
QString login::number;
int login::id;
void login::on_loginButton_clicked()
{
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    login::number=ui->lineEdit->text();
    QString password=ui->lineEdit_2->text();
    QSqlQuery query;
    if(login::number.length()!=0&&password.length()!=0){
        QString instruction=QString("select password from users where number='%1'").arg(login::number);
        query.exec(instruction);
        while(query.next())
        {
            if(login::number=="123456789"&&password=="a123456"){//可以自己更改管理员的账号和密码
                this->close();
                MainWindow* w=new MainWindow();
                w->show();
                break;
            }
            else if(login::number!="0000"&&query.value(0).toString()==password){
                this->close();
                //userinterface* w2=new  userinterface(); w2->show();
                MainWindow* w=new MainWindow(); w->show();

                break;
            }
            else{
                QMessageBox::information(this, "登录失败 ", "用户名或者密码错误 ");
                break;
            }
        }
    }
    else{
        QMessageBox::warning(this,"登录失败","不能为空！");
    }
    QString getId=QString("select id from users where number='%1'").arg(login::number);
    query.exec(getId);
    while(query.next()){
        login::id=query.value(0).toInt();
    }

}
void login::on_EditButton_clicked()
{
    edit *w =new edit();
    w->show();
}
void login::on_exitButton_clicked()
{
    if (!(QMessageBox::information(this,tr("退出"),tr("确定退出吗?"),tr("Yes"),tr("No"))))
    {
        this->close();
    }
}



