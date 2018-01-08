#pragma once
#include "ISearchStrategy.h"

class BinarySearch : public ISearchStrategy
{
public:
	int search(const int* pArray, const int& rSize, const int& rKey);
private:
	int search(const int* pArray, const int& rLeft, const int& rRight, const int& rKey);
};

