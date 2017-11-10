/*
 * Copyright (C) 2017 vahag
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

/* 
 * File:   HeapSortStrategy.cpp
 * Author: vahag
 * 
 * Created on October 4, 2017, 5:35 PM
 */

#include "stdafx.h"

#include <utility>

#include <cassert>

#include "HeapSortStrategy.h"

HeapSortStrategy::HeapSortStrategy() {
}

HeapSortStrategy::HeapSortStrategy(const HeapSortStrategy& orig) {
}

HeapSortStrategy::~HeapSortStrategy() {
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
