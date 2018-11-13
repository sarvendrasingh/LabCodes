/* to find the area of a triangle using herons formula

*/

#include<stdio.h>
#include<math.h>
void main()
{
	float a, b, c, s, area, temp;
	printf("ENTER THE SIDES OF TRIANGLE WHOSE AREA IS TO BE DETERMINED\n");
	scanf("%f %f %f", &a, &b, &c );
	s = (a + b + c) / 2.0f;
	temp = s * (s-a) * (s-b) * (s-c);
	area = sqrt(temp);
	printf("THE AREA OF THE GIVEN TRIANGLE IS %.2f", area);
}