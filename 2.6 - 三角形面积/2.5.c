#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, area;
	printf("������ֱ����������ߵĳ��ȣ�");
	scanf("%lf%lf%lf", &a, &b, &c);
	if ((a + b > c&& a - b < c) &&
		(a + c > b&& a - c < b) &&
		(c + b > a&& c - b < a))
	{
		p = (a + b + c) / 2;
		area = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("�����ε����Ϊ��%0.3lf", area);

	}
	else
	{
		printf("�޷�����������\n");
	}

	return 0;
}