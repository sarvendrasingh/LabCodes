#include <stdio.h>
int main()
{
    int i,j,a ,b;
    printf("Enter the order of matrix:\n");
    scanf("%d%d", &a, &b);
    int arr[a][b];
//    int arr1[a][b];
//    int arr2[a][b];
    printf("Enter the values of array :\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            //arr[i][j]++;
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The diagonal elements of enetred array is:\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            //arr[i][j]++;
            //scanf("%d", &arr[i][j]);
            if(i==j)
            {
            	printf("%d\t", arr[i][j]);
            }
            else
            {
            	printf("\t");
            }
            
        }
        printf("\n");
    }
    
    
    return 0;
}
