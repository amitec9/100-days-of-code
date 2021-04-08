#include <stdio.h>
bool fun(int A[], int arr_size, int sum)
{
	int l, r;
	for (int i = 0; i < arr_size - 2; i++) {

		// Fix the second element as A[j]
		for (int j = i + 1; j < arr_size - 1; j++) {

			// Now look for the third number
			for (int k = j + 1; k < arr_size; k++) {
				if (A[i] + A[j] + A[k] == sum) {
					printf("Triplet is %d, %d, %d",A[i], A[j], A[k]);
					return true;
				}
			}
		}
	}
	return false;
}

/* Driver program to test above function */
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int sum = 22;
	int arr_size = sizeof(A) / sizeof(A[0]);
	fun(A, arr_size, sum);
	return 0;
}
