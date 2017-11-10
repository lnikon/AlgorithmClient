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
 * File:   MergeSortStrategy.h
 * Author: vahag
 *
 * Created on September 29, 2017, 9:33 AM
 */

#ifndef MERGESORTSTRATEGY_H
#define MERGESORTSTRATEGY_H

#include "ISortStrategy.h"

class MergeSortStrategy : public ISortStrategy
{
public:
    MergeSortStrategy ();
    MergeSortStrategy (const MergeSortStrategy& orig);
    virtual ~MergeSortStrategy ();

    void sort (int* pArray, const int& rSize);

    void sort (int *pArray, const int& rLow, const int& rHigh);
    void merge (int * pArray, const int& rLeftLow, const int& rLeftHigh,
                const int& rRightLow, const int& rRightHigh);
} ;

#endif /* MERGESORTSTRATEGY_H */

