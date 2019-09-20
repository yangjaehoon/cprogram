#include<stdio.h>
int main()
{
	unsigned int num;
	int i = 0;
	int count=0;
	printf("십진수:");
	scanf("%u",&num);
	
	unsigned int mask =1 << 7; //mask=10000000
	
	printf("이진수:");
	while(i<32)
{
	if ((num&mask)!=0)
	{
		count+=1;
	}
	mask=mask>>1;
	i++;
}
	printf("1의 개수는 %d입니다.",count);
	return 0;
}
