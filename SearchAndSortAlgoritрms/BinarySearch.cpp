#include "BinarySearch.h"

template <typename T>
T BinarySearch(T* arr, T FindNumber)
{

	T low;
	low = arr.front();
	std::cout << low << std::endl;
	T high;
	high = arr.size();
	std::cout << arr.size();
	while (low != high)
	{
		T mid = (T)(low + high) / 2;
		if (mid == FindNumber)
		{
			return mid;
			break;
		}
		else if (FindNumber > mid)
		{
			low = mid + 1;
			continue;
		}
		else if (FindNumber < mid)
		{
			high = mid - 1;
			continue;
		}
		else
		{
			return 0;
			break;
		}
	}
	return low;
}