#include "stdafx.h"
#include <cmath>
#include "JumpSearchStrategy.h"

int JumpSearchStrategy::search(const int * pArray, const int & rSize, const int & rKey)
{
	int jumpSize = sqrt(rSize);
	int prev = jumpSize;

	while ((jumpSize < rSize) && (rKey > pArray[jumpSize]))
	{
		prev = jumpSize;
		jumpSize += sqrt(rSize);
	}

	while (prev != jumpSize)
	{
		if (rKey == pArray[prev])
		{
			return prev;
		}
		prev++;
	}
	return -1;
}
