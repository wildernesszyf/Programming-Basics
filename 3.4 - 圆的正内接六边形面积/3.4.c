#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	double r, area, area1;
	printf("请输入圆的半径：");
	scanf("%lf", &r);
	area = 3 * r * r * sqrt(3) / 2;//内接六边形的面积
	area1 = PI * r * r;//圆的面积
	area1 = area / area1 * 100;//六边形占圆面积的百分比
	printf("圆正内接六边形的面积为:%.2lf\n正六边形面积占圆面的%.2f%%\n",area, area1);
	return 0;
}