#pragma warning(disable:4996)
#include<stdio.h>
int main() 
{
	int seven;
	printf("Please enter an integer:");
	scanf("%d", &seven);
	if ((seven % 10 || seven % 100 == 0) ||
		seven % 7 == 0)
		printf("Yes\n");
	else printf("No\n");

	return 0;
}