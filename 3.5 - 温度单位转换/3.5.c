#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	double C, F;
	printf("�����뻪���¶ȵ�ֵ:");
	scanf("%lf", &F);
	C = (F - 32) * 5 / 9;
	printf("�����¶ȵ�ֵΪ��%.2lf", C );
	return 0;
}