#include <bits/stdc++.h>
#define No 256
using namespace std;

void printDuplicates(string s)
{
	int count[No] = {}; 
	for(int i=0; i<s.size(); i++)
		count[s[i]]++; 
	for(int i=0; i<s.size(); i++)
		if(count[s[i]] > 1) //
			{
			cout<<s[i]<<"   count = "<<count[s[i]]<<endl;
			count[s[i]] = 0;
			}
}
int main()
{
	string s  = "AmitKumar";
	cout<<"Input string is "<<s<<endl;
	printDuplicates(s);
}