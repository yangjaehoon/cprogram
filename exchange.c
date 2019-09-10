#include<stdio.h>
int main()
{
	float dollar;
	int won;
	float exchange;
	printf("환율을 입력하시오:");
	scanf("%f", &exchange);
	printf("원화 금액을 입력하시오:");
	scanf("%d",&won);
	dollar=won/exchange;
	printf("원화 %d원은 %f달러입니다.",won,dollar);
	return 0;
}

