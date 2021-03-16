#include<stdio.h>
void array()
{
    int arr[5] ={2,3,4,51,4};
    int size = sizeof(arr)/sizeof(int),i;
    for( i=size-1; i>=0;i--)
    {
      printf("%d \n",arr[i]);  
    }
     
}
int main()
{
  array(); 
  return 0;
}