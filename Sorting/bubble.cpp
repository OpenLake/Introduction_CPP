#include "sorting.hpp"

void Sort::BubbleSort(){
    f(i, unsorted.size())
        sorted.push_back(unsorted[i]);

    f(i, sorted.size() - 1)
        f(j, sorted.size() - 1)
            if(sorted[j] > sorted[j + 1]){
                int temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp; 
            }
}