/*deletion of an index of an array


*/
#include<stdio.h>
void main()
{
    int arr[10], j, i=0, ctr;
    
    printf("Enter 10 elements for the array:\n");
    
    for(i=0; i<10 ; i++)
    {
    	    //take the values of the array from user
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the index to be deleted:\n");
    scanf("%d", &j);
    //replacing the values of an index with its next index
    for (i=j; i<9; i++)
    {
        arr[i]= arr[i+1];
    }
    
    //taking the output of the new array
    for (i=0; i<9; i++)
    {
        printf(" %d |", arr[i]);
    }
    printf("\n");
}
