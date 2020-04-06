#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	float y,x;
	printf("Please enter the value of x:");
	scanf("%f", &x);

	//·ÇÇ¶Ì×
	//if (x < 1)y = x;
	//if (1 <= x && x < 10) y = 2 * x - 1;
	//if (x >= 10) y = 3 * x - 11;
	//Ç¶Ì×

	if (x < 1)y = x;
	else if (1 >= x && x < 10) y = 2 * x - 1;
	else  y = 3 * x - 11;

	printf("y=%g\n", y);
	return 0;
}