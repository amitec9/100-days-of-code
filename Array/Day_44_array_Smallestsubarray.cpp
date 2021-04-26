//for finding smallest subarray with sum greater than x
#include <iostream>
using namespace std;

int smallestSubWithSum(int arr[], int n, int x)
{
	// Initialize current sum and minimum length
	int curr_sum = 0, min_len = n + 1;
	int start = 0, end = 0;
	while (end < n) {
		while (curr_sum <= x && end < n)
			curr_sum += arr[end++];

		while (curr_sum > x && start < n) {
		
			if (end - start < min_len)
				min_len = end - start;
			curr_sum -= arr[start++];
		}
	}
	return min_len;
}

/* Driver program to test above function */
int main()
{
	int arr1[] = { 1, 4, 45, 6, 10, 19 };
	int x = 51;
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int res1 = smallestSubWithSum(arr1, n1, x);
	(res1 == n1 + 1) ? cout << "Not possible\n": cout << res1 << endl;

	int arr2[] = { 1, 10, 5, 2, 7 };
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	x = 9;
	int res2 = smallestSubWithSum(arr2, n2, x);
	(res2 == n2 + 1) ? cout << "Not possible\n": cout << res2 << endl;

	int arr3[] = { 1, 11, 100, 1, 0, 200, 3, 2, 1, 250 };
	int n3 = sizeof(arr3) / sizeof(arr3[0]);
	x = 280;
	int res3 = smallestSubWithSum(arr3, n3, x);
	(res3 == n3 + 1) ? cout << "Not possible\n": cout << res3 << endl;

	return 0;
}
