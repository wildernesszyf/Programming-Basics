#include<stdio.h>
int main()
{
	char c1='X', c2='Y';
	printf("before:c1=%c	c2=%c\n", c1, c2);
	c1 += c2;
	c2 = c1 - c2;
	c1 -= c2;
	printf(" after:c1=%c	c2=%c\n", c1, c2);
	return 0;
}