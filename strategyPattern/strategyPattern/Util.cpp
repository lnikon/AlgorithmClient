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
 * File:   Util.cpp
 * Author: vahag
 *
 * Created on September 22, 2017, 9:38 AM
 */
#include "stdafx.h"

#include <iostream>
#include <iomanip>
#include <algorithm>

#include <cassert>

#include "Util.h"

/*
 * Default constructor
 */
Util::Util()
{

}

/*
 * Copy constructor
 */
Util::Util(const Util& rObj)
{

}

/*
 * Move constructor
 */
Util::Util(Util&& rObj) noexcept
{

}

/*
 * Copy assignment operator
 */
Util& Util::operator=(const Util& rObj)
{
    return *this;
}

/*
 * Move assignment operator
 */
Util& Util::operator=(Util&& rObj) noexcept
{
    return *this;
}

/*
 * Destructor
 */
Util::~Util() noexcept
{

}

/*
 * Iterate through the array,
 * and print it's elements
 */
void Util::printArray(const int* pArray, const int& rSize)
{
    std::cout << "\nprintArray invoked!" << std::endl;
    assert(pArray != nullptr);
    assert(rSize >= 0);
    for (int i = 0; i < rSize; i++)
    {
        std::cout << std::setw(3) << pArray[i] << ' ';
    }
    std::cout << "\n";
}

/*
 *  Shuffle array
 */
void Util::shuffleArray(int* pArray, const int& rSize)
{
    assert(pArray != nullptr);
    assert(rSize > 0);
    std::random_device randomDevice;
    std::uniform_int_distribution<int>
            uniformIntDist(m_lowerEdge, rSize - 1);

    for (int i = 0; i < rSize; i++)
    {
        int j = uniformIntDist(randomDevice);
        std::swap(pArray[i], pArray[j]);
    }
}

/*
 * Fill array with random integers
 */

void Util::fillRandomArray(int* pArray, const int& rSize)
{
    std::cout << "\nfillRandomArray invoked" << std::endl;
    assert(pArray != nullptr);
    assert(rSize > 0);
    std::random_device randomDevice;
    std::uniform_int_distribution<int>
            uniformIntDist(m_lowerEdge, m_upperEdge);

    for (int i = 0; i < rSize; i++)
    {
        pArray[i] = uniformIntDist(randomDevice);
    }
}