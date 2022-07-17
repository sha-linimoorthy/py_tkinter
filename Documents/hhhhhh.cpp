/* WITHIN A RANGE */
#include<stdio.h>
int main()
{
	int a,n,m,d=0;
	printf("enter the starting value m and ending value n");
	scanf("%d%d",&m,&n);
	for(a=m;a<=n;a++)
	{
		if(a%2!=0)
		{
			d=d+a;
		}
	}
	printf("%d sum of odd numbers",d);
	printf("\nSHALINI \n 21ADR046");
	return 0;
}

