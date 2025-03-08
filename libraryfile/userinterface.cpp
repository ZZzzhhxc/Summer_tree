#include "userinterface.h"
#include "ui_userinterface.h"
#include "myinformation.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QTableView>
#include <QSqlQuery>
#include <QDebug>
#include <QDateTime>
#include "tabviewdelegate.h"
userinterface::userinterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userinterface)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("多功能书籍管理系统 "));
    model = new QSqlTableModel(this);
    model->setTable("books");
    setTitle();
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->verticalHeader()->setVisible(false);
    tabviewDelegate *textedit = new tabviewDelegate(this);
    textedit->type = "introduction";
    ui->tableView->setItemDelegateForColumn(6,textedit);
    ui->tableView->setColumnWidth(4,110);
    ui->tableView->setColumnWidth(6,150);
}
userinterface::~userinterface()
{
    delete ui;
}
void userinterface::on_myinformationButton_clicked()
{
    myinformation*w =new myinformation();
    w->show();
}
void userinterface::on_searchButton_clicked()
{
    QString name = ui->lineEdit->text();
    QString author=ui->lineEdit_2->text();
    QSqlQuery query;
    int count=0,count2=0;
    if(name.length()!=0&&author.length()==0){
        model->setFilter(QString("name like '%%1%'").arg(name));
        model->select();
        QString sql=QString("select * from books where name like '%%1%'").arg(name);
        query.exec(sql);
        while(query.next())
        {
            count++;
            if(query.value(7).toString()=="未借出"){
                count2++;
            }

        }
        //QString str = QString::number(tmp);
        QString str_count=QString::number(count);
        QString str_count2=QString::number(count2);
        ui->label_6->setText(str_count);
        ui->label_7->setText(str_count2);
    }else if(author.length()!=0&&name.length()==0){
        model->setFilter(QString("author like '%%2%'").arg(author));
        model->select();
        QString str_count=QString::number(count);
        QString str_count2=QString::number(count2);
        ui->label_6->setText(str_count);
        ui->label_7->setText(str_count2);
    }else if(name.length()!=0&&author.length()!=0){
        model->setFilter(QString("name like '%%1%' && author like '%%2%'").arg(name).arg(author));
        model->select();
        QString sql=QString("select * from books where name like '%%1%'&& author like '%%2%'").arg(name).arg(author);
        query.exec(sql);
        while(query.next())
        {
            count++;
            if(query.value(7).toString()=="未借出"){
                count2++;
            }

        }
        QString str_count=QString::number(count);
        QString str_count2=QString::number(count2);
        ui->label_6->setText(str_count);
        ui->label_7->setText(str_count2);
    }
    else
    { QMessageBox::warning(this, tr("Warning"),tr("不能两者都为空") );
    }
}
void userinterface::on_search_exist_Button_clicked()
{
    model->setFilter("status='未借出'");
    model->select();
}
void userinterface::on_showAllButton_clicked()
{
    model->setTable("books");
    setTitle();
    model->select();
}
void userinterface::on_tableView_doubleClicked(const QModelIndex &index)
{
    int curRow=ui->tableView->currentIndex().row();//选中行
    QAbstractItemModel *modessl = ui->tableView->model();
    QModelIndex indextemp;
    QVariant data;
    QString infor[8];
    QDateTime datetime;
    QString datetime_str;
    for(int i=0;i<8;i++){
        indextemp=modessl->index(curRow,i);
        data=modessl->data(indextemp);
        if(i!=4)
            infor[i]=data.toString();
        else{
            datetime=data.toDateTime();
            datetime_str=datetime.toString("yyyy-MM-dd hh:mm:ss");
        }
    }
    QString show=QString("序号："+infor[0]+"\n名称："+infor[1]+"\n作者："+infor[2]+"\n类别："+infor[3]+"\n出版日期："+datetime_str+"\n出版社："+infor[5]+"\n摘要："+infor[6]+"\n借还状态："+infor[7]);
    QMessageBox::about(NULL,"详情",show);
}
void userinterface::setTitle()
{
    model->setHeaderData(0,Qt::Horizontal, "序号");
    model->setHeaderData(1,Qt::Horizontal, "书籍名称");
    model->setHeaderData(2,Qt::Horizontal, "书籍作者");
    model->setHeaderData(3,Qt::Horizontal, "书籍类别");
    model->setHeaderData(4,Qt::Horizontal, "书籍出版时间");
    model->setHeaderData(5,Qt::Horizontal, "书籍出版社");
    model->setHeaderData(6,Qt::Horizontal, "书籍摘要");
    model->setHeaderData(7,Qt::Horizontal, "书籍借还状态");
}
void userinterface::on_exitButton_clicked()
{
    if (!(QMessageBox::information(this,tr("退出"),tr("确定退出吗?"),tr("Yes"),tr("No"))))
    {
        this->close();
    }
}






