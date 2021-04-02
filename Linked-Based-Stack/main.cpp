#include "Node.hpp"
#include "Stack.hpp"
#include <iostream>

int main()
{
  Stack<int> *new_stack = new Stack<int>();
  new_stack->push(1);
  new_stack->push(12);
  new_stack->push(12);
  new_stack->push(12);

  new_stack->pop();
  new_stack->pop();
  new_stack->pop();

  new_stack->display();

  return 0;
}