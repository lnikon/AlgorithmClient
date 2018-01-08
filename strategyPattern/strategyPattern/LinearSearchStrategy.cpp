#include "stdafx.h"
#include "LinearSearchStrategy.h"

int LinearSearchStrategy::search(const int * pArray, const int & rSize, const int &rKey)
{
	for (int i = 0; i < rSize; i++)
	{
		if (pArray[i] == rKey)
		{
			return i;
		}
	}
	return -1;
}