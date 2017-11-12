#include "stdafx.h"

#include <utility>
#include <cassert>

#include "HeapSortStrategy.h"

HeapSortStrategy::HeapSortStrategy() {
}

void HeapSortStrategy::heapify(int* pArray, const int& rSize, const int& i)
{
    int largest = i;
    
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    // If left child is larger than root
    if((left < rSize) && (pArray[left] > pArray[largest]))
    {
        largest = left;
    }
    
    // If right child is larger than root
    if((right < rSize) && (pArray[right] > pArray[largest]))
    {
        largest = right;
    }
    
    // if largest is not root
    if(largest != i)
    {
        // std::swap(pArray[i], pArray[largest]);
         std::swap(*(pArray + i), *(pArray + largest));
        // Recursively heapify the affected sub-tree
        heapify(pArray, rSize, largest);
    }
}

void HeapSortStrategy::sort(int* pArray, const int& rSize)
{
    // Build heap
    for(int i = rSize/2 - 1; i >= 0; i--)
    {
        heapify(pArray, rSize, i);
    }
    
    // One by one extract an element from heap
    for(int i = rSize - 1; i >= 0; i--)
    {
        // Move current root to end
        std::swap(pArray[0], pArray[i]);
        
        // Call max heapify on the reduced heap
        heapify(pArray, i, 0);
    }
}
