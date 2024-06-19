#include "Sort.hpp"
#include <iostream>


namespace mysort
{

void PrintArray(int Array[], int Size, const char* String)
{
    printf(String);
    printf(":");
    for (int i = 0; i < Size; i++)
    {
        printf(" %d", Array[i]);
    }
    printf("\n");
}

void BubbleSort(int Array[], int Size, bool Reverse)
{
    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = 0; j < Size - 1 - i; j++)
        {
            bool Flag = Array[j] > Array[j + 1];
            if (Reverse) Flag = !Flag;
            if (Flag) std::swap(Array[j], Array[j + 1]);
        }
    }
}

void SelectionSort(int Array[], int Size, bool Reverse)
{
    for (int i = 0; i < Size; i++)
    {
        int idx = i;
        for (int j = i + 1; j < Size; j++)
        {
            bool Flag = Array[i] > Array[j];
            if (Reverse) Flag = !Flag;
            if (Flag) idx = j;
        }

        std::swap(Array[i], Array[idx]);
    }
}

}
