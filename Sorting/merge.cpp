#include "sorting.hpp"

/**
 * Sort the array using merge sort algorithm.
 *
 * Inputs: null
 */
 void Sort::Merge(int low, int mid, int high)
 {
     std::vector<int> L;
     std::vector<int> R;

     for(int i{low}; i<= mid; i++)
     {
         L.push_back(unsorted[i]);
     }

     for(int i{mid + 1}; i<= high; i++)
     {
         R.push_back(unsorted[i]);
     }

     int i{0};
     int j{0};
     int k{low};

     while(i < L.size() && j < R.size())
     {
         if(L[i]  <= R[j])
         {
             sorted[k] = L[i];
             i++;
             k++;
         }
         else
         {
             sorted[k] = R[j];
             j++;
             k++;
         }
     }

     while(j < R.size())
     {
         sorted[k] = R[j];
         j++;
         k++;
     }

     while(i < L.size())
     {
         sorted[k] = L[i];
         i++;
         k++;
     }
 }

 void Sort::MergeSort(int low = 0, int high = unsorted.size()-1)
 {
     if(high > low)
     {
         int mid = (low + high)/2;
         MergeSort(low,mid);
         MergeSort(mid+1,high);
         Merge(low,mid,high);
     }
 }
