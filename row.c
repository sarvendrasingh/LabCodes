/* 
    code to find the row sum and column sum of a matrix

*/
#include <stdio.h>
int main()
{
    int i,j,a ,b, sum =0;
    printf("Enter the order of matrix:\n");
    scanf("%d%d", &a, &b);
    int arr[a][b];
//   int arr1[a][b];
//   int arr2[a][b];
    printf("Enter the values of matrix:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            //arr[i][j]++;
            scanf("%d", &arr[i][j]);
        }
    }

//    printf("Enter the row whose sum is to be calculated:\n");

    printf("\nSum of respective rows of given matrix are:\n");    
    for (i = 0; i < a; i++)
    {
    for(j = 0; j<b ; j++)
    {
        sum += arr[i][j];
        
    }
    printf("Row %d = %d\n", (i+1), sum);
    sum = 0;
    }
    printf("\nSum of respective columns of given matrix are:\n");

    for (i = 0; i < a; i++)
    {
    for(j = 0; j<b ; j++)
    {
        sum += arr[j][i];
        
    }
    printf("Column %d = %d\n", (i+1), sum);
    sum = 0;
    }
   
    printf("\n");
    
    return 0;
}
