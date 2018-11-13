/*programme to search for a value in an array after taking the values from user

*/

#include<stdio.h>
void main()
{
    int arr[10], j, i;
    printf("Enter values for 10 elements:\n");
   
    for(i=0; i<10 ; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("The elements in the array are:\n");
    
    for (i=0; i<9; i++)
    {
        printf(" %d |", arr[i]);
    }
    
    printf("\nEnter the value to search in the array:\n");
    scanf("%d", &j);
    
    for (i=0; i<9; i++)
    {
        if(arr[i]==j)
        {
            printf("value %d found at index %d\n", j, i);
        }
    }
}
