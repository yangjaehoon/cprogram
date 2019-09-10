#include<stdio.h>
int main()
{
	int h,l;
	double  area;
	printf("밑변의 길이를 입력하시오:");
	scanf("%d",&l);
	printf("높이를 입력하시오:");
	scanf("%d",&h);
	area=(h*l)/2.0;
	printf("삼각형의 넢이는 %lf입니다.",area);
	return 0;
}

