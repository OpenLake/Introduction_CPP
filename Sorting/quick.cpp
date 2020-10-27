#include "sorting.hpp"
#include <algortihm>
/**
 * Sort the array using quick sort algortihm.
 *
 * Inputs: null
 *
 * Returns: null
 */
int Partition(int p, int r, std::vector<int>& arr){
   int x = arr[r];
   int i = p-1;
   for(int j{p};j<r;++j){
       if(arr[j]<=x){
           i++;
           std::swap(&arr[i], &arr[j]);
       }
   }
   std::swap(&arr[i+1], &arr[r]);
   return i+1;
}

void Sort::QuickSort(int p=0, int r=-10){
    if(r==-10){
        r = unsorted.size()-1;
        sorted=unsorted;
    }
    if(p<r){
        int q = Partition(p, r, sorted);
        QuickSort(p, q-1);
        QuickSort(q+1, r);
    }
}
