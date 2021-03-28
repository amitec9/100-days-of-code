// CPP program to find median
#include <bits/stdc++.h>
using namespace std;
double findMedian(int a[], int n)
{
	sort(a, a + n);
	// check for even case
	if (n % 2 != 0)
		return (double)a[n / 2];
	return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

// Driver program
int main()
{
	int a[] = { 90 ,100 ,78 ,89 ,67 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Median = " << findMedian(a, n) << endl;
	return 0;
}
