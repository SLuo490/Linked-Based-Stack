#include "Stack.hpp"

//empty stack
template <typename ItemType>
Stack<ItemType>::Stack() : item_count_(0), top(-1)
{
}

template <typename ItemType>
bool Stack<ItemType>::push(int x)
{
}

template <typename ItemType>
bool Stack<ItemType>::pop()
{
}

template <typename ItemType>
bool Stack<ItemType>::isEmpty()
{
  return item_count_ == 0
}

template <typename ItemType>
bool Stack<ItemType>::isFull()
{
  return item_count_ == MAX
}

template <typename ItemType>
int Stack<ItemType>::peek()
{
}