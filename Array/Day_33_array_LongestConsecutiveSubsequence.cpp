// C++ program to find longest
#include <bits/stdc++.h>
using namespace std;
int findLongest(int arr[], int n)
{
	unordered_set<int> S;
	int ans = 0;

	// Hash all the array elements
	for (int i = 0; i < n; i++)
		S.insert(arr[i]);

	for (int i = 0; i < n; i++)
	{
		if (S.find(arr[i] - 1) == S.end())
		{
			int j = arr[i];
			while (S.find(j) != S.end())
				j++;

	
			ans = max(ans, j - arr[i]);
		}
	}
	return ans;
}

// Driver code
int main()
{
	int arr[] = { 1, 9, 3, 10, 4, 20, 2 };
	int n = sizeof arr / sizeof arr[0];
	cout << "Length of the Longest contiguous subsequence is "<< findLongest(arr, n);
	return 0;
}
