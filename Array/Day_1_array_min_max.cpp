#include<stdio.h>
void array()
{
 int arr[5] ={2,3,4,51,4};
    int size = sizeof(arr)/sizeof(int),i;
    int max=arr[0];
    int min=arr[0];
    for( i=0; i<size;i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
     printf("max = %d \n",max);
     printf("Min = %d \n",min);
}
int main()
{
  array(); 
  return 0;
  
}