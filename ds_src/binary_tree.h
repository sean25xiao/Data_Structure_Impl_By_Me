#ifndef _BINARY_TREE_  // Header Guard
#define _BINARY_TREE_

#include <iostream>

struct node_t;
class MyBinaryTree;
node_t *createBinaryTree(int array_in[]);
void printBT(node_t *node_in);

struct node_t {
  int val;
  node_t *right;
  node_t *left;

  node_t (int in) {
    val = in;
    left  = NULL;
    right = NULL;
  }
};

class MyBinaryTree {
private:
  node_t *root;

public:
  /// MyBinaryTree Default Constructor
  MyBinaryTree() {
    root = NULL;
  }


  void InsertNode(int val);


  void Traversal_InOrder();

};

#endif // #define _BINARY_TREE_