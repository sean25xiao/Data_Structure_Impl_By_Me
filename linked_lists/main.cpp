#include <iostream>
#include "linked_lists.h"

using namespace std;

int main () {

  bool IsOneNode;
  bool IsEmptyList;

  MyLinkedLists mll;
  //mll.AddNodeAtBegin(9);
  mll.AddNodeAtEnd(25);
  IsEmptyList = mll.IsEmpty();
  IsOneNode = mll.OnlyOneNode();
  cout << "Hi Yibang1" << endl;
  cout << mll.get_head_val() << endl;
  cout << "Hi Yibang2" << endl;
  if (IsOneNode)
    cout << "Hey, only one node in Linked List" << endl;
  if (IsEmptyList)
    cout << "List is empty!" << endl;

  return 0;
}