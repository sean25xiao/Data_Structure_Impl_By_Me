#include <iostream>
#include "stack.h"

using namespace std;

int main () {
  cout << "This is stack test program" << endl;

  c_MyStack my_stack;
  my_stack.push(10);
  my_stack.push(20);
  my_stack.push(30);
  my_stack.push(40);
  my_stack.printStack();

  return 0;
} 