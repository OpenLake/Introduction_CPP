#include "sorting.hpp"

/**
 * Sort the array using merge sort algorithm.
 *
 * Inputs: null
 */
 std::vector<int> arr;
 void Merge(int low, int mid, int high)
 {
     std::vector<int> L;
     std::vector<int> R;

     for(int i{low}; i<= mid; i++)
     {
         L.push_back(arr[i]);
     }

     for(int i{mid + 1}; i<= high; i++)
     {
         R.push_back(arr[i]);
     }

     int i{0};
     int j{0};
     int k{low};

     while(i < L.size() && j < R.size())
     {
         if(L[i]  <= R[j])
         {
             arr[k] = L[i];
             i++;
             k++;
         }
         else
         {
              arr[k] = R[j];
             j++;
             k++;
         }
     }

     while(j < R.size())
     {
         arr[k] = R[j];
         j++;
         k++;
     }

     while(i < L.size())
     {
         arr[k] = L[i];
         i++;
         k++;
     }
 }

 void Sort::MergeSort(int low = 0, int high = -1)
 {
     if(high == -1){
       high = unsorted.size() - 1;
       arr = unsorted;
     }

     if(high > low)
     {
         int mid = (low + high)/2;
         MergeSort(low,mid);
         MergeSort(mid+1,high);
         Merge(low,mid,high);
     }

     sorted = arr;
 }
