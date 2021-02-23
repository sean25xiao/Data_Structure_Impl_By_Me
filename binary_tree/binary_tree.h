#include <iostream>

#ifndef _BINARY_TREE_  // Header Guard
#define _BINARY_TREE_

struct Node;
class MyBinaryTree;

struct Node {
  int val;
  Node *right;
  Node *left; 
};

class MyBinaryTree {
private:
  Node *root;

public:
  /// MyBinaryTree Default Constructor
  MyBinaryTree() {
    root = NULL;
  }

  void InitiTree(int val);

  void Traversal_InOrder();

}

#endif