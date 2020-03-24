#include<stdio.h>
#include<math.h>
int main()
{
	//Tips1：所有的變量定義語句要寫在程序的最開始位置
	//Tips2：所有的小數在c語言中都是以double來存儲的
	//Tips3：運算符的優先級和結合性
	//Tips4：以%.f輸出時是四捨五入的
	//Tips4：輸入時是小數45%，請改爲小數形式0.45，輸出時45%，此時的%要用兩個%%進行輸出

	int d = 300000, p = 6000, year, month, day;
	double r = 0.01, m;
	//float r = 0.01f,m;

	printf("购房从银行贷了一笔款d，准本每月还款额为p,月利率为r，计算多少月能还清。\n");
	m = log(p / (p - d * r)) / log(1 + r);//69.7個月
	year=(int)m / 12;
	month = (int)m % 12;
	day = (int)(30 * (m - (int)m));
	day = (int)(30 * (69.7 - 69));
	printf("\n需要%.1lf個月還清\n", m);
	printf("\n需要%d年%d个月%d天还清\n",year, month,day);

	return 0;
}