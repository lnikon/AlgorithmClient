#include "stdafx.h"
#include "BinarySearch.h"

BinarySearch::BinarySearch()
{
}

int BinarySearch::search(const int * pArray, const int & rSize, const int & rKey)
{
	return search(pArray, 0, rSize, rKey);
}

int BinarySearch::search(const int * pArray, const int & rLeft, const int & rRight, const int & rKey)
{
	if (rRight >= rLeft)
	{
		int mid = rLeft + (rRight - rLeft) / 2;
		if (pArray[mid] == rKey)
		{
			return mid;
		}

		if (pArray[mid] > rKey)
		{
			return search(pArray, rLeft, mid - 1, rKey);
		}

		return search(pArray, mid + 1, rRight, rKey);
	}
	return -1;
}
