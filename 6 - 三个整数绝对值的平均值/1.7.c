#pragma warning(disable:4996);
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d%d%d", &a, &b, &c);
	printf("三个整数绝对值的平均值为：%d\n", (abs(a) + abs(b) + abs(c) / 3));
	return 0;
}