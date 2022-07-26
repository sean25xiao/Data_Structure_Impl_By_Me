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
    std::vector<int>::size_type get_vec_size() const { return input_vec.size(); };

    void bubble_sort();
    void quick_sort();
    void merge_sort();

    void reset();
};

#endif // #define _SORTER_
