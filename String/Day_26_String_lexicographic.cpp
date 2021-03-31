// CPP program to generate power set in

#include <bits/stdc++.h>
using namespace std;
void print(string str, int n,int index = -1, string curr = "")
{
	// base case
	if (index == n)
		return;

	if (!curr.empty()) {
		cout << curr << "\n";
	}

	for (int i = index + 1; i < n; i++) {

		curr += str[i];
		print(str, n, i, curr);

		// backtracking
		curr = curr.erase(curr.size() - 1);
	}
	return;
}

void printSubSeq(string str)
{
	print(str, str.size());
}

// Driver code
int main()
{
	string str = "cab";
	printSubSeq(str);
	return 0;
}
