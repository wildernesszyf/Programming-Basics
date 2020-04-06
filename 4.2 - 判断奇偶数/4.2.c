#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int number;
	printf("请输入一个整数:");
	scanf("%d", &number);
	if(number%2==0)
	printf("这个数是偶数.\n");
	else printf("这个数是奇数.\n");
	return 0;
}