/*
program to find the area of a cirle of given radius
*/
#include<stdio.h>
//#include<math.h>
int main()
{
	float r=0.0f, a=0.0f;
	char ch;
	do
	{
		printf("Enter the radius of circle to find its area:\n");
		scanf("%f", &r);
		a = 3.14159 * r * r ;
		printf("The area of the circle of radius %f is %.4f\n", r, a);
		printf("Do you wish to continue?\t [y/n]\n");
		scanf(" %c ", &ch);
	}while( ch == 'y' );
	if (ch == 'n')
	{
		printf("Goodbye\n");
	}
	else 
	{
		printf("Sorry! Wrong input.\n");
	}
	return 0;
}
