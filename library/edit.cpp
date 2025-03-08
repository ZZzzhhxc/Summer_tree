#include "edit.h"
#include "ui_edit.h"
#include <QDebug>
#include <QMessageBox>
#include <QByteArray>
#include <QtCore/QChar>
#include <QComboBox>
edit::edit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("注册"));
    BG=new QButtonGroup(this);
    setComboBox();
}
edit::~edit()
{
    delete ui;
}
void edit::on_EditResultButton_clicked()
{
    QString number=ui->lineEdit->text();
    QString password=ui->lineEdit_2->text();
    QString password2=ui->lineEdit_7->text();
    QString name=ui->lineEdit_3->text();
    QString sex;
    QString department=ui->comboBox->currentText();
    QString grade=ui->lineEdit_6->text();
    QSqlQuery query;
    QString n;
    BG->addButton(ui->radioButton,0);
    BG->addButton(ui->radioButton_2,1);
    switch (BG->checkedId()) {
    case 0:
        sex="女";
        break;
    case 1:
        sex="男";
        break;
    }
if(!iscard(number))
{
        QMessageBox::warning(NULL,"注册失败","您的证号不符合规定，请重新输入 ！");
    }
    else{
        if(!ispassword(password))
{
            QMessageBox::warning(NULL,"注册失败","您的密码不符合规定，请重新输入 ！");
        }
        else{
            if(QString::compare(password,password2)!=0){
                QMessageBox::warning(NULL,"注册失败","两次密码输入不相同 ！");
            }
            else{
                QString InsertStr=QString("insert into users(number,password,name,sex,department,grade,warning)"
                                          "values('%1','%2','%3','%4','%5','%6','no')").arg(number)
                        .arg(password).arg(name).arg(sex).arg(department).arg(grade);
                qDebug()<<InsertStr;
                if(number!=NULL&&password!=NULL&&name!=NULL&&sex!=NULL&&department!=NULL&&grade!=NULL)
                {
                    if(isonly(number))
                    {
                        if(query.exec(InsertStr)){
                            QMessageBox::information(NULL,"注册成功","注册成功！",QMessageBox::Ok);
                            this->close();
                        }
                        else
                            QMessageBox::warning(NULL,"注册失败","注册失败，请稍后重试！");
                    }
                    else
                    {
                        QMessageBox::warning(NULL,"注册失败","该用户已存在 ！");
                    }
                }
                else
                {
                    QMessageBox::warning(NULL,"注册失败","信息不能为空 ！");
                }
            }
        }
    }
}
bool edit::ispassword(QString &str)
{
    int count=str.count();
    int count_l=0,count_n=0;
    bool result;
    for(int i=0;i<count;i++){
        QChar qchar=str.at(i);
        if(qchar.isDigit()){
           count_n++;
        }
        else if(qchar.isLetter()){
            count_l++;
        }
    }
    if(count_l!=0&&count_n!=0&&(count_l+count_n==count)&&count>=6&&count<=18)
        result=true;
    else
        result=false;
    return result;
}
bool edit::iscard(QString &str)
{
    bool result;
    int count=str.count(),count_n=0;
    for(int i=0;i<count;i++){
        QChar qchar=str.at(i);
        if(qchar.isDigit()){
           count_n++;
        }
    }
    if(count_n==13)
        result=true;
    else
        result=false;
    return result;
}
bool edit::isonly(QString str)
{
    QString sql=QString("select * from users where number='%1'").arg(str),n;
    QSqlQuery query;
    bool result;
    query.exec(sql);
while(query.next())
{
        n=query.value(1).toString();
    }
    if(n==NULL)
        result=true;
    else
        result=false;
    return result;
}
void edit::on_quitButton_clicked()
{
    if (!(QMessageBox::information(this,tr("退出 "),tr("确定退出吗 ?"),tr("Yes "),tr("No "))))
    {
        this->close();
    }
}
void edit::setComboBox()
{
ui->comboBox->addItem(" ");
    ui->comboBox->addItem("化学学院 ");
    ui->comboBox->addItem("历史文化学院");
    ui->comboBox->addItem("经济学院 ");
    ui->comboBox->addItem("机械工程学院 ");
    ui->comboBox->addItem("物理学院 ");
    ui->comboBox->addItem("电气工程学院 ");
    ui->comboBox->addItem("马克思主义学院 ");
    ui->comboBox->addItem("水利水电学院 ");
    ui->comboBox->addItem("材料科学与工程学院 ");
    ui->comboBox->addItem("化学工程学院 ");
    ui->comboBox->addItem("外国语学院");
    ui->comboBox->addItem("公共管理学院 ");
    ui->comboBox->addItem("信息学院 ");

}
