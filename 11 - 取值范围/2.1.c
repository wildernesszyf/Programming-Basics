#include<stdio.h>
#include<limits.h>
int main()
{
	printf("������                  short��ռ�ֽ�%d,ȡֵ��Χ%d~%d\n", sizeof(short),SHRT_MIN,SHRT_MAX);
	printf("��������                int��ռ�ֽ�%d,ȡֵ��Χ%d~%d\n", sizeof(int), SCHAR_MIN, SCHAR_MAX);
	printf("������                  long��ռ�ֽ�%d,ȡֵ��Χ%ld~%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("�޷��Ŷ�����    unsigned short��ռ�ֽ�%d,ȡֵ��Χ%u~%u\n", sizeof(unsigned short), 0, USHRT_MAX);	
	printf("�޷��Ż�������  unsigned int��ռ�ֽ�%d,ȡֵ��Χ%u~%u\n", sizeof(unsigned int), 0, USHRT_MAX);
	printf("�޷��ų�����    unsigned long��ռ�ֽ�%d,ȡֵ��Χ%lu~%lu\n", sizeof(unsigned long), 0,ULONG_MAX);

	return 0;
}