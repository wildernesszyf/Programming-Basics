#include<stdio.h>
#include<math.h>
int main()
{
	//Tips1�����е�׃�����x�Z��Ҫ���ڳ�������_ʼλ��
	//Tips2�����е�С����c�Z���ж�����double��惦��
	//Tips3���\����ă��ȼ��ͽY����
	//Tips4����%.fݔ���r���Ē������
	//Tips4��ݔ��r��С��45%��Ո�Ġ�С����ʽ0.45��ݔ���r45%���˕r��%Ҫ�Ãɂ�%%�M��ݔ��

	int d = 300000, p = 6000, year, month, day;
	double r = 0.01, m;
	//float r = 0.01f,m;

	printf("���������д���һ�ʿ�d��׼��ÿ�»����Ϊp,������Ϊr������������ܻ��塣\n");
	m = log(p / (p - d * r)) / log(1 + r);//69.7����
	year=(int)m / 12;
	month = (int)m % 12;
	day = (int)(30 * (m - (int)m));
	day = (int)(30 * (69.7 - 69));
	printf("\n��Ҫ%.1lf����߀��\n", m);
	printf("\n��Ҫ%d��%d����%d�컹��\n",year, month,day);

	return 0;
}