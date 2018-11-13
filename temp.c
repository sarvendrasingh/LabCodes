/* to covert unit of temperatures
*/

#include<stdio.h>
void main()
{
	int option = 0;
	float f, c;
	printf("ENTER 1 TO CONVERT *F TO *C\nENTER 2 TO CONVERT *C TO *F\n");
	scanf("%d", option);
	if (option == 1)
	{
		printf("ENTER THE VALUE IN *F\n");
		scanf("%f", &f);
		c = ( f - 32.0f ) * 5.0f / 9.0f;
		printf("THE EQUIVALENT VALUE IN *C IS : %.2f\n ", c);
	}
	else if (option == 2)
	{
		printf("ENTER THE VALUE IN *C\n");
		scanf("%f", &c);
		f = (9.0f / 5.0f) * c + 32.0f;
		printf("THE EQUIVALENT VALUE IN *F IS : %.2f\n ", f);	
	}
	else
	{
		printf("THE ENTERED VALUE IS NOT VALID\n");
	}

}                                                                        