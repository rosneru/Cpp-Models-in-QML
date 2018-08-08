#include "todolist.h"

ToDoList::ToDoList(QObject *parent) : QObject(parent)
{

}

QVector<ToDoItem> ToDoList::items() const
{
  return m_Items;
}

bool ToDoList::setItemAt(int index, const ToDoItem &item)
{
  if(index < 0 || index >= m_Items.size())
  {
    return false;
  }

  const ToDoItem& oldItem = m_Items.at(index);
  if(item.done == oldItem.done && item.description == oldItem.description)
  {
    return false;
  }

  m_Items[index] = item;
  return true;
}
