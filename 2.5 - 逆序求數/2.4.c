#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int integer, hundred,ten,one;
	printf("请输入一个三位数整数：");
	scanf("%d", &integer);
	hundred = integer / 100;
	ten = (integer - hundred * 100) / 10;
	one = integer % 10;
	printf("逆序输出结果为%d", hundred + ten * 10 + one * 100);
	return 0;
}