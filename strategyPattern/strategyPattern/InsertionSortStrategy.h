#ifndef INSERTIONSORTSTRATEGY_H
#define INSERTIONSORTSTRATEGY_H

#include "ISortStrategy.h"

class InsertionSortStrategy: public ISortStrategy {
public:

  /*
   * Default constructor
   */
  InsertionSortStrategy();

  void sort(int* pArray, const int& rSize);
  };

#endif /* INSERTIONSORTSTRATEGY_H */

