#ifndef QUICKSORTSTRATEGY_H
#define QUICKSORTSTRATEGY_H

#include <memory>

#include "ISortStrategy.h"

class QuickSortStrategy : public ISortStrategy {
public:

	/*
	 * Default constructor
	 */
	QuickSortStrategy();

	void sort(int* pArray, const int& rSize);
private:
	int partition(int* pArray, const int& rLeft, const int& rRight);
	void sort(int* pArray, const int& rLeft, const int& rRight);
};

#endif /* QUICKSORTSTRATEGY_H */

