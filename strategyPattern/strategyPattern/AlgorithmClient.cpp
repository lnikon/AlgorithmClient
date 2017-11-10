/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   AlgorithmClient.cpp
 * Author: vahag
 *
 * Created on September 21, 2017, 9:50 PM
 */
#include "stdafx.h"

#include <iostream>

#include "AlgorithmClient.h"

AlgorithmClient::AlgorithmClient()
{
    m_sortStrategy = nullptr;
}

AlgorithmClient::AlgorithmClient(const AlgorithmClient& orig)
{
}

AlgorithmClient::~AlgorithmClient()
{
    delete m_sortStrategy;
}

void AlgorithmClient::SetSortStrategy(ISortStrategy* pSortStrategy)
{
    m_sortStrategy = pSortStrategy;
}

const ISortStrategy* AlgorithmClient::GetSortStrategy() const
{
    return m_sortStrategy;
}

void AlgorithmClient::performSort(int* pArray, const int& rSize)
{
    m_sortStrategy->sort(pArray, rSize);
}

