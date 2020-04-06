#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	double weight, cost=0,
		fiveKG_1 = 5 * 3.0, fiveKG_2 = 5 * 3.5, 
		tenKG = 10 * 4.0, twentyKG = 20 * 4.5;
	printf("请输入货物重量：");
	scanf("%lf", &weight);
	if (weight <= 5)
		cost = 3 * weight;
	else if (weight <= 10)
		cost = fiveKG_1 + (weight - 5) * 3.5;
	else if (weight <= 20)
		cost = fiveKG_1 + fiveKG_2 + (weight - 10) * 4;
	else if (weight <= 30)
		cost = fiveKG_1 + fiveKG_2 + tenKG + (weight - 20) * 4.5;
	else if (weight <= 50)
		cost = fiveKG_1 + fiveKG_2 + tenKG + twentyKG+(weight - 30) * 5;
	else printf("物品过重，无法受理");
	printf("价格为%g", cost);
	return 0;
}