#include "stdafx.h"

#include "MergeSortStrategy.h"

MergeSortStrategy::MergeSortStrategy() {
}

void MergeSortStrategy::sort(int* pArray, const int& rSize) 
{
    sort(pArray, 0, rSize - 1);
}

void MergeSortStrategy::merge(int* pArray, const int& rLeftLow, 
        const int& rLeftHigh, const int& rRightLow, const int& rRightHigh)
{
    int length = rRightHigh - rLeftLow + 1;
    int left = rLeftLow;
    int right = rRightLow;
    int *pTemp = new int[length];
    
    for(int i = 0; i < length; i++)
    {
        if(left > rLeftHigh)
        {
            pTemp[i] = pArray[right++];
        }
        else if(right > rRightHigh)
        {
            pTemp[i] = pArray[left++];
        }
        else if(pArray[left] <= pArray[right])
        {
            pTemp[i] = pArray[left++];
        }
        else
        {
            pTemp[i] = pArray[right++];
        }
    }
    
    left = rLeftLow;
    for(int i = 0; i < length; i++)
    {
        pArray[left++] = pTemp[i];
    }
    
    delete[] pTemp;
}

void MergeSortStrategy::sort(int* pArray, const int& rLow, const int& rHigh)
{
    if(rLow >= rHigh)
    {
        return;
    }
    else
    {
        int mid = (rLow + rHigh)/2;
        sort(pArray, rLow, mid);
        sort(pArray, mid + 1, rHigh);
        merge(pArray, rLow, mid, mid + 1, rHigh);
    }
}
