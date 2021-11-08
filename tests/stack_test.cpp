#include <iostream>
#include "stack.h"

using namespace std;

int main () {
  cout << "This is stack test program" << endl;

  c_MyStack my_stack;
  cout << "isEmpty? " << (my_stack.isEmpty() ? "yes" : "no") << endl;
  my_stack.push(10);
  my_stack.push(20);
  my_stack.push(30);
  my_stack.push(40);
  my_stack.printStack();

  cout << "1. " << my_stack.top() << endl;
  cout << "3. " << my_stack.top() << endl;

 cout << "isEmpty? " << (my_stack.isEmpty() ? "yes" : "no") << endl;

 my_stack.pop();

 my_stack.printStack();

 my_stack.pop();

 my_stack.printStack();

  return 0;
} 