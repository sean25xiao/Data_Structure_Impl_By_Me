#include <iostream>
#include "binary_tree.h"

using namespace std;

// ================================
node_t *MyBinaryTree::createBinaryTree(int array_in[]){
// ================================

  /// Step 1 - allocate a new node space for current node
  node_t *current = new node_t(array_in[idx]);

  /// Step 2 - if it is the first time, then this node is the node
  if (idx == 0) { root = current; };

  /// Step 3 - check the number: -1 means it is NULL
  if (current->val == -1) { cout << "array_inx[" << idx << "] is stored as NULL" << endl; return NULL; };
  cout << "array_inx[" << idx << "] is stored as " << current->val << endl;
  
  /// Step 4 - increment the index, and recursivily call createBinaryTree for left child, next time it will read array_in[idx+1]
  idx++;
  current->left  = createBinaryTree(array_in);
  
  /// Step 5 - increment the index, and recursivily call createBinaryTree for right child, next time it will read array_in[idx+1]
  idx++;
  current->right = createBinaryTree(array_in);

  /// Step 6 - if this node does not have any left nor right children, return its address to upper call
  return current;
};

// ================================
void MyBinaryTree::printRoot() {
// ================================
  cout << "======== printRoot =============" << endl;

  cout << "root's value is " << root->val << endl;
  cout << "root's left  child is " << root->left->val << endl;
  cout << "root's right child is " << root->right->val << endl;

  cout << "======== printRoot Ends ========" << endl;
}

// ================================
void MyBinaryTree::preorderTraversal(node_t *node_in) {
// ================================

  if (node_in == NULL) {
    cout << "N" << ", ";
    return;
  }

  cout << node_in->val << ", ";
  preorderTraversal(node_in->left);
  preorderTraversal(node_in->right);

  return;
}

// ================================
void MyBinaryTree::inorderTraversal(node_t *node_in) {
// ================================

  if (node_in == NULL) {
    cout << "N" << ", ";
    return;
  }

  inorderTraversal(node_in->left);
  cout << node_in->val << ", ";
  inorderTraversal(node_in->right);

  // if all both children are NULL (also means reach the bottom leaf)
  return;
}

// ================================
void MyBinaryTree::postorderTraversal(node_t *node_in) {
// ================================

  if (node_in == NULL) {
    cout << "N" << ", ";
    return;
  }

  postorderTraversal(node_in->left);
  postorderTraversal(node_in->right);
  cout << node_in->val << ", ";
  
  return;
}

// ================================
void MyBinaryTree::levelorderTraversal(node_t *node_in) {
// ================================
  if (node_in == NULL)
    return;

  cout << node_in->val << endl;
  
}

void MyBinaryTree::InsertNode(int val) {

}
