#include <iostream>
#include <vector>
#include <assert.h>
#include "../algo_src/sorter.h"

using namespace std;

int main () {
  cout << "This is sorter test program" << endl;

  c_MySorter ms;

  cout << "======== Bubble Sort Test 1 ========" << endl;
  std::vector<int> test_vec1 = {0,2,4,5,8,9,1,0,7,3};
  ms.set_inp_vec(test_vec1);
  ms.print_inp_vec();
  ms.bubble_sort();
  ms.print_out_vec();

  cout << "======== Bubble Sort Test 2 ========" << endl;
  std::vector<int> test_vec2 = {354,12,4,1235,41,5,-52,-12,-4,0};
  ms.set_inp_vec(test_vec2);
  ms.print_inp_vec();
  ms.bubble_sort();
  ms.print_out_vec();

  cout << "======== Bubble Sort Test 3 ========" << endl;
  std::vector<int> test_vec3 = {-1,0,-1,0,-1,-1,-2,0,1,0,1,-1,-2,3,2,0,1,-1};
  ms.set_inp_vec(test_vec3);
  ms.print_inp_vec();
  ms.bubble_sort();
  ms.print_out_vec();

  cout << "======== Quick Sort Test 1 ========" << endl;
  std::vector<int> test_vec4 = {0,2,4,5,8,9,1,0,7,3};
  ms.set_inp_vec(test_vec4);
  ms.print_inp_vec();
  ms.quick_sort();
  ms.print_out_vec();

  cout << "======== Quick Sort Test 2 ========" << endl;
  std::vector<int> test_vec5 = {354,12,4,1235,41,5,-52,-12,-4,0};
  ms.set_inp_vec(test_vec5);
  ms.print_inp_vec();
  ms.quick_sort();
  ms.print_out_vec();

  cout << "======== Quick Sort Test 3 ========" << endl;
  std::vector<int> test_vec6 = {-1,0,-1,0,-1,-1,-2,0,1,0,1,-1,-2,3,2,0,1,-1};
  ms.set_inp_vec(test_vec6);
  ms.print_inp_vec();
  ms.quick_sort();
  ms.print_out_vec();

  return 0;

}