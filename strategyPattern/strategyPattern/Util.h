#ifndef UTIL_H
#define UTIL_H


class Util
{
public:

	/*
	 * Default constructor
	 */
	Util();

	/* Iterate through the array,
	* and print it's elements
	*/
	void printArray(const int* pArray, const int& rSize);

	/*
	 *  Shuffle array
	 */
	void shuffleArray(int* pArray, const int& rSize);

	/*
	 * Fill array with random numbers
	 */
	void fillRandomArray(int* pArray, const int& rSize);

private:
	static const int m_lowerEdge = 0;
	static const int m_upperEdge = 100;
};

#endif /* UTIL_H */

