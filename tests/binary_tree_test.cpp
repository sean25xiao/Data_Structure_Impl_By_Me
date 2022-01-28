#include <iostream>
#include "../ds_src/binary_tree.h"

using namespace std;

int main () {
    cout << "Hi, binary tree test" << endl;

    int input[15] = {1, 2, 4, -1, -1, 5, 7, -1, -1, -1, 3, -1, 6, -1, -1};

    node_t *my_root = createBinaryTree(input);

    printBT(my_root);

    cout << endl;

    return 0;
}