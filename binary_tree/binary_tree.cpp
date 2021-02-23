#include <iostream>
#include "binary_tree.h"

using namespace std;

void MyBinaryTree::Traversal_InOrder() {
  Node *current = root;
  Node *previous = NULL;
  if (current == NULL) {
    printf("Please initialize the tree first! \n");
  }
  else {
    while (current->left != NULL) {
      previous = current;
      current  = current->left;
    }
    // Then it reaches the most left child

  }


}

// ================================
void MyBinaryTree::InitiTree(int val) {
// ================================
  root->val = val;
  root->left = NULL;
  root->right = NULL;

  return;
}
