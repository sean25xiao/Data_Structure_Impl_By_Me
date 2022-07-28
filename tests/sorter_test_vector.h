#include <gtest/gtest.h>
#include <algorithm>
#include <vector>
#include "../algo_src/sorter.h"

TEST(BubbleSortTest, posSmallNum_1)
{
    std::vector<int> test_vec = {4,1,2,3,5,4,2,0,7};
    c_MySorter ms;
    ms.set_inp_vec(test_vec);
    ms.bubble_sort();
    std::sort(test_vec.begin(), test_vec.end());
    EXPECT_EQ(test_vec, ms.get_out_vec());
}