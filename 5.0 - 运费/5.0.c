#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int s;
	float discount=0;
	printf("Please enter the distance:");
	scanf("%d", &s);
	if (s < 250)
		discount = 0;
	else if (s < 500)
		discount = 0.02;
	else if (s < 1000)
		discount = 0.05;
	else if (s < 2000)
		discount = 0.08;
	else if (s < 3000)
		discount = 0.10;
	else discount = 0.15;
	printf("The discount is %g%%", discount*100);
	return 0;
}
