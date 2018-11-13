#include<stdio.h>
void main()
{
    int array1[10], ctr;
    printf("%d", array1[4]);
    
    //initialisation of the array[whole]
    int array3[10] ={1,2,3,4,5,6,7,8,9,0};
    printf("Initialised array:");
    for( ctr=0; ctr<10; ctr++)
    {
        printf("index %d : value %d\n", ctr, array3[ctr]);
    }
    
    //partial initialisation of the array
    int array4[10] ={1,2,9,0};
   printf(" Partially Initialised array:");
    for( ctr=0; ctr<10; ctr++)
    {
        printf("index %d : value %d\n", ctr, array4[ctr]);
    }
    
    //not defining the size of array
   
    int array5[] ={1,2,9,0};
    printf("Initialised array without its size:");
    for( ctr=0; ctr<10; ctr++)
    {
        printf("index %d : value %d\n", ctr, array5[ctr]);
    }
}
