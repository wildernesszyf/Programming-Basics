#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	char ch;
	printf("������һ����дӢ����ĸ:");
	scanf("%c", &ch);
	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
	printf("%c\n", ch);
	return 0;
}