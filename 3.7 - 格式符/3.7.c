#pragma warning(disable:4996)
#include<stdio.h>
int main() 
{
	int a ;
	float b ;
	double x ;
	float y ;
	char c1 , c2 ;
	scanf("%d %f %lf %e %c %c", &a, &b, &x, &y, &c1, &c2);
	printf("a=%d\nb=%f\nx=%lf\ny=%e\nc1=%c\nc2=%c",a,b,x,y,c1,c2);
	return 0;
}