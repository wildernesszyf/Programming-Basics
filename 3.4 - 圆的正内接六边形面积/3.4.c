#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	double r, area, area1;
	printf("������Բ�İ뾶��");
	scanf("%lf", &r);
	area = 3 * r * r * sqrt(3) / 2;//�ڽ������ε����
	area1 = PI * r * r;//Բ�����
	area1 = area / area1 * 100;//������ռԲ����İٷֱ�
	printf("Բ���ڽ������ε����Ϊ:%.2lf\n�����������ռԲ���%.2f%%\n",area, area1);
	return 0;
}