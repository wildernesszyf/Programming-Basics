#include<stdio.h>
#include<limits.h>
int main()
{

	printf("������                  short��ռ�ֽ�%zd,ȡֵ��Χ%hd~%hd\n", sizeof(short),SHRT_MIN,SHRT_MAX);
	printf("��������                int��ռ�ֽ�%zd,ȡֵ��Χ%d~%d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("������                  long��ռ�ֽ�%zd,ȡֵ��Χ%ld~%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("�޷��Ŷ�����    unsigned short��ռ�ֽ�%zd,ȡֵ��Χ0~%u\n", sizeof(unsigned short),  USHRT_MAX);	
	printf("�޷��Ż�������  unsigned int��ռ�ֽ�%zd,ȡֵ��Χ0~%u\n", sizeof(unsigned int),  UINT_MAX);
	printf("�޷��ų�����    unsigned long��ռ�ֽ�%zd,ȡֵ��Χ0~%lu\n", sizeof(unsigned long), ULONG_MAX);

	return 0;
}