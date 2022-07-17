/*SUM OF THE SERIES 9+99+999+9999+......*/
#include<stdio.h>
int main()
{
	int a,b,k=0,c=9,i;
	printf("enter the value of n");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		k=k+c;
		c=c*10+9;

	}
	printf("%d",k);
	return 0;
}
