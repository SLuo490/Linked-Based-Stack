#ifndef STACK_H_
#define STACK_H_

template <typename ItemType>
class Stack
{
public:
  /**
     * @brief Construct a new Stack object
     * 
     */
  Stack();
  /**
     * @brief Destroy the Stack object
     * 
     */
  ~Stack();
  /**
     * @brief Construct a new Stack object
     * 
     * @param a_stack a stack to copy from
     */
  Stack(const Stack<ItemType> &a_stack);
  /**
     * @brief pushes new entry to stack
     * 
     * @param new_entry is item to be push
     */
  void push(const ItemType &new_entry);
  /**
     * @brief remove element from top of stack
     * 
     */
  void pop();
  /**
     * @brief gets the top element of stock
     * 
     * @return return the element at top of stack
     */
  ItemType top() const;

  /**
     * @brief returns the size of stack
     * 
     * @return size of stack 
     */
  int size() const;

  /**
     * @brief check if the stack is empty or not
     * 
     * @return true if stack is empty
     * @return false if stack is not empty
     */
  bool isEmpty() const;

  /**
   * @brief display the stack
   * 
   */
  void display() const;

private:
  /**
   * @brief pointer to the top of stack
   * 
   */
  Node<ItemType> *top_;

  /**
   * @brief keep track of item in stack
   * 
   */
  int item_count_;
};
#include "Stack.cpp"
#endif