// C++ program to find minimum number of
#include <bits/stdc++.h>
using namespace std;
char flip(char ch)
{
	return (ch == '0') ? '1' : '0';
}

int getFlipWithStartingCharcter(string str,char expected)
{
	int flipCount = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != expected)
			flipCount++;

		expected = flip(expected);
	}
	return flipCount;
}
int minFlipToMakeStringAlternate(string str)
{
	return min(getFlipWithStartingCharcter(str, '0'),
			getFlipWithStartingCharcter(str, '1'));
}

int main()
{
	string str = "0001010111";
	cout << minFlipToMakeStringAlternate(str);
	return 0;
}
