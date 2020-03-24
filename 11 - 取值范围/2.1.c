#include<stdio.h>
#include<limits.h>
int main()
{
	printf("短整数                  short所占字节%d,取值范围%d~%d\n", sizeof(short),SHRT_MIN,SHRT_MAX);
	printf("基本整数                int所占字节%d,取值范围%d~%d\n", sizeof(int), SCHAR_MIN, SCHAR_MAX);
	printf("长整数                  long所占字节%d,取值范围%ld~%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("无符号短整数    unsigned short所占字节%d,取值范围%u~%u\n", sizeof(unsigned short), 0, USHRT_MAX);	
	printf("无符号基本整数  unsigned int所占字节%d,取值范围%u~%u\n", sizeof(unsigned int), 0, USHRT_MAX);
	printf("无符号长整数    unsigned long所占字节%d,取值范围%lu~%lu\n", sizeof(unsigned long), 0,ULONG_MAX);

	return 0;
}