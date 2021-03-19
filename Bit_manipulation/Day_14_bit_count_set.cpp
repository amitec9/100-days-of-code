// A simple program to count set bits
// in all numbers from 1 to n.
#include <stdio.h>


unsigned int countSetBits(unsigned int x);

// Returns count of set bits present in all
// numbers from 1 to n
unsigned int countSetBit(unsigned int n)
{
	int bitCount = 0; // initialize the result

	for (int i = 1; i <= n; i++)
		bitCount += countSetBits(i);

	return bitCount;
}

// A utility function to count set bits 
// in a number x
unsigned int countSetBits(unsigned int x)
{
	if (x <= 0)
		return 0;
	return (x % 2 == 0 ? 0 : 1) + countSetBits(x / 2);
}

// Driver program to test above functions
int main()
{
	int n = 4;
	printf("Total set bit count is %d", countSetBit(n));
	return 0;
}
