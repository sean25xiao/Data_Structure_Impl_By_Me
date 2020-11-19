#include <iostream>
#include "linked_lists.h"

// ================================
void MyLinkedLists::AddNodeAtBegin(int val) {
// ================================

  /// Step 1 - Create a new node and link the next pointer field to the old head pointer
  Node *tmp = new Node;
  tmp->val = val;
  tmp->next = head;

  /// Step 2 - Link the head pointer to this new node
  head = tmp;

  /// Step 3 - If this added node is the first one in list, assign tail to this node, otherwise skip this
  if (tmp->next == NULL)
     tail = tmp;
};

// ================================
void MyLinkedLists::AddNodeAtEnd(int val) {
// ================================
  /// Step 1 - Seperate two cases: 
  ///         1. If there is no node in list, then AddNodeAtEnd is AddNodeAtBegin
  ///         2. If there are some nodes, then go to Step 2
  if (head != NULL) {

    /// Step 2 - Create a new node, assign val and NULL to next pointer
    Node *tmp     = new Node;
    tmp->val      = val;
    tmp->next     = NULL;

    /// Step 3 - Initial current pointer to the head which is the first node in the list, and traverse the list until the last node
    /// Note: Must be current->next for while loop, otherwise, it will give segfault
    Node *current = head;
    while (current->next != NULL) {
      current = current->next;
    }

    /// Step 4 - Assign the last node's next ptr to the tmp node, now tmp node becomes the last one
    current->next = tmp; 
    tail = tmp;
  }
  else {
    AddNodeAtBegin(val);
  }
};

// ================================
bool MyLinkedLists::OnlyOneNode() {
// ================================

  /// Note: When there is only one node, both head and tail points to the node
  if (head == tail)
    return true;
  else
    return false;
};

// ================================
bool MyLinkedLists::IsEmpty() {
// ================================

  if ((head == NULL) && (tail == NULL))
    return true;
  else 
    return false;
}