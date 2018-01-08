#include "stdafx.h"

#include <iostream>
#include "QuickSortStrategy.h"

/*
 * Default constructor
 */
QuickSortStrategy::QuickSortStrategy()
{

}

void QuickSortStrategy::sort(int* pArray, const int& rSize)
{
    std::cout << "QuickSortStrategy::sort(...)" << "\n";
	sort(pArray, 0, rSize - 1);
}

int QuickSortStrategy::partition(int * pArray, const int & rLeft, const int & rRight)
{
	int i = rLeft;
	int j = rRight;
	int tmp = 0;
	int pivot = pArray[(rLeft + rRight) / 2];

	while (i <= j)
	{
		while (pArray[i] < pivot)
		{
			i++;
		}
		while (pArray[j] > pivot)
		{
			j--;
		}

		if (i <= j)
		{
			std::swap(pArray[i], pArray[j]);
			i++;
			j--;
		}
	}
	return i;
}

void QuickSortStrategy::sort(int * pArray, const int & rLeft, const int & rRight)
{
	int index = partition(pArray, rLeft, rRight);
	if (rLeft < index - 1)
	{
		sort(pArray, rLeft, index - 1);
	}
	if (index < rRight)
	{
		sort(pArray, index, rRight);
	}
}

