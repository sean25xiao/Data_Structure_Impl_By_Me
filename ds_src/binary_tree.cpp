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
  node_t *current = NULL;
  if (idx == 0)
    current = root;
  else
    current = node_in;

  cout << current->val << ", ";
  if (current->left != NULL) { 
    preorderTraversal(current->left);
  } else {
    cout << "N" << ", ";
  }

  if (current->right != NULL) { 
    preorderTraversal(current->right); 
  } else {
    cout << "N" << ", ";
  }

  return;
}

void MyBinaryTree::InsertNode(int val) {

}

void MyBinaryTree::Traversal_InOrder() {
  node_t *current = root;
  node_t *previous = NULL;
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

// ===============================
