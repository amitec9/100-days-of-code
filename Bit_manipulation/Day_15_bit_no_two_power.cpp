#include<stdio.h>
#include<stdbool.h>

bool isPowerOfTwo(int n)
{
if (n == 0)
	return 0;
while (n != 1)
{
	if (n%2 != 0)
		return 0;
	n = n/2;
}
return 1;
}

/*Driver code*/
int main()
{
isPowerOfTwo(64)? printf("Yes\n"): printf("No\n");
isPowerOfTwo(31)? printf("Yes\n"): printf("No\n");
return 0;
}
