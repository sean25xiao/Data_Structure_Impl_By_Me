#include <iostream>
#include "stack.h"

using namespace std;

int main () {
  
  my_stack My_Stack;

  My_Stack.Push(2);
  My_Stack.PrintStack();

  My_Stack.Push(55);
  My_Stack.PrintStack();

  My_Stack.Push(74);
  My_Stack.PrintStack();

  My_Stack.Pop();
  My_Stack.PrintStack();

  My_Stack.Pop();
  My_Stack.PrintStack();

  My_Stack.Pop();
  My_Stack.PrintStack();

  return 0;

}