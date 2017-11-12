#ifndef ALGORITHMCLIENT_H
#define ALGORITHMCLIENT_H

#include <memory>

#include "ISortStrategy.h"
#include "ISearchStrategy.h"

class AlgorithmClient {
public:
	AlgorithmClient();
	AlgorithmClient(const AlgorithmClient& rClient);
	virtual ~AlgorithmClient();

	void SetSortStrategy(ISortStrategy* pSortStrategy);
	ISortStrategy* GetSortStrategy() const;

	void SetSearchStrategy(ISearchStrategy* pSearchStrategy);
	ISearchStrategy* GetSearchStrategy() const;

	void performSort(int* pArray, const int& rSize);
	int performSearch(int* pArray, const int& rSize, const int& rKey);
private:
	ISortStrategy* m_sortStrategy;
	ISearchStrategy* m_searchStrategy;
};

#endif /* ALGORITHMCLIENT_H */

