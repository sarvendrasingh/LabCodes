/*insertion of a value in an array

*/
#include<stdio.h>
void main()
{
    int arr[5],i,j,value, temp;
    printf("Enter 5 values for array:\n");
    
    //input
    for(i=0 ; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter a value:\n");
    
    scanf("%d", &value);
    
    printf("Enter an index from 0 to 4\n");
    
    scanf("%d", &j);
     
     //will start from last index 
    for(i=4; i>j ;i--)
    {  
        arr[i]= arr[i-1];
          
    }
    
    arr[i]= value;
    
    printf("The array is now:\n");
    // output
    for(i=0 ; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
