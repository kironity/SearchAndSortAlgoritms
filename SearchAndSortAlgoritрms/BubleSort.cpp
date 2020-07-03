#include "BubleSort.h"

void BubleSort(int* arr, int n)
{
	bool changed = true;

	int i = 1;
	while (changed)
	{
		changed = false;
		for (int j = n - 1; j >= 1; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int copy = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = copy;
				changed = true;
			}
		}
		i++;
	}
}