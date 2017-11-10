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
 * File:   Util.h
 * Author: vahag
 *
 * Created on September 22, 2017, 9:38 AM
 */

#ifndef UTIL_H
#define UTIL_H

#include <random>

class Util
{
public:

    /*
     * Default constructor
     */
    Util ();

    /*
     * Copy constructor
     */
    Util (const Util& rObj);

    /*
     * Move constructor
     */
    Util (Util&& rObj) noexcept;

    /*
     * Copy assignment operator
     */
    Util& operator= (const Util& rObj);

    /*
     * Move assignment operator
     */
    Util& operator= (Util&& rObj) noexcept;

    /*
     * Destructor
     */
    virtual ~Util ();

    /*
     * Iterate through the array,
     * and print it's elements
     */
    void printArray (const int* pArray, const int& rSize);

    /*
     *  Shuffle array
     */
    void shuffleArray (int* pArray, const int& rSize);

    /*
     * Fill array with random numbers
     */
    void fillRandomArray (int* pArray, const int& rSize);

private:
    static const int m_lowerEdge = 0;
    static const int m_upperEdge = 100;
} ;

#endif /* UTIL_H */

