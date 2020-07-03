#include "QuckSort.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

void Split(int* arr, int size, int left, int right) 
{
        int ixLeft;
        int ixRight;
        int Copy;
        int Pivot;

        if (right <= left) return;
        Pivot = arr[left + rand() % (right - left)];
        ixLeft = left;
        ixRight = right;

        while (ixLeft <= ixRight)
        {
            while (arr[ixLeft] < Pivot) ixLeft++;
            while (Pivot < arr[ixRight]) ixRight--;
            if (ixLeft <= ixRight)
            {
                Copy = arr[ixLeft];
                arr[ixLeft] = arr[ixRight];
                arr[ixRight] = Copy;
                ixLeft++;
                ixRight--;
            }
        }
        if (ixRight - left < right - ixLeft)
        {
            Split(arr, size, left, ixRight);
            Split(arr, size, ixLeft, right);
        }
        else
        {
            Split(arr, size, ixLeft, right);
            Split(arr, size, left, ixRight);
        }   
}
void QuickSort(int* arr, int size)
{

        // "–ассеивание" генератора случайных чисел
        // на основе некоторого псевдослучайного фактора
        // (чаще всего используют текущее врем€)
        srand((unsigned)time(NULL));
        Split(arr, size, 0, size - 1);   

}