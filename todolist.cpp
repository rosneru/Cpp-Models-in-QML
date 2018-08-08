#include "todolist.h"

ToDoList::ToDoList(QObject *parent) : QObject(parent)
{
  m_Items.append({true, QStringLiteral("Wash the car")});
  m_Items.append({false, QStringLiteral("Fix the sink")});
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

void ToDoList::appendItem()
{
  emit preItemAppended();

  ToDoItem item;
  item.done = false;
  m_Items.append(item);

  emit postItemAppended();
}

void ToDoList::removeCompletedItems()
{
  for(int i = 0; i < m_Items.size(); i++)
  {
    if(m_Items.at(i).done == true)
    {
      emit preItemRemoved(i);

      m_Items.removeAt(i);

      emit postItemRemoved(i);
    }
    else
    {
      ++i; // TODO Why increment i if the for loop odes it already?
    }
  }
}
