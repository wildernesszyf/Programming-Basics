#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, temp, x1,x2;
	printf("\n��ax^2+bx+c=0 �ĸ�,������a b c��ֵ��");
	scanf("%lf%lf%lf", &a, &b, &c);

	temp = b * b - 4 * a * c;
	if (temp < 0 ) 
	{
		printf("������ʵ����");
	}
	else
	{ 
		x1 = (-b + sqrt(temp)) / (2 * a);
		x2 = (-b - sqrt(temp)) / (2 * a);
		printf("\nax^2+bx+c=0 �ĸ�Ϊ%0.2lf   %0.2lf\n", x1, x2);
	}
	
	return 0;
}