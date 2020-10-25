#include "sorting.hpp"

/**
 * Sort the array using quick sort algortihm.
 *
 * Inputs: null
 *
 * Returns: null
 */

 //QUICK SORT ALGORITHM
 int cnt{};
 std::vector<int>arr;
 void Swap(int &a,int &b){
   int t=a;
   a=b;
   b=t;
}

int Partition(int p, int r){
   int x = arr[r];
   int i = p-1;
   for(int j{p};j<r;++j){
       if(arr[j]<=x){
           i++;
           Swap(arr[i], arr[j]);
       }
   }
   Swap(arr[i+1], arr[r]);
   return i+1;
}

void Sort::QuickSort(int p, int r){
    if(!cnt){
        r = unsorted.size()-1;
        arr=unsorted;
        cnt++;
    }
    if(p<r){
        int q = Partition(p, r);
        QuickSort(p, q-1);
        QuickSort(q+1, r);
    }
    sorted = arr;
}
