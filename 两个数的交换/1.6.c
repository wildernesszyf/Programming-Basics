#pragma warning(disable:4996);
#include<stdio.h>
int main()
{
	int a, b, t;
	printf("������a��ֵ��");
	scanf("%d", &a);
	printf("������b��ֵ��");
	scanf("%d", &b);

	t = a;
	a = b;
	b = t;

	printf("������a��ֵ��%d\n", a);
	printf("������b��ֵ��%d\n", b);

	return 0;	
}