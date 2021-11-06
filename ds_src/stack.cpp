#include <iostream>
#include "stack.h"

using namespace std;

void c_MyStack::printStack() {
  for (auto it = _contents.rbegin(); it != _contents.rend(); ++it) {
    cout << (*it) << endl;
  }
}

void c_MyStack::push(int val) {
  _contents.push_back(val);
}

void c_MyStack::pop() {

}