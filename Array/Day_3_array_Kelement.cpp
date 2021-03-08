#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> a = { 7, 4, 6, 3, 9, 1 };
	const size_t k = 2;

	nth_element(a.begin(), a.begin() + k - 1, a.end());

	cout << "k'th smallest array element is " << a[k - 1];

	return 0;
}