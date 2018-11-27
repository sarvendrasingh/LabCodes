/*
  code to calculate sum of a series...

*/

#include<stdio.h>
#include<math.h>
//SumFun(int n, int N, int x);
SumFun(int n, int N, int x)
{
 //   int x, n, N;   
    double sum, a, b, c;
    for (n= 2; n<=N; n++)
    {
        b = -( pow (-x, n));
        a = (double) b/n;
        sum += a;
    }
	c = 1 + sum;
	printf("The calculated value of series is:\n");
	printf("%lf", c);
       
}

int main()
{
	int i, j, k;
	printf("Enter values of n, N and x:\n");
	scanf("%d%d%d", &i, &j, &k);
	SumFun(i, j, k);
	return 0;
}
