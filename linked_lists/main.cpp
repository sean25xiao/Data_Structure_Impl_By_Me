#include <iostream>
#include "linked_lists.h"

using namespace std;

int main () {

  bool IsOneNode;
  bool IsEmptyList;

  MyLinkedLists mll;
  mll.AddNodeAtBegin(9);
  mll.AddNodeAtBegin(10);
  mll.AddNodeAtBegin(11);
  mll.AddNodeAtBegin(99999);
  mll.AddNodeAtEnd(25);
  mll.AddNodeAtEnd(250);
  IsEmptyList = mll.IsEmpty();
  IsOneNode = mll.OnlyOneNode();
  cout << "Hi Yibang1" << endl;
  cout << mll.get_head_val() << endl;
  cout << "Hi Yibang2" << endl;
  if (IsOneNode)
    cout << "Hey, only one node in Linked List" << endl;
  if (IsEmptyList)
    cout << "List is empty!" << endl;

  mll.PrintList();

  return 0;
}