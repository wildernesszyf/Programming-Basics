#include<stdio.h>
int main()
{
	//Tips：char裏只能存放一個字符
    char c1 = 'C',c2 = 'h',c3 = 'i',c4 = 'n',c5 = 'a';	
	c1 += 4; c2 += 4; c3 += 4; c4 += 4; c5 += 4;

	printf("解密前:China\n");
	printf("解密后:%c%c%c%c%c\n", c1, c2, c3, c4, c5);

	return 0;
}