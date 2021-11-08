#include <iostream>
#include "linked_lists.h"

using namespace std;

// ================================
void MyLinkedLists::AddNodeAtBegin(int val) {
// ================================

  /// Step 1 - Create a new node and link the next pointer field to the old head pointer
  cout << "AddNodeAtBegin Called" << endl;
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
  cout << "AddNodeAtEnd Called" << endl;
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
  if (head == tail) {
    cout << "Only One Node in the list" << endl;
    return true;
  }
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
};

// ================================
void MyLinkedLists::PrintList() {
// ================================

  if (head == NULL) {
    cout << "PrintList: The list is empty" << endl;
    return;
  }

  Node *current = head;
  while (current != NULL) {
    cout << current->val << " -> ";
    current = current->next;
  }
  cout << "NULL" << endl;

  return;
};

// ================================
void MyLinkedLists::ReverseList() {
// ================================
  /// Step 1 - Check is the list empty?
  if (head == NULL) {
    cout << "ReverseList: The list is empty" << endl;
    return;
  }
  
  /// Step 2 - If not empty, declare three pointers: current, prev, and beyond
  Node *current = head;
  Node *prev = NULL;
  Node *beyond = NULL; // Note: Didn't use next because it will be confused with current->next

  /// Step 3 - Start the process of reverse the list
  tail = current;   /// Step 3.1 - Assign the head node to tail node
  while (current != NULL) { /// Note: don't use current->next != NULL, otherwise it will skipp the last node so the last node will get lost
    beyond = current->next; /// Step 3.2 - Store next node to beyond
    current->next = prev; /// Step 3.3 - Set current node's next ptr to previous node
    prev = current; /// Step 3.4 - Move prev ptr to current node for next iteration
    current = beyond; /// Step 3.5 - Move current ptr to beyond ptr for next iteration
  }
  head = prev; /// Step 3.6 - Now current ptr is pointing to NULL, the prev ptr is pointing to the "last node", which is the head node is the reversed list
  return;
}

// ================================
void MyLinkedLists::DeleteNodeAtBegin() {
// ================================
  if (head == NULL) {
    cout << "DeleteNodeAtBegin: The list is empty" << endl;
    return;
  }

  Node *tmp = head;
  head = tmp->next;
  delete(tmp);
  return;
}

// ================================
void MyLinkedLists::DeleteNodeAtEnd() {
// ================================
  if (head == NULL) {
    cout << "DeleteNodeAtEnd: The list is empty" << endl;
    return;
  }

  if (OnlyOneNode()){
    Node *tmp;
    tmp = head;
    head = NULL;
    tail = NULL;
    delete(tmp);
    return;
  }

  Node *current = head;
  while (current->next->next != NULL) {
    current = current->next;
  }
  tail = current;
  current->next = NULL;
  delete(current->next);
  return;
}