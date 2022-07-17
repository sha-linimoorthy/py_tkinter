/* 1+3^2/3^3+5^2/5^3+...... */
#include<stdio.h>
int main()
{
	float n,a,b=0;
	printf("enter the value of n");
	scanf("%f",&n);
	for(a=1;a<=n;a=a+2)
	{
		b=b+(1/a);
	}
	printf("%f\n SHALINI \n 21ADR046",b);
	return 0;
}

