#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	long a, b;
	printf("\t\t\t\t\t\t\t\t\t\t��ʹ�ÿո����\t\t\t\t\t\n"
			"\n\n\n\n\t\t\t\t\t������\t\t\t\t\t\n"
			"\t\t\t\t\t--------------------------\t\t\t\t\t\n"
			"\t\t\t\t\t��������������������");
	scanf("%d%d", &a, &b);
	printf("\t\t\t\t\t����֮��Ϊ��%ld\n"
		"\t\t\t\t\t����֮��Ϊ��%ld\n"
		"\t\t\t\t\t�����˻�Ϊ��%ld\n"
		"\t\t\t\t\t����֮��Ϊ��%ld\n"
		"\t\t\t\t\t��������Ϊ��%ld\n", a + b, a - b, a * b, a / b, a % b);
	return 0;
}