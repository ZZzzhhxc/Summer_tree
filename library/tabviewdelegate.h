#ifndef TABVIEWDELEGATE_H
#define TABVIEWDELEGATE_H


#include <QItemDelegate>
#include <QComboBox>
class tabviewDelegate: public QItemDelegate
{
public:
    tabviewDelegate(QObject *parent = nullptr);
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,const QModelIndex &index) const;
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const;
    void updateEditorGeometry(QWidget *editor,const QStyleOptionViewItem &option, const QModelIndex &index) const;
    QString type;
};


#endif // TABVIEWDELEGATE_H
