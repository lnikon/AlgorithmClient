#include "stdafx.h"

#include <iostream>

#include "InsertionSortStrategy.h"

/*
 * Default constructor
 */
InsertionSortStrategy::InsertionSortStrategy()
{

}
	
void InsertionSortStrategy::sort(int* pArray, const int& rSize)
{
    std::cout << "InsertionSortStrategy::sort(...)\n";
    for (int i = 1; i < rSize; i++)
    {
        int j = i;
        while (j > 0 && pArray[j - 1] > pArray[j])
        {
            std::swap(pArray[j], pArray[j - 1]);
            j--;
        }
    }
}

