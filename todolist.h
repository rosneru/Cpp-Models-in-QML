#ifndef TODOLIST_H
#define TODOLIST_H

#include <QObject>
#include <QVector>

struct ToDoItem
{
  bool done;
  QString description;
};

class ToDoList : public QObject
{
	Q_OBJECT
public:
	explicit ToDoList(QObject *parent = nullptr);

  QVector<ToDoItem> items() const;

  bool setItemAt(int index, const ToDoItem &item);

signals:
  void preItemAppended();
  void postItemAppended();

  void preItemRemoved(int index);
  void postItemRemoved(int index);

public slots:
  void appendItem();
  void removeCompletedItems();

private:
  QVector<ToDoItem> m_Items;
};

#endif // TODOLIST_H
