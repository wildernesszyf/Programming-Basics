#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, i, j, min;
	printf("������ʮ��������");
	scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	min = a;
	if (b < min)min = b;
	if (c < min)min = c;
	if (d < min)min = d;
	if (e < min)min = e;
	if (f < min)min = f;
	if (g < min)min = g;
	if (h < min)min = h;
	if (i < min)min = i;
	if (j < min)min = j;
	printf("��СֵΪ��%d",min);
	return 0;
}