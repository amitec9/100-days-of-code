#include <stdio.h>    
   void array()
   {
         
    //Initialize array     
    int arr[] = {0 ,2 ,1 ,2 ,0};     
    int temp = 0;    
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Displaying elements of original array    
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    //Sort the array in ascending order    
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
    //Displaying elements of array after sorting    
    printf("Elements of array sorted in order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
   }  
int main()    
{  
    array();
    return 0;    
}     