#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	char ch;
	printf("请输入一个大写英文字母:");
	scanf("%c", &ch);
	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
	printf("%c\n", ch);
	return 0;
}