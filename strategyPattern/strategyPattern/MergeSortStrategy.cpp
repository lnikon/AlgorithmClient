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
 * File:   MergeSortStrategy.cpp
 * Author: vahag
 * 
 * Created on September 29, 2017, 9:33 AM
 */
#include "stdafx.h"

#include "MergeSortStrategy.h"

MergeSortStrategy::MergeSortStrategy() {
}

MergeSortStrategy::MergeSortStrategy(const MergeSortStrategy& orig) {
}

MergeSortStrategy::~MergeSortStrategy() {
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
