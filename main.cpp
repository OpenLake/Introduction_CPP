#include "Sorting/sorting.hpp"
#include "Graph/graph.hpp"

int main(){
    Sort sort;
    std::cout<<"\n\n##### Sorting Section #####\n";
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

    std::cout<<"\n\n##### Graph Section #####\n";
    Graph graph;
    graph.InputGraph();
    graph.PrintGraph();
    graph.DFS(0);
    graph.BFS(0);
    graph.ShortestPath(0,1);
    return 0;
}
