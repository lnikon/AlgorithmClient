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
 * File:   QuickSortStrategy.cpp
 * Author: vahag
 *
 * Created on September 22, 2017, 12:51 AM
 */
#include "stdafx.h"

#include <iostream>

#include "QuickSortStrategy.h"

/*
 * Default constructor
 */
QuickSortStrategy::QuickSortStrategy()
{

}

/*
 * Copy constructor
 */
QuickSortStrategy::QuickSortStrategy(const QuickSortStrategy& rObj)
{

}

/*
 * Move constructor
 */
QuickSortStrategy::QuickSortStrategy(QuickSortStrategy&& rObj) noexcept
{

}

/*
 * Copy assignment operator
 */
QuickSortStrategy& QuickSortStrategy::operator=(const QuickSortStrategy& rObj)
{
    return *this;
}

/*
 * Move assignment operator
 */
QuickSortStrategy& QuickSortStrategy::operator=(QuickSortStrategy&& rObj) noexcept
{
    return *this;
}

/*
 * Destructor
 */
QuickSortStrategy::~QuickSortStrategy() noexcept
{

}

void QuickSortStrategy::sort(int* pArray, const int& rSize)
{
    std::cout << "QuickSortStrategy::sort(...)" << "\n";

}

