#ifndef NODE_H_
#define NODE_H_
template <typename ItemType>
class Node
{
private:
  Node<ItemType> *next_;
  ItemType item_;

public:
  //empty node
  Node();
  //constructor with 1 items
  Node(const ItemType &an_item);
  //node with linked item
  Node(const ItemType &an_item, Node<ItemType> *next_node_ptr);
  //set next ptr
  bool setNext(Node<ItemType> *next_node_ptr);
  //set Item
  void setItem(const ItemType &an_item);
  //get item
  ItemType getItem() const;
  //get next ptr
  Node<ItemType> *getNext() const;
};
#include "Node.cpp"
#endif