#include <iostream>
#include <vector>

#ifndef _STACK_  // Header Guard
#define _STACK_

#define STACK_CAPACITY 10

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

class c_MyStack {
public:
  // Default Constructor
  c_MyStack()
    : //_contents{0}, 
      _top{0},
      _stack_idx{0},
      _stack_cap{STACK_CAPACITY} 
  { }

  void printStack();
  void push(int val);
  void pop();
  int  top();     // return the top of stack without deleting it
  bool isEmpty() { return (_contents.empty() ? true : false); };
  //bool isFull();

private:
  vector<int> _contents;
  int _top;
  int _stack_idx;
  int _stack_cap;
};

#endif