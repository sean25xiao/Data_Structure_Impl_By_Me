#include <iostream>
#include <vector>
#include <assert.h>
#include <gtest/gtest.h>
#include "../algo_src/sorter.h"
#include "sorter_test_vector.h"

using namespace std;

// ======== Tests for Bubble Sort ========

TEST(BubbleSortTest, posSmallNum)
{
    c_MySorter ms;
    for (auto &v : test_posSmallNum) {
        ms.set_inp_vec(v);
        ms.bubble_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(BubbleSortTest, posLargeNum)
{
    c_MySorter ms;
    for (auto &v : test_posLargeNum) {
        ms.set_inp_vec(v);
        ms.bubble_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(BubbleSortTest, negSmallNum)
{
    c_MySorter ms;
    for (auto &v : test_negSmallNum) {
        ms.set_inp_vec(v);
        ms.bubble_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(BubbleSortTest, negLargeNum)
{
    c_MySorter ms;
    for (auto &v : test_negLargeNum) {
        ms.set_inp_vec(v);
        ms.bubble_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(BubbleSortTest, allSame)
{
    c_MySorter ms;
    for (auto &v : test_allSame) {
        ms.set_inp_vec(v);
        ms.bubble_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(BubbleSortTest, sortedNum)
{
    c_MySorter ms;
    for (auto &v : test_sortedNum) {
        ms.set_inp_vec(v);
        ms.bubble_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(BubbleSortTest, extremeNum)
{
    c_MySorter ms;
    for (auto &v : test_extremeNum) {
        ms.set_inp_vec(v);
        ms.bubble_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(BubbleSortTest, stressTest)
{
    c_MySorter ms;
    create_stressVec();
    for (auto &v : test_stressVec) {
        ms.set_inp_vec(v);
        ms.bubble_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

// ======== End of Tests for Bubble Sort ========


// ======== Tests for Quick Sort ========

TEST(QuickSortTest, posSmallNum)
{
    c_MySorter ms;
    for (auto &v : test_posSmallNum) {
        ms.set_inp_vec(v);
        ms.quick_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(QuickSortTest, posLargeNum)
{
    c_MySorter ms;
    for (auto &v : test_posLargeNum) {
        ms.set_inp_vec(v);
        ms.quick_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(QuickSortTest, negSmallNum)
{
    c_MySorter ms;
    for (auto &v : test_negSmallNum) {
        ms.set_inp_vec(v);
        ms.quick_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(QuickSortTest, negLargeNum)
{
    c_MySorter ms;
    for (auto &v : test_negLargeNum) {
        ms.set_inp_vec(v);
        ms.quick_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(QuickSortTest, allSame)
{
    c_MySorter ms;
    for (auto &v : test_allSame) {
        ms.set_inp_vec(v);
        ms.quick_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(QuickSortTest, sortedNum)
{
    c_MySorter ms;
    for (auto &v : test_sortedNum) {
        ms.set_inp_vec(v);
        ms.quick_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(QuickSortTest, extremeNum)
{
    c_MySorter ms;
    for (auto &v : test_extremeNum) {
        ms.set_inp_vec(v);
        ms.quick_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(QuickSortTest, stressTest)
{
    c_MySorter ms;
    create_stressVec();
    for (auto &v : test_stressVec) {
        ms.set_inp_vec(v);
        ms.quick_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

// ======== End of Tests for Quick Sort ========

// ======== Tests for Merge Sort ========

TEST(MergeSortTest, posSmallNum)
{
    c_MySorter ms;
    for (auto &v : test_posSmallNum) {
        ms.set_inp_vec(v);
        ms.merge_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(MergeSortTest, posLargeNum)
{
    c_MySorter ms;
    for (auto &v : test_posLargeNum) {
        ms.set_inp_vec(v);
        ms.merge_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(MergeSortTest, negSmallNum)
{
    c_MySorter ms;
    for (auto &v : test_negSmallNum) {
        ms.set_inp_vec(v);
        ms.merge_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(MergeSortTest, negLargeNum)
{
    c_MySorter ms;
    for (auto &v : test_negLargeNum) {
        ms.set_inp_vec(v);
        ms.merge_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(MergeSortTest, allSame)
{
    c_MySorter ms;
    for (auto &v : test_allSame) {
        ms.set_inp_vec(v);
        ms.merge_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(MergeSortTest, sortedNum)
{
    c_MySorter ms;
    for (auto &v : test_sortedNum) {
        ms.set_inp_vec(v);
        ms.merge_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(MergeSortTest, extremeNum)
{
    c_MySorter ms;
    for (auto &v : test_extremeNum) {
        ms.set_inp_vec(v);
        ms.merge_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

TEST(MergeSortTest, stressTest)
{
    c_MySorter ms;
    create_stressVec();
    for (auto &v : test_stressVec) {
        ms.set_inp_vec(v);
        ms.merge_sort();
        std::sort(v.begin(), v.end());
        EXPECT_EQ(v, ms.get_out_vec());
        ms.reset();
    }
}

// ======== End of Tests for Merge Sort ========


// Test Drive
int main (int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}