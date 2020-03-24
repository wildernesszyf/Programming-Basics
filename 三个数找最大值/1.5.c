#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c,max;
	printf("请输入三个整数（用空格隔开）：");
	scanf("%d%d%d", &a, &b, &c);

	//参考写法一
	//max = a;
	//if (a > b) max = a;
	//else max = b;
	//if (max < c) max = c;

	//参考写法二
	//max = a;
	//if (b > max)max = b;
	//if (c > max)max = c;

	//参考写法三
	if (a > b&& a > c)max = a;
	if (a > c&& c > b)max = a;
	if (b > a&& a > c)max = b;
	if (b > c&& c > a)max = c;
	if (c > b&& b > a)max = c;
	printf("最大值为：%d", max);
	return 0;
}