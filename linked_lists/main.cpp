#include <iostream>
#include "linked_lists.h"

using namespace std;

int main () {

  bool IsOneNode;
  bool IsEmptyList;

  int user_input = 0;
  int val = 0;
  MyLinkedLists mll;

  while (user_input != 9) {
    cout << "Please enter a number" << endl;
    cin  >> user_input;
    
    switch (user_input) {
      case 0: 
        mll.IsEmpty();
        mll.OnlyOneNode();
        break;

      case 1:
        cout << "Please enter the value" << endl;
        cin  >> val;
        mll.AddNodeAtBegin(val);
        break;

      case 2: // AddNodee
      
      case 3:
        cout << "Please enter the value" << endl;
        cin  >> val;
        mll.AddNodeAtEnd(val);
        break;

      case 4:
        mll.DeleteNodeAtBegin();
        break;

      case 7:
        mll.ReverseList();
        break;

      default:
        break;
    }
    mll.PrintList();
  }

  /*MyLinkedLists mll;
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
  mll.ReverseList();
  mll.PrintList();*/

  return 0;
}