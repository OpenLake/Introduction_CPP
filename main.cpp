#include "Sorting/sorting.hpp"

int main(){
    Sort sort;
    sort.GetInput();
    sort.PrintArray(false);
    sort.BubbleSort();
    sort.PrintArray(true);
    return 0;
}
