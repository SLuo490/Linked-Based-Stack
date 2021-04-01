#include "Node.hpp"

template <typename ItemType>
Node<ItemType>::Node() : next_(nullptr)
{
}

template <typename ItemType>
Node<ItemType>::Node(const ItemType &an_item) : item_(an_item)
{
}

template <typename ItemType>
Node<ItemType>::Node(const ItemType &an_item, Node<ItemType> *next_node_ptr) : item_(an_item), next_(next_node_ptr)
{
}

template <typename ItemType>
bool Node<ItemType>::setNext(Node<ItemType> *next_node_ptr)
{
  next_ = new_node_ptr;
}

template <typename ItemType>
void Node<ItemType>::setItem(const ItemType &an_item)
{
  item_ = an_item;
}

template <typename ItemType>
ItemType Node<ItemType>::getItem() const
{
  return item_;
}

template <typename ItemType>
Node<ItemType> *Node<ItemType>::getNext() const
{
  return next_;
}