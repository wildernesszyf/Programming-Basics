#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	double C, F;
	printf("请输入华氏温度的值:");
	scanf("%lf", &F);
	C = (F - 32) * 5 / 9;
	printf("摄氏温度的值为：%.2lf", C );
	return 0;
}