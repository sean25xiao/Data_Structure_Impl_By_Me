#include <iostream>

#ifndef _STACK_  // Header Guard
#define _STACKL_

#define STACK_CAPACITY 5

using namespace std;

/*
 *        -----------
 *                             contents[2]  TOP
 *        -----------
 *                             contents[1]
 *        -----------
 *                             contents[0]
 *        -----------
*/

class my_stack {
private:

  int contents[STACK_CAPACITY];
  int top;
  int stack_idx;
  int stack_cap;

public:

  // Default Constructor
  my_stack()
    : contents{0}, 
      top{0}, 
      stack_idx{0},
      stack_cap{STACK_CAPACITY} 
  {

  }

  void PrintStack();
  void Push(int val);
  void Pop();
  void Peek();
  bool IsEmpty();
  bool IsFull();
};

#endif