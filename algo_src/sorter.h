#ifndef _SORTER_  // Header Guard
#define _SORTER_

#include <iostream>
#include <vector>

class c_MySorter 
{
private:
    std::vector<int> input_vec;
    std::vector<int> output_vec;

public:
    c_MySorter() { reset(); };
    void set_inp_vec(std::vector<int> _in_vec);
    void print_inp_vec() const;
    void print_out_vec() const;
    std::vector<int> get_out_vec() const { return output_vec; };
    std::vector<int>::size_type get_vec_size() const { return input_vec.size(); };

    void swap(int* _pa, int* _pb);

    void bubble_sort();

    int  quick_sort_partition(std::vector<int>& _vec, int low, int high);
    void quick_sort_recursion(std::vector<int>& _vec, int low, int high);
    void quick_sort();
    
    void merge_sort_merge (std::vector<int>& _vec, int low, int mid, int high);
    void merge_sort_divide(std::vector<int>& _vec, int low, int high);
    void merge_sort();

    void selection_sort();

    void insert_sort();

    void reset();
};

#endif // #define _SORTER_
