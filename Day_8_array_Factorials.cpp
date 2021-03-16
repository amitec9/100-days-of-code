#include<stdio.h>
int main()
{
    int fac=1;

    for(int i=1;i<=10;i++)
    {
        fac *= i;
        
    }
    printf("Factorial of %d \n",fac);
}