#include "sorting.hpp"
#include <algorithm>

/**
 * array using heap sort algorithm.
 * 
 * Inputs:
 * 
 * Returns: null
 */
void Sort::HeapSort(){
    std::cout << "Sorting the array using heap sort." << std::endl;

    sorted = unsorted;
	size_t curr_size = sorted.size();
	make_heap(sorted.begin(), sorted.begin() + curr_size);
    
    while(curr_size > 0){

    	pop_heap(sorted.begin(), sorted.begin() + curr_size);
    	curr_size--;

    }

}
