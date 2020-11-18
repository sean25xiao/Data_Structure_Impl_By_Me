#include <iostream>
#include "linked_lists.h"

void MyLinkedLists::AddNodeAtBegin(int val) {
  Node *tmp = new Node;
  tmp->val = val;
  tmp->next = NULL;
  head = tmp;
};