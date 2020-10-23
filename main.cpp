#include "Sorting/sorting.hpp"

int main(){
    Sort sort;
    std::cout<<"##### Sorting Section #####\n";
    sort.GetInput();
    sort.PrintArray(false);
    sort.BubbleSort();
    sort.PrintArray(true);
    sort.InsertionSort();
    sort.PrintArray(true);
    sort.MergeSort();
    sort.PrintArray(true);
    sort.QuickSort();
    sort.PrintArray(true);
    sort.HeapSort();
    sort.PrintArray(true);
    sort.RadixSort();
    sort.PrintArray(true);
    sort.BucketSort();
    sort.PrintArray(true);
    return 0;
}
