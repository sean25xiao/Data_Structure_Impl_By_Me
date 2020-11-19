#include <iostream>
#include "linked_lists.h"

using namespace std;

int main () {

  bool IsOneNode;

  MyLinkedLists mll;
  //mll.AddNodeAtBegin(9);
  mll.AddNodeAtEnd(25);
  IsOneNode = mll.OnlyOneNode();
  cout << "Hi Yibang1" << endl;
  cout << mll.get_head_val() << endl;
  cout << "Hi Yibang2" << endl;
  if (IsOneNode)
    cout << "Hey, only one node in Linked List" << endl;

  return 0;
}