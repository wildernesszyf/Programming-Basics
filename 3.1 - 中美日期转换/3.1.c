#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
	//Tips1：標識符命名規則：只能由字母、數字、下劃綫構成，且數字不能作爲開頭。原則：見名知義
	short year, month, day;
	printf("请输入美国标准日期(mm-dd-yyyy):");
	scanf("%hd-%hd-%hd", &month, &day, &year);
	printf("中国标准日期:%hd-%hd-%hd", year,month,day);
	return 0;
}