#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c,max;
	printf("�����������������ÿո��������");
	scanf("%d%d%d", &a, &b, &c);

	//�ο�д��һ
	//max = a;
	//if (a > b) max = a;
	//else max = b;
	//if (max < c) max = c;

	//�ο�д����
	//max = a;
	//if (b > max)max = b;
	//if (c > max)max = c;

	//�ο�д����
	if (a > b&& a > c)max = a;
	if (a > c&& c > b)max = a;
	if (b > a&& a > c)max = b;
	if (b > c&& c > a)max = c;
	if (c > b&& b > a)max = c;
	printf("���ֵΪ��%d", max);
	return 0;
}