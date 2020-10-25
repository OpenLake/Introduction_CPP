#include "sorting.hpp"
#include <algorithm>

/**
 * Sorts the array using bubble sort algorithm.
 * 
 * Inputs: null
 * 
 * Returns: null
 */
void Sort::BubbleSort(){
    std::cout<<"Sorting the array using bubble sort\n";
    sorted.clear();

    f(i, unsorted.size())
        sorted.push_back(unsorted[i]);

    f(i, sorted.size() - 1)
        f(j, sorted.size() - 1)
            if(sorted[j] > sorted[j + 1])
                std::swap(sorted[j], sorted[j + 1]);

}