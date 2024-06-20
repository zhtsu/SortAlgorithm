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

int _Partition(int Array[], int Start, int End, bool Reverse)
{
    printf("%d %d\n", Start, End);
    int Left = Start, Right = End;
    bool Flag;
    while (Left < Right)
    {
        Flag = (Reverse ? Array[Left] > Array[Right] : Array[Left] < Array[Right]);
        while (Left < Right && Flag) Left++;
        if (Left < Right)
        {
            std::swap(Array[Left], Array[Right]);
            Right--;
        }

        Flag = (Reverse ? Array[Left] > Array[Right] : Array[Left] < Array[Right]);
        while (Left < Right && Flag) Right--;
        if (Left < Right)
        {
            std::swap(Array[Left], Array[Right]);
            Left++;
        }
    }

    return Left;
}

void _QuickSort_Recursive(int Array[], int Start, int End, bool Reverse)
{
    if (Start >= End) return;

    int Pivot = _Partition(Array, Start, End, Reverse);
    _QuickSort_Recursive(Array, Start, Pivot - 1, Reverse);
    _QuickSort_Recursive(Array, Pivot + 1, End, Reverse);
}

void QuickSort(int Array[], int Size, bool Reverse)
{
    _QuickSort_Recursive(Array, 0, Size - 1, Reverse);
}

}
