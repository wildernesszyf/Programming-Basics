#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	double grade;
	printf("Please enter the grade:");
	scanf("%f", &grade);
	if (grade >= 0 && grade <= 100)
	{
		if (grade >= 90)printf("A");
		else if (grade >= 80) printf("B");
		else if (grade >= 70) printf("C");
		else if (grade >= 60) printf("D");
		else printf("E");
	}
	else printf("error:Number is out of range");
	return 0;
}