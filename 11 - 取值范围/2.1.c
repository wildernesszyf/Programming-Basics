#include<stdio.h>
#include<limits.h>
int main()
{

	printf("短整数                  short所占字节%zd,取值范围%hd~%hd\n", sizeof(short),SHRT_MIN,SHRT_MAX);
	printf("基本整数                int所占字节%zd,取值范围%d~%d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("长整数                  long所占字节%zd,取值范围%ld~%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("无符号短整数    unsigned short所占字节%zd,取值范围0~%u\n", sizeof(unsigned short),  USHRT_MAX);	
	printf("无符号基本整数  unsigned int所占字节%zd,取值范围0~%u\n", sizeof(unsigned int),  UINT_MAX);
	printf("无符号长整数    unsigned long所占字节%zd,取值范围0~%lu\n", sizeof(unsigned long), ULONG_MAX);

	return 0;
}