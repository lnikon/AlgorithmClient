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
 * File:   InsertionSortStrategy.h
 * Author: vahag
 *
 * Created on September 22, 2017, 9:08 PM
 */

#ifndef INSERTIONSORTSTRATEGY_H
#define INSERTIONSORTSTRATEGY_H

#include "ISortStrategy.h"


class InsertionSortStrategy: public ISortStrategy {
public:

  /*
   * Default constructor
   */
  InsertionSortStrategy();

  /*
   * Copy constructor
   */
  InsertionSortStrategy(const InsertionSortStrategy& rObj);

  /*
   * Move constructor
   */
  InsertionSortStrategy(InsertionSortStrategy&& rObj) noexcept;

  /*
   * Copy assignment operator
   */
  InsertionSortStrategy& operator=(const InsertionSortStrategy& rObj);

  /*
   * Move assignment operator
   */
  InsertionSortStrategy& operator=(InsertionSortStrategy&& rObj) noexcept;

  /*
   * Destructor
   */
  virtual ~InsertionSortStrategy();

  void sort(int* pArray, const int& rSize);

};

#endif /* INSERTIONSORTSTRATEGY_H */

