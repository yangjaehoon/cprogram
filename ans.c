#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c, dis;
	printf("계수 a를 입력하시오: ");
	scanf("%lf", &a);
	printf("계수 b를 입력하시오: ");
	scanf("%lf", &b);
	printf("계수 c를 입력하시오: ");
	scanf("%lf", &c);
	if( a == 0 && b!=0 )
		printf("방정식의 근은 %f입니다.", -c/b);
	else if (a==0 && b==0)
		{
			if (c==0)
			{
				printf("모든 실수에서 식이 성립합니다.");
			}
			else if (c!=0)
			{
				printf("식이 오류입니다.");
			}
		}
	else
	{
		dis = (b*b - 4.0*a*c);
		if( dis >= 0 )
		{
			printf("방정식의 근은 %f입니다. \n", (-b+sqrt(dis))/(2.0*a));
			printf("방정식의 근은 %f입니다. \n", (-b-sqrt(dis))/(2.0*a));
		}
		else
			printf("실근이 존재하지 않습니다");
	}
return 0;
}
