#include <iostream>
#include "stack.h"

using namespace std;

void my_stack::PrintStack() {
  for (int i = 0; i < stack_cap; i++) {
    cout << contents[i] << endl;
  }
  cout << "========" << endl;
  cout << "Top is " << top << endl;
  cout << "Index is " << stack_idx << endl;
  cout << "========" << endl;
}

void my_stack::Push(int val) {
  contents[stack_idx] = val;
  stack_idx += 1;
  if (stack_idx == 1 || stack_idx == 0)
    top = 0;
  else 
    top = stack_idx - 1;
}

void my_stack::Pop() {
  contents[top] = 0;
  stack_idx -= 1;  
  if (stack_idx == 1 || stack_idx == 0)
    top = 0;
  else
    top = stack_idx - 1;
}