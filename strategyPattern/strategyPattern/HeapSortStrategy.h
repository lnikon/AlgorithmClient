#ifndef HEAPSORTSTRATEGY_H
#define HEAPSORTSTRATEGY_H

#include "ISortStrategy.h"

class HeapSortStrategy : public ISortStrategy
{
public:
    HeapSortStrategy ();

    void heapify (int* pArray, const int& rSize, const int& i);
    void sort (int* pArray, const int& rSize);
} ;

#endif /* HEAPSORTSTRATEGY_H */

