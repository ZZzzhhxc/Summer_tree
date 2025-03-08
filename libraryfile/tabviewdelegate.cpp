#include "tabviewdelegate.h"
#include <QTextEdit>
#include <QDebug>
tabviewDelegate::tabviewDelegate(QObject *parent)
{}
QWidget *tabviewDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if(type == "sex"){
        QComboBox *editor = new QComboBox(parent);
        editor->addItem(tr("男"));
        editor->addItem(tr("女"));
        return editor;
    }
    else if(type=="status"){
        QComboBox *editor = new QComboBox(parent);
        editor->addItem(tr("已借出"));
        editor->addItem(tr("未借出"));
        return editor;
    }
    else if(type=="warning"){
        QComboBox *editor = new QComboBox(parent);
        editor->addItem(tr("yes"));
        editor->addItem(tr("no"));
        return editor;
    }
    else if(type=="department"){
        QComboBox *editor = new QComboBox(parent); 
        editor->addItem(tr("化学学院 "));
        editor->addItem(tr("历史文化学院 "));
        editor->addItem(tr("经济学院 "));
        editor->addItem(tr("机械工程学院 "));
        editor->addItem(tr("物理学院 "));
        editor->addItem(tr("电气工程学院 "));
        editor->addItem(tr("马克思主义学院 "));
        editor->addItem(tr("水利水电学院 "));
        editor->addItem(tr("材料科学与工程学院 "));
        editor->addItem(tr("化学工程学院 "));
        editor->addItem(tr("外国语学院 "));
        editor->addItem(tr("公共管理学院 "));
        editor->addItem(tr("信息学院 "));
        return editor;
    }
    else{
        QTextEdit *editor = new QTextEdit(parent);
        return editor;
    }
}
void tabviewDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QString text =index.model()->data(index,Qt::DisplayRole).toString();
    if(type == "sex"||type == "status"||type == "warning"||type == "department"){
        QComboBox *cmb = static_cast<QComboBox*>(editor);
        cmb->setCurrentText(text);
    }
    else{
        QTextEdit *textedit = static_cast<QTextEdit*>(editor);
        textedit->setText(text);
    }
}
void tabviewDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QString text;
    if(type == "sex"||type == "status"||type == "warning"||type == "department"){
        QComboBox *cmb = static_cast<QComboBox*>(editor);
        text= cmb->currentText();
    }
    else{
        QTextEdit *edit = static_cast<QTextEdit*>(editor);
        text= edit->toPlainText();
    }
    model->setData(index,text);
}
void tabviewDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}
