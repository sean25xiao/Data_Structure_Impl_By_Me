#include <iostream>

#ifndef _LINKED_LISTS_  // Header Guard
#define _LINKED_LISTS_

struct Node {
  int val;
  Node* next;
};

class MyLinkedLists {
private:
  Node* head;
  Node* tail;
public:
  /// Default Constructor
  MyLinkedLists() {
    head = NULL;
    tail = NULL;
  } 
};

#endif