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
 * File:   InsertionSortStrategy.cpp
 * Author: vahag
 *
 * Created on September 22, 2017, 9:08 PM
 */
#include "stdafx.h"

#include <iostream>

#include "InsertionSortStrategy.h"

/*
 * Default constructor
 */
InsertionSortStrategy::InsertionSortStrategy()
{

}

/*
 * Copy constructor
 */
InsertionSortStrategy::InsertionSortStrategy(const InsertionSortStrategy& rObj)
{

}

/*
 * Move constructor
 */
InsertionSortStrategy::InsertionSortStrategy(InsertionSortStrategy&& rObj) noexcept
{

}

/*
 * Copy assignment operator
 */
//InsertionSortStrategy& InsertionSortStrategy::operator=(const InsertionSortStrategy& rObj)
//{
//
//}

/*
 * Move assignment operator
 */
//InsertionSortStrategy& InsertionSortStrategy::operator=(InsertionSortStrategy&& rObj) noexcept
//{
//	
//}

/*
 * Destructor
 */
InsertionSortStrategy::~InsertionSortStrategy() noexcept
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

