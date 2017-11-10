/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ISortingAlgorithm.h
 * Author: vahag
 *
 * Created on September 21, 2017, 8:06 PM
 */

#ifndef ISORTINGALGORITHM_H
#define ISORTINGALGORITHM_H

class ISortingAlgorithm {
public:
  ISortingAlgorithm();
  ISortingAlgorithm(const ISortingAlgorithm& orig);
  virtual ~ISortingAlgorithm();
  
  void sort(int* pArray, const int& rSize);
private:

};

#endif /* ISORTINGALGORITHM_H */

