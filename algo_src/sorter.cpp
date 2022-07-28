#include <iostream>
#include "sorter.h"

using namespace std;

void c_MySorter::reset()
{
    input_vec.clear();
    output_vec.clear();
}

void c_MySorter::set_inp_vec(std::vector<int> _in_vec)
{
    input_vec.clear();
    input_vec = _in_vec;
}

void c_MySorter::print_inp_vec() const
{
    cout << "Input Vector:" << endl;
    for (auto &e : input_vec)
        cout << e << "  ";
    cout << endl;
}

void c_MySorter::print_out_vec() const
{
    cout << "Output Vector:" << endl;
    for (auto &e : output_vec)
        cout << e << "  ";
    cout << endl;
}

// function to swap elements
void c_MySorter::swap(int* _pa, int* _pb)
{
  int t = *_pa;
  *_pa = *_pb;
  *_pb = t;
}

/*
 * https://www.programiz.com/dsa/bubble-sort
 * Bubble Sort is like moving the larger number to the front like a bubble
 * Two adjacent numbers are compared and the larger one will be swapped to right (ascending order)
 * Time Complexities: O(n^2)
 * (n-1) + (n-2) + (n-3) +.....+ 1 = n(n-1)/2
 * Space Complexities: O(1) since only need 1 extra tmp variable to for swapping
 */
void c_MySorter::bubble_sort()
{
    for (int e = 0; e < (get_vec_size()-1); e++)
    {
        for (int i = 0; i < (get_vec_size()-1-e); i++)
        {
            if (input_vec[i] > input_vec[i+1]) {
                int tmp = input_vec[i+1];
                input_vec[i+1] = input_vec[i];
                input_vec[i] = tmp;
            }
        }
    }
    output_vec = input_vec;
}

/*
 * https://www.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/analysis-of-quicksort
 * https://www.programiz.com/dsa/quick-sort
 * https://www.youtube.com/watch?v=MZaf_9IZCrc
 * Quick Sort is an example of divide and concur
 * We chose a pivot in the array, and compare each element with it
 * We have a second pointer to point out where next position should the pivot be.
 * If i-th element is smaller than pivot, we increment the second pointer,
 * and swap the i-th element and ltp_idx-th element to make sure the smaller element 
 * is always on the left side
 */

int c_MySorter::quick_sort_partition(std::vector<int>& _vec, int low, int high)
{
    int pivot_val = _vec[high]; // read the pivot value
    int ltp_idx   = low - 1;   // larger_than_pivot

    for (int i = low; i < high; i++)
    {
        if (_vec[i] < pivot_val) {
            ltp_idx++;
            swap(&_vec[i], &_vec[ltp_idx]);
        }
    }
    swap(&_vec[high],&_vec[ltp_idx+1]);

    return (ltp_idx+1);
}

void c_MySorter::quick_sort_recursion(std::vector<int>& _vec, int low, int high)
{
    if (low < high)
    {
        int pivot_idx = quick_sort_partition(_vec, low, high);

        quick_sort_recursion(_vec, low, pivot_idx-1);
        quick_sort_recursion(_vec, pivot_idx+1, high);
    }
    // stops when low == high
}

void c_MySorter::quick_sort()
{
    quick_sort_recursion( input_vec, 0, get_vec_size()-1 );
    output_vec = input_vec;
}

//std::vector<int>
void c_MySorter::merge_sort_merge(
    std::vector<int>& _vec, 
    int low, int mid, int high)
{
    int sa1 = low;
    int sa2 = mid + 1;
    int n1 = mid - low;
    int n2 = high - (mid + 1);
    std::vector<int> left_vec;
    std::vector<int> right_vec;
    //tmp_out.resize(high+1);

    for (int i = 0; i <= (mid-low); i++)
        left_vec.push_back(_vec[low+i]);
    for (int i = 0; i <= (high-(mid+1)); i++)
        right_vec.push_back(_vec[mid+1+i]);

    cout << "Starting merging ...." << endl;
    for (auto &e : left_vec)
        cout << e << ", ";
    cout << endl;
    for (auto &e : right_vec)
        cout << e << ", ";
    cout << endl;

    /*int idx = 0;
    while ( (sa1 <= mid) || (sa2 <= high) )
    {
        if (_vec[sa1] < _vec[sa2]) {
            tmp_out[idx] = _vec[sa1];
            sa1++;
        } else {
            tmp_out[idx] = _vec[sa2];
            sa2++;
        }
        idx++;
    } */

    int l_idx = 0, r_idx = 0, res_idx = low;
    puts("here 0\n");
    while ( (l_idx <= n1) && (r_idx <= n2))
    {
        if (left_vec[l_idx] < right_vec[r_idx]) {
            _vec[res_idx] = left_vec[l_idx];
            l_idx++;
        } else {
            _vec[res_idx] = right_vec[r_idx];
            r_idx++;
        }
        res_idx++;
    }
    puts("here 1\n");

    while (l_idx <= (mid-low)) {  // TODO : change to n1 and n2
        _vec[res_idx] = left_vec[l_idx];
        l_idx++;
        res_idx++;
    }

    while (r_idx <= (high-(mid+1))) {
        _vec[res_idx] = right_vec[r_idx];
        r_idx++;
        res_idx++;
    }
    //for (auto &e: tmp_out) cout << e << "  ";
    //out << endl;

    //return tmp_out;
}

//std::vector<int>
void c_MySorter::merge_sort_divide(std::vector<int>& _vec, int low, int high)
{
    if (low >= high) {
        printf("low & high = %d, %d \n", low, high);
        return;
    }

    int mid = (low + high) / 2;
    printf("mid = (%d + %d) / 2 = %d\n", low, high, mid);
    for (int i = low; i <= mid; i++)
        cout << _vec[i] << ", ";
    cout << endl;
    for (int j = mid+1; j <= high; j++)
        cout << _vec[j] << ", ";
    cout << endl;
    merge_sort_divide(_vec, low,   mid);
    merge_sort_divide(_vec, mid+1, high);
    
    merge_sort_merge (_vec, low,   mid, high);
}


void c_MySorter::merge_sort()
{
    printf("hi merge sort\n");
    merge_sort_divide(input_vec, 0, get_vec_size()-1);
    output_vec = input_vec;
}