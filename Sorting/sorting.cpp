#include "sorting.hpp"

/**
 * Take an array as input from the user to be used afterwards.
 * 
 * Inputs: null
 * 
 * Returns: null
 */
void Sort::GetInput(){
    int len;
    std::cout << "Length of array? : ";
    std::cin >> len;
    std::cout << "Enter the array : ";
    int temp;
    f(i, len){
        std::cin >> temp;
        unsorted.push_back(temp);
    }
}

/**
 * Depending upon the boolean input,prints the corresponding array separated by comma.When the input is true
 * it prints the sorted array and when it is false it prints the unsorted array.
 * 
 * Inputs: boolean value True or False
 * 
 * Returns: null
 */
void Sort::PrintArray(bool sortedArray){
    std::cout<< ((sortedArray)? "Sorted Array : " : "Unsorted Array : ");
    f(i, ((sortedArray) ? sorted.size(): unsorted.size()))
        std::cout<< ((sortedArray) ? sorted[i] : unsorted[i]) << ((i<(((sortedArray) ? sorted.size(): unsorted.size())-1)) ? "," : "\n");
}

