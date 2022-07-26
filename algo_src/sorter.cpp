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

void c_MySorter::quick_sort()
{
    
}