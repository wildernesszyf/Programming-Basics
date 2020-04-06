#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int x, y;
	printf("请输入坐标：");
	scanf("%d%d", &x, &y);
	if(x==0)
		if(y>0)
			printf("坐标位于y轴上半轴");
		else if(y==0)
			printf("坐标位于原点是上");
		else printf("坐标位于y轴下半轴");
	else if (x >= 0)
		if (y > 0)
			printf("第一象限");
		else if(y<0)
			printf("第四象限");
		else printf("坐标位于x轴左半轴");
	else 
		if (y > 0) 
			printf("第二象限");
		else if(y<0)
			printf("第三象限");
		else printf("坐标位于x轴右半轴");
	return 0;
}