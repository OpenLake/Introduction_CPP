#include "sorting.hpp"

/**
 * Documentation should go here
 */
int pow(int base, int exp){
    int ret = 1;
    
    f(i,exp)
        ret *= base;
    
    return ret;
}

/**
 * Documentation should go here
 */
int getMax(std::vector<int> input){
    int maxVal = input[0];
    f(i, input.size())
        if(maxVal<input[i])
            maxVal = input[i];
    return maxVal;
}

/**
 * Documentation should go here
 */
std::vector<int> sortByDigit(std::vector<int> input, int digit){

    std::vector<int> buckets[10];
    for(int i=0; i<input.size(); i++){
        buckets[(input[i] / pow(10, digit) % 10)].push_back(input[i]);
    }

    std::vector<int> result;
    f(i, 10)
    {
        f(j, buckets[i].size()){
            result.push_back(buckets[i][j]);
        }
    }

    return result;
}


/**
 * Documentation should go here
 */
void Sort::RadixSort(){
    std::cout<<"Sorting the array using Radix sort.\n";
    sorted.clear();

    int maxval = getMax(unsorted);
    f(i, unsorted.size())
        sorted.push_back(unsorted[i]);

    int i=0;
    while (pow(10,i)<=maxval)
    {
        i++;
        sorted = sortByDigit(sorted, i);
    }
}