#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入a的值：");
	scanf("%d", &a);
	printf("请输入b的值：");
	scanf("%d", &b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("a的值：%d\n", a);
	printf("b的值：%d\n", b);


	return 0;
}