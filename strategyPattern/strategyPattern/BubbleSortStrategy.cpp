#include "stdafx.h"

#include <iostream>
#include <cassert>

#include "BubbleSortStrategy.h"

BubbleSortStrategy::BubbleSortStrategy()
{
}

void BubbleSortStrategy::sort(int* pArray, const int& rSize)
{
    std::cout << "\nBubbleSortStrategy::sort(...)" << "\n";
    assert(pArray != nullptr);
    assert(rSize >= 0);
    for (int i = rSize; i > 0; i--)
    {
        for (int j = 0; j < rSize - 1; j++)
        {
            if (pArray[j] > pArray[j + 1])
            {
                std::swap(pArray[j], pArray[j + 1]);
            }
        }
    }
}