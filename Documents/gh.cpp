/* SUM OF POSITIVE AND NEGATIVE NUMBERS*/
#include<stdio.h>
int main()
{
	int a,n,f,d=0,c=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	printf("\nenter the values");
	scanf("\n%d",&f);
		if(f>=0)
		{
			d=d+f;
		}
		else
		{
			c=c+f;
		}
	}
	printf("%.2d sum of positive numbers \n %d sum of negative numbers",d,c);
printf("\nSHALINI \n 21ADR046");
	return 0;
}

