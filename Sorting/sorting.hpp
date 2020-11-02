#pragma once

#include <iostream>
#include <vector>

#define f(i,n) for(int i=0; i<n; i++)

class Sort {
private:

    std::vector<int> unsorted;
    std::vector<int> sorted;

public:

    void GetInput();
    void PrintArray(bool sortedArray);

    //comparison
    void BubbleSort();
    void InsertionSort();
    void MergeSort(int,int);
    void QuickSort();
    void HeapSort();

    //non comparison
    void RadixSort();
    void BucketSort();
};
