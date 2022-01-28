#include <iostream>
#include "binary_tree.h"

using namespace std;

int idx_global = 0;

node_t *createBinaryTree(int array_in[]){
  node_t *current = new node_t(array_in[idx_global]);
  if (current->val == -1) { cout << "array_inx[" << idx_global << "] is stored as NULL" << endl; return NULL; };
  cout << "array_inx[" << idx_global << "] is stored as " << current->val << endl;
  
  idx_global++;
  current->left  = createBinaryTree(array_in);
  
  idx_global++;
  current->right = createBinaryTree(array_in);

  return current;
};

void printBT(node_t *node_in) {
  node_t *current = node_in;
  cout << current->val << ", ";
  if (current->left != NULL) { 
    printBT(current->left);
  } else {
    cout << "N" << ", ";
  }

  if (current->right != NULL) { 
    printBT(current->right); 
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
