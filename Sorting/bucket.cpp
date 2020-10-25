
#include "sorting.hpp"

/**
 * Sort the bucket sort algorithm.
 * 
 * Inputs: null
 * 
 * Returns: null
 */
void bucketSort(std::vector<int>sorted, int n) 
{ 
  
    std::vector<int>xsorted[n];
  
 
    for (int i = 0; i < n; i++) { 
        int bi = n * arr[i]; 
        xsorted[bi].push_back(arr[i]); 
    } 

    for (int i = 0; i < n; i++) 
        sort(xsorted[i].begin(), xsorted[i].end()); 

    int index = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < xsorted[i].size(); j++) 
            arr[index++] = xsorted[i][j]; 
} 
  