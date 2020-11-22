#include <iostream>

#ifndef _LINKED_LISTS_  // Header Guard
#define _LINKED_LISTS_

class Node;
class MyLinkedLists;

struct Node {
  int val;
  Node* next;
};

class MyLinkedLists {
private:
  Node *head;
  Node *tail;
public:
  /// MyLinkedLists Default Constructor
  MyLinkedLists() {
    head = NULL;
    tail = NULL;
  }

  int get_head_val() { return head->val; };

  int get_tail_val() { return tail->val; };

  void AddNodeAtBegin(int val);

  void DeleteNodeAtBegin();

  void AddNodeAtEnd(int val);

  void DeleteNodeAtEnd();

  bool OnlyOneNode();

  bool IsEmpty();

  void PrintList();

  void ReverseList();

friend Node;
};

#endif