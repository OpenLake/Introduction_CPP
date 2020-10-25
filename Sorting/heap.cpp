#include "sorting.hpp"

/**
 * array using heap sort algorithm.
 *
 * Inputs:
 *
 * Returns: null
 */
 void heapify(std::vector<int>sorted,int n,int j){
   int largest =i;
   int left_child=2*i+1;
   int right_child=2*i+2;
   if (left_child<n && sorted[left_child])>sorted[largest]){
     largest=left_child;
   }
   if (right_child<n && sorted[right_child]>sorted[largest]){
     largest=right_child;
   }
   if (largest!=j){
     int temp;
     temp=sorted[j];
     sorted[j]=sorted[largest];;
     sorted[largest]=temp;
     heapify(sorted,n,largest);
   }
 }
void heapsort(std::vector<int>sorted,int n){
  for (int j=n/2-1;j>=0;j--){
    heapify(sorted,n,j);
  }
  for (int j=n-1;j>0;j--){
    int temp;
    temp=sorted[0];
    sorted[0]=sorted[j];;
    sorted[j]=temp;
    heapify(sorted,j,0);
  }
}
void Sort::HeapSort(){
    std::cout<<"Sorting array by heap sort\n";
    sorted.clear();
    f(i,unsorted.size())
      sorted.push_back(unsorted[i]);
    /*Child of any node is at position 2i+1 and 2i+2 assuming indexing starts from 0*/
    heapsort(sorted,sorted.size());

}

