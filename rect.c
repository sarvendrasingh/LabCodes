/*
  code to find whether the perimeter of the given rectangle is greater than its area or not
*/

#include<stdio.h>
void main()
{
	double s1, s2, s3, s4, area, perimeter;
	printf("Enter the four consecutive sides of rectangle:\n");
	scanf("%lf%lf%lf%lf", &s1, &s2, &s3, &s4);
	area = s1*s2;
	perimeter = s1+s2+s3+s4;
	if (s1==s3 && s2==s4)
	{
		if (s1>=0 && s2>=0 && s3>=0 && s4>=0)
		{	
			if (area > perimeter)
			{	
				printf("Area is greater");
			}
			else
			{
				printf("Perimeter is greater");
			}
		}
	}
}
