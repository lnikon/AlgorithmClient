#include "stdafx.h"

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <random>
#include <cassert>

#include "Util.h"

/*
 * Default constructor
 */
Util::Util()
{

}

/*
 * Iterate all over the array,
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