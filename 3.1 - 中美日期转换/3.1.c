#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
	//Tips1�����R������Ҏ�t��ֻ������ĸ�����֡����Q���ɣ��Ҕ��ֲ��������_�^��ԭ�t��Ҋ��֪�x
	short year, month, day;
	printf("������������׼����(mm-dd-yyyy):");
	scanf("%hd-%hd-%hd", &month, &day, &year);
	printf("�й���׼����:%hd-%hd-%hd", year,month,day);
	return 0;
}