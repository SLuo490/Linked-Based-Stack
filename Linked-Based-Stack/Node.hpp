#ifndef NODE_H_
#define NODE_H_
template <typename ItemType>
class Node
{
private:
  Node<ItemType> *next_;
  ItemType item_;

public:
  /**
   * @brief Construct a empty node
   * 
   */
  Node();

  /**
   * @brief Construct a new Node object with one item
   * 
   * @param an_item Item to node
   */
  Node(const ItemType &an_item);
  /**
   * @brief Construct a new Node object with item and new node ptr
   * 
   * @param an_item Item to new node
   * @param next_node_ptr Pointer to next node
   */
  Node(const ItemType &an_item, Node<ItemType> *next_node_ptr);
  /**
   * @brief Set the Next object
   * 
   * @param next_node_ptr Pointer to the next node
   * @return true If pointer is set next
   * @return false If pointer is not set Next
   */
  bool setNext(Node<ItemType> *next_node_ptr);

  /**
   * @brief Set the Item object
   * 
   * @param an_item Item to set into node
   */
  void setItem(const ItemType &an_item);
  /**
   * @brief Get the Item object
   * 
   * @return ItemType ItemType to return
   */
  ItemType getItem() const;

  /**
   * @brief Get the Next object
   * 
   * @return Next Pointer
   */
  Node<ItemType> *getNext() const;
};
#include "Node.cpp"
#endif