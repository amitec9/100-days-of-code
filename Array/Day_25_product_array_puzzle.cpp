// C++ program for product array puzzle
#include <bits/stdc++.h>
using namespace std;
void fun(int arr[], int n)
{
	int prod = 1;
	for (int i = 0; i < n; i++)
		prod *= arr[i];

	for (int i = 0; i < n; i++) {
		cout << (int)(prod * pow(arr[i], -1)) << ' ';
	}
}


int main()
{
	int arr[] = { 10, 3, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	fun(arr, n);
	return 0;
}

