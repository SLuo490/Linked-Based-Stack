#include "Stack.hpp"
#include "Node.hpp"
#include <iostream>

template <typename ItemType>
Stack<ItemType>::Stack() : top_(nullptr)
{
  //initialize top_ tonullptr
}

template <typename ItemType>
Stack<ItemType>::~Stack()
{
  //pop every item in stack
}

template <typename ItemType>
Stack<ItemType>::Stack(const Stack<ItemType> &a_stack)
{
  //copy constructor
}

template <typename ItemType>
void Stack<ItemType>::push(const ItemType &new_entry)
{
  //create a new node with item and linking the item
  Node<ItemType> *new_node = new Node<ItemType>(new_entry, top_);
  //set top to the new node
  top_ = new_node;
  //set new_node = nullptr (DON'T DELETE, CREATE INFINITE LOOP)
  new_node = nullptr;
}

template <typename ItemType>
void Stack<ItemType>::pop()
{
  //create a temp ptr and set it to top
  Node<ItemType> *temp_ptr = top_;

  //set top_ to next node
  top_ = top_->getNext();

  //set temp next ptr to null ptr
  temp_ptr->setNext(nullptr);

  //delete temp ptr
  delete temp_ptr;

  //set temp ptr to nullptr
  temp_ptr = nullptr;
}

template <typename ItemType>
ItemType Stack<ItemType>::top() const
{
}

template <typename ItemType>
int Stack<ItemType>::size() const
{
  //return item_count_
}

template <typename ItemType>
bool Stack<ItemType>::isEmpty() const
{
  return item_count_ == 0;
}

template <typename ItemType>
void Stack<ItemType>::display() const
{
  Node<ItemType> *temp = top_;

  while (temp != nullptr)
  {
    std::cout << temp->getItem() << " ";
    temp = temp->getNext();
  }
}