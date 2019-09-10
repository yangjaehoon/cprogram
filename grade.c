#include<stdio.h>
int main()
{
	int num;
	float A,B,C;
	printf("Number of students:");
	scanf("%d",&num);
	A=num*0.2;
	B=(num*0.8)-A;
	C=num-A-B;
	printf("A:%f\n",A);
	printf("B:%f\n",B);
	printf("C:%f\n",C);
	return 0;
}
	
	
