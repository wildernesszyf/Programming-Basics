#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	long int year,month,day;
	printf("請輸入身份證號：");
	scanf("%*6d%4d%2d%2d",&year,&month,&day);
	printf("您的出生年月為：%d年%d月%d日",year,month,day);
	return 0;
}