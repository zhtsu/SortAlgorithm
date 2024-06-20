#include "20240619/Sort.hpp"

int main()
{
    int Array[] = { 0, 3, 23, 323, 32, 4, 5, 24, 7, 9};

    mysort::BubbleSort(Array, 10);
    mysort::PrintArray(Array, 10, "BubbleSort");
    mysort::SelectionSort(Array, 10);
    mysort::PrintArray(Array, 10, "SelectionSort");
    mysort::QuickSort(Array, 10);
    mysort::PrintArray(Array, 10, "QuickSort");

    return 0;
}
