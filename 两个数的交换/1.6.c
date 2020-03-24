#pragma warning(disable:4996);
#include<stdio.h>
int main()
{
	int a, b, t;
	printf("请输入a的值：");
	scanf("%d", &a);
	printf("请输入b的值：");
	scanf("%d", &b);

	t = a;
	a = b;
	b = t;

	printf("交换后a的值：%d\n", a);
	printf("交换后b的值：%d\n", b);

	return 0;	
}