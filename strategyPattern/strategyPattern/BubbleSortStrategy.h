#ifndef BUBBLESORTSTRATEGY_H
#define BUBBLESORTSTRATEGY_H

#include <iostream>

#include "ISortStrategy.h"

class BubbleSortStrategy : public ISortStrategy {
public:
  BubbleSortStrategy();
  
  void sort(int* pArray, const int& rSize);
private:

};


#endif /* BUBBLESORTSTRATEGY_H */

