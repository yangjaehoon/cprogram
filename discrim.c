#include<stdio.h>
int main()
{
	int a;
	printf("정수를 입력하시오.");
	scanf("%d", &a);
	if (a%2==1){
		printf("0\n");
	}
	else if (a%2==0){
		printf("1\n");
	}
	return 0;
}
