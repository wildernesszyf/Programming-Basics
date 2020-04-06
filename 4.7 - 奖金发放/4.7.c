#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	double profit;
	printf("Please enter the current month's profit:");
	scanf("%lf", &profit);
	if (profit <= 100000)
		printf("The award is %g£¤", profit * 0.1);
	else if(profit<=200000)
		printf("The award is %g£¤", profit * 0.12);
	else if (profit <= 400000)
		printf("The award is %g£¤", profit * 0.14);
	else if (profit <= 600000)
		printf("The award is %g£¤", profit * 0.16);
	else if (profit <= 1000000)
		printf("The award is %g£¤", profit * 0.18);
	else
		printf("The award is %g£¤", profit * 0.2);

		return 0;
}