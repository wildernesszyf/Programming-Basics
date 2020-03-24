#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	long a, b;
	printf("\t\t\t\t\t\t\t\t\t\t请使用空格隔开\t\t\t\t\t\n"
			"\n\n\n\n\t\t\t\t\t计算器\t\t\t\t\t\n"
			"\t\t\t\t\t--------------------------\t\t\t\t\t\n"
			"\t\t\t\t\t请输入任意两个整数：");
	scanf("%d%d", &a, &b);
	printf("\t\t\t\t\t两数之和为：%ld\n"
		"\t\t\t\t\t两数之差为：%ld\n"
		"\t\t\t\t\t两数乘积为：%ld\n"
		"\t\t\t\t\t两数之商为：%ld\n"
		"\t\t\t\t\t两数余数为：%ld\n", a + b, a - b, a * b, a / b, a % b);
	return 0;
}