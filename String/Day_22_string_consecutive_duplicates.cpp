// Recursive Program to remove consecutive
#include <bits/stdc++.h>
using namespace std;

void remove(char* S)
{
	// When string is empty, return
	if (S[0] == '\0')
		return;

	// if the adjacent characters are same
	if (S[0] == S[1]) {
		
		// Shift character by one to left
		int i = 0;
		while (S[i] != '\0') {
			S[i] = S[i + 1];
			i++;
		}

		
		remove(S);
	}

	
	remove(S + 1);
}

// Driver Program
int main()
{
	char S1[] = "amit";
	remove(S1);
	cout << S1 << endl;

	char S2[] = "aabcca";
	remove(S2);
	cout << S2 << endl;

	return 0;
}
