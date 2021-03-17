// C program to Count set
#include <stdio.h>
int main()
{
	int n = 8;
    unsigned int count = 0;
	while (n) {
		n &= (n - 1);
		count++;
	}
    printf("%d",count);
	return 0;
}
