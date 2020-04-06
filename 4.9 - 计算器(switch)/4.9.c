#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	char operator;
	double number_1, number_2, answer;
	printf("Please enter what needs to be calculated:");
	scanf("%lf%c%lf", &number_1, &operator,&number_2);
	switch (operator) {
		case '+':
			answer = number_1 + number_2;
			break;
		case '-':
			answer = number_1 - number_2;
			break;
		case '*':
			answer = number_1 * number_2;
			break;
		case '/':
			answer = number_1 / number_2;
			break;
		default:
			answer = (int)number_1 % (int)number_2;
			break;
	}
	printf("ANS:%g\n", answer);
	return 0;
}