#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int year;
	printf("������һ�����:");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) ||
		(year % 400 == 0)) 
		printf("����������.\n");
	else printf("���겻������.\n");
	return 0;
}