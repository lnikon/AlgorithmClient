#pragma once
#include "ISearchStrategy.h"
class JumpSearchStrategy :
	public ISearchStrategy
{
public:
	int search(const int *pArray, const int &rSize, const int &rKey);
};

