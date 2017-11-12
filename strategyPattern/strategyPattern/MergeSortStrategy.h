#ifndef MERGESORTSTRATEGY_H
#define MERGESORTSTRATEGY_H

#include "ISortStrategy.h"

class MergeSortStrategy : public ISortStrategy
{
public:
    MergeSortStrategy ();

	/*
	* Call this function for sorting
	*/
    void sort (int* pArray, const int& rSize);

private:
    void sort (int *pArray, const int& rLow, const int& rHigh);
    void merge (int * pArray, const int& rLeftLow, const int& rLeftHigh,
                const int& rRightLow, const int& rRightHigh);
} ;

#endif /* MERGESORTSTRATEGY_H */

