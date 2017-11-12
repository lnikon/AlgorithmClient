#ifndef QUICKSORTSTRATEGY_H
#define QUICKSORTSTRATEGY_H

#include <memory>

#include "ISortStrategy.h"

class QuickSortStrategy: public ISortStrategy {
public:

  /*
   * Default constructor
   */
  QuickSortStrategy();
    
  void sort(int* pArray, const int& rSize);
  };

#endif /* QUICKSORTSTRATEGY_H */

