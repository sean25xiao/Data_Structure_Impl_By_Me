#include <iostream>
#include "binary_tree.h"

using namespace std;

int main () {

  MyBinaryTree mbt;

  mbt.InitiTree(5);

  printf("Root is %d \n", (mbt.root)->val);

  return 0;

}