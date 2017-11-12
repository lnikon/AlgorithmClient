#include "stdafx.h"

#include <iostream>

#include "AlgorithmClient.h"

AlgorithmClient::AlgorithmClient()
{
	m_sortStrategy = nullptr;
}

AlgorithmClient::AlgorithmClient(const AlgorithmClient& rClient)
{
	m_sortStrategy = rClient.GetSortStrategy();
}

AlgorithmClient::~AlgorithmClient()
{
	delete m_sortStrategy;
}

void AlgorithmClient::SetSortStrategy(ISortStrategy* pSortStrategy)
{
	if (pSortStrategy != nullptr)
	{
		m_sortStrategy = pSortStrategy;
	}
}

ISortStrategy* AlgorithmClient::GetSortStrategy() const
{
	return m_sortStrategy;
}

void AlgorithmClient::SetSearchStrategy(ISearchStrategy * pSearchStrategy)
{
	if (pSearchStrategy != nullptr)
	{
		m_searchStrategy = pSearchStrategy;
	}
}

ISearchStrategy * AlgorithmClient::GetSearchStrategy() const
{
	return m_searchStrategy;
}

void AlgorithmClient::performSort(int* pArray, const int& rSize)
{
	m_sortStrategy->sort(pArray, rSize);
}

int AlgorithmClient::performSearch(int * pArray, const int & rSize, const int & rKey)
{
	return m_searchStrategy->search(pArray, rSize, rKey);
}

