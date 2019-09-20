#include<stdio.h>
int main()
{
	int a,b,c;
	double ax,bx,cx;
	double fin; 
	printf("중간 기말 과제 점수를 입력하시오.");
	scanf("%d %d %d", &a, &b, &c);
	ax=a*(3.0/6.0);
	bx=b*(3.0/7.0);
	cx=c*(4.0/5.0);
	fin=ax+bx+cx;
	printf("변환 점수는 %lf입니다.", fin);
	return 0;
}
