#include <iostream>
#include "../ds_src/binary_tree.h"

using namespace std;

int main () {
    cout << "Hi, binary tree test" << endl;

    int input[15] = {1, 2, 4, -1, -1, 5, 7, -1, -1, -1, 3, -1, 6, -1, -1};

    MyBinaryTree bt1;
    bt1.createBinaryTree(input);
    bt1.preorderTraversal(bt1.getRoot());

    cout << endl;

    bt1.printRoot();

    cout << endl;

    bt1.inorderTraversal(bt1.getRoot());
    cout << endl;

    cout << endl;
    bt1.postorderTraversal(bt1.getRoot());
    cout << endl;

    return 0;
}