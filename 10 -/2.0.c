#pragma warning(disable:4996)
#include<stdio.h>
int main(void)
{

	printf("int在我的计算机中占%d个字节.\n", sizeof(int));
	printf("short在我的计算机中占%d个字节.\n", sizeof(short));
	printf("long在我的计算机中占%d个字节.\n", sizeof(long));
	
	return 0;
}