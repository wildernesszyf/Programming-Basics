#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int radius; 
	printf("请输入圆的半径:");
	scanf("%d", &radius);

	printf("圆的面积为:%.3f\n园的周长为:%.3f", 3.14 * radius * radius, 2 * 3.14 * radius);
	return 0;
}