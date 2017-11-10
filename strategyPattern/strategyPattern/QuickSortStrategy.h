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
 * File:   QuickSortStrategy.h
 * Author: vahag
 *
 * Created on September 22, 2017, 12:51 AM
 */

#ifndef QUICKSORTSTRATEGY_H
#define QUICKSORTSTRATEGY_H

#include <memory>

#include "ISortStrategy.h"

class QuickSortStrategy: public ISortStrategy {
public:

  /*
   * Default constructor
   */
  QuickSortStrategy();

  /*
   * Copy constructor
   */
  QuickSortStrategy(const QuickSortStrategy& rObj);

  /*
   * Move constructor
   */
  QuickSortStrategy(QuickSortStrategy&& rObj) noexcept;

  /*
   * Copy assignment operator
   */
  QuickSortStrategy& operator=(const QuickSortStrategy& rObj);

  /*
   * Move assignment operator
   */
  QuickSortStrategy& operator=(QuickSortStrategy&& rObj) noexcept;

  /*
   * Destructor
   */
  virtual ~QuickSortStrategy();
  
  
  void sort(int* pArray, const int& rSize);
  
  void sort(std::shared_ptr<int> pArray, const int& rSize);
};

#endif /* QUICKSORTSTRATEGY_H */

