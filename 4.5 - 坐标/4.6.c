#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int x, y;
	printf("���������꣺");
	scanf("%d%d", &x, &y);
	if(x==0)
		if(y>0)
			printf("����λ��y���ϰ���");
		else if(y==0)
			printf("����λ��ԭ������");
		else printf("����λ��y���°���");
	else if (x >= 0)
		if (y > 0)
			printf("��һ����");
		else if(y<0)
			printf("��������");
		else printf("����λ��x�������");
	else 
		if (y > 0) 
			printf("�ڶ�����");
		else if(y<0)
			printf("��������");
		else printf("����λ��x���Ұ���");
	return 0;
}