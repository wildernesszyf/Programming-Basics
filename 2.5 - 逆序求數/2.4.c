#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int integer, hundred,ten,one;
	printf("������һ����λ��������");
	scanf("%d", &integer);
	hundred = integer / 100;
	ten = (integer - hundred * 100) / 10;
	one = integer % 10;
	printf("����������Ϊ%d", hundred + ten * 10 + one * 100);
	return 0;
}