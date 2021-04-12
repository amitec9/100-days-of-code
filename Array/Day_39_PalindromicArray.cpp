
// if an array is PalinArray or not
#include<bits/stdc++.h>
using namespace std;

	bool isPalindrome(int N)
	{
		string str = "" + N;
		int len = str.length();
		for (int i = 0; i < len / 2; i++) {
			if (str[i] != str[len - 1 - i])
				return false;
		}
		return true;
	}


	bool Array(int arr[] , int n)
	{

		for (int i = 0; i < n; i++) {
			bool ans = isPalindrome(arr[i]);
			if (ans == false)
				return false;
		}
		return true;
	}

	// Driver code
	int main()
	{
		int arr[] = { 121, 131, 20 };

		// length of array
		int n = sizeof(arr)/sizeof(arr[0]);

		bool res = Array(arr, n);
		if (res == true)
			cout<<"Array is a PalinArray";
		else
			cout<<"Array is not a PalinArray";
	}
