#pragma once
class ISearchStrategy
{
public:
	virtual int search(const int* pArray, const int& rSize, const int& rKey) = 0;
};

