
#include <stdio.h>
int main()
{
    int i,j,a ,b;
    printf("Enter the order of matrix:\n");
    scanf("%d%d", &a, &b);
    int arr[a][b];
    int arr1[b][a];
    printf("Enter the values of array:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            //arr[i][j]++;
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            arr1[j][i]= arr[i][j];
        }
    }
    printf("The entered array is:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("The array after transposing is:\n");

    for(i=0; i<b; i++)
    {
        for(j=0; j<a; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}



/*    arr[1][1]=8;
    printf("Enter the index of array where value is non zero(a,b):\n");
    scanf("%d,%d", &i, &j);
    if (i==1 && j==1)
    {
        printf("You win");
    }
    else
    {
         printf("You lose");
    }
    printf("\n");
    */
