#include "updatepassword.h"
#include "ui_updatepassword.h"
#include "login.h"
#include <QMessageBox>
#include <QDebug>
#include "edit.h"
#include <QSqlQuery>
updatepassword::updatepassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updatepassword)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("修改密码"));
}
updatepassword::~updatepassword()
{
    delete ui;
}
void updatepassword::on_submitButton_clicked()
{
    QString password=ui->lineEdit->text();
    QString password2=ui->lineEdit_2->text();
    QSqlQuery query;
    if(edit::ispassword(password)){
        if(password==password2){
            QString sql=QString("update users set password='%1' where number='%2'").arg(password).arg(login::number);
            qDebug()<<sql;
            if(query.exec(sql)){
                QMessageBox::information(NULL,"密码修改成功","密码修改成功  ！");
                this->close();
            }
            else{
                QMessageBox::warning(NULL,"修改失败","数据库出错！");
            }
        }
        else{
            QMessageBox::warning(NULL,"修改失败","两次输入不相同！");
        }
    }
    else{
        QMessageBox::warning(NULL,"修改失败","密码格式不符合规定！");
}
}
void updatepassword::on_quitButton_clicked()
{
if (!(QMessageBox::information(this,tr("退出"),tr("确定退出吗?"),tr("Yes"),tr("No")))){
        this->close();
    }
}
