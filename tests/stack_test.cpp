#include <iostream>
#include <vector>
#include <assert.h>
#include "../ds_src/stack.h"

using namespace std;

void stack_tests(std::string test_name, std::vector<int> const &input_data)
{
  c_MyStack my_stack;

  for (auto &it : input_data)
  {
    my_stack.push(it);
    //cout << __FUNCTION__ << " - " << __LINE__ << ": test data = " << it << endl;
  }

  for (int i = (my_stack.getSize() - 1); i >= 0; i--)
  {
    //cout << __FUNCTION__ << " - " << __LINE__ << ": top        = " << my_stack.top() << endl;
    //cout << __FUNCTION__ << " - " << __LINE__ << ": input_data = " << input_data[i] << endl;
    assert( my_stack.top() == input_data[i] );
    my_stack.pop();
  }

  cout << test_name << " PASSED" << endl;
}

int main () {
  cout << "This is stack test program" << endl;

  c_MyStack my_stack;
  cout << "isEmpty? " << (my_stack.isEmpty() ? "yes" : "no") << endl;


  std::string test_n1 = "BASIC-TEST";
  std::vector<int> test_v1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  stack_tests(test_n1, test_v1);

  std::string test_n2 = "BASIC-TEST-Large-Number-Positive";
  std::vector<int> test_v2 {100000, 2000000, 300000000, 2147483647, 2147480000, 1147480000, 213480000, 99999999, 88888888, 101010101};
  stack_tests(test_n2, test_v2);

  std::string test_n3 = "BASIC-TEST-Large-Number-Negative";
  std::vector<int> test_v3 {-100000, -2000000, -300000000, -2147483648, -2147480000, -1147480000, -213480000, -99999999, -88888888, -101010101};
  stack_tests(test_n3, test_v3);

  std::string test_n4 = "BASIC-TEST-Number-ZERO";
  std::vector<int> test_v4 {0, 0, 0, 0, 0, 0, 0};
  stack_tests(test_n4, test_v4);

  std::string test_n5 = "BASIC-TEST-ONE-NUMBER";
  std::vector<int> test_v5 {14123};
  stack_tests(test_n5, test_v5);

  return 0;
} 