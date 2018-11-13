/*programme to print the array after taking its values from user

*/
#include<stdio.h>
void main()
{
    int i=0,array[10];
    //input
    while(i<10)
    {
        scanf("%d", &array[i]);
        i++;
    }
    printf("The array is: \n");
    
    //output
    for(i=0; i<10; i++)
    {
        
        printf("| %d  ", array[i]);
    }
    printf("|\n");
}
