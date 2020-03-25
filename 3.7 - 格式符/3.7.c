#pragma warning(disable:4996)
#include<stdio.h>
int main() 
{
	int a = 3;
	float b = 8.5;
	double x = 1234.5678;
	float y = 71.82;
	char c1 = 'A', c2 = 'a';
	scanf("%d %f %lf %e %c %c", &a, &b, &x, &y, &c1, &c2);
	printf("%d %f %lf %e %c %c",a,b,x,y,c1,c2);
	return 0;
}