#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, area;
	printf("请输入分别输入三条边的长度：");
	scanf("%lf%lf%lf", &a, &b, &c);
	if ((a + b > c&& a - b < c) &&
		(a + c > b&& a - c < b) &&
		(c + b > a&& c - b < a))
	{
		p = (a + b + c) / 2;
		area = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("三角形的面积为：%0.3lf", area);

	}
	else
	{
		printf("无法构成三角形\n");
	}

	return 0;
}