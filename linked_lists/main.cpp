#include <iostream>
#include "linked_lists.h"

using namespace std;

int main () {

  MyLinkedLists mll;
  mll.AddNodeAtBegin(9);
  cout << "Hi Yibang1" << endl;
  cout << mll.get_head_val() << endl;
  cout << "Hi Yibang2" << endl;

  return 0;
}