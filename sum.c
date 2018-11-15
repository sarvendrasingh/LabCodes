/* code to find the sum of two matrices

*/
#include <stdio.h>
int main()
{
    int i,j,a ,b;
    printf("Enter the order of matrix:\n");
    scanf("%d%d", &a, &b);
    int arr[a][b];
    int arr1[a][b];
    int arr2[a][b];
    printf("Enter the values of array 1:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            //arr[i][j]++;
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the values of array 2:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            //arr[i][j]++;
            scanf("%d", &arr1[i][j]);
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            //arr[i][j]++;
            arr2[i][j] = (arr[i][j] + arr1[i][j]);
        }
    }
    printf("The addition of the matrices are:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            //arr[i][j]++;
            printf("%d\t",     arr2[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
