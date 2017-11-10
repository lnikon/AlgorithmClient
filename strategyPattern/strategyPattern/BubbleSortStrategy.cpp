/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   BubbleSortStrategy.cpp
 * Author: vahag
 *
 * Created on September 21, 2017, 9:52 PM
 */
#include "stdafx.h"

#include <iostream>

#include <cassert>

#include "BubbleSortStrategy.h"

BubbleSortStrategy::BubbleSortStrategy()
{
}

BubbleSortStrategy::BubbleSortStrategy(const BubbleSortStrategy& orig)
{
}

BubbleSortStrategy::~BubbleSortStrategy()
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