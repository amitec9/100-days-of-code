// C++ program to find whether an array is subset of another array
#include <bits/stdc++.h>
using namespace std;
bool isSubset(int arr1[], int arr2[],int m, int n)
{
	int i = 0, j = 0;

	if (m < n)
		return 0;

	sort(arr1, arr1 + m);
	sort(arr2, arr2 + n);

	
	while (i < n && j < m)
	{
	
		if (arr1[j] < arr2[i])
			j++;
		else if (arr1[j] == arr2[i])
		{
			j++;
			i++;
		}
		else if (arr1[j] > arr2[i])
			return 0;
	}

	return (i < n) ? false : true;
}

// Driver Code
int main()
{
	int arr1[] = { 11, 1, 13, 21, 3, 7 };
	int arr2[] = { 11, 3, 7, 1 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	if (isSubset(arr1, arr2, m, n))
		printf("arr2[] is subset of arr1[] ");
	else
		printf("arr2[] is not a subset of arr1[] ");

	return 0;
}
