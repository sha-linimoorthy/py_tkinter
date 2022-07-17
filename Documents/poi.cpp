/* PRIME OR NOT 
#include<stdio.h>
int main()
{
	int a,n,i,h=0;
	scanf("%d",&n);
		for(i=2;i<n;i++)
		{
		if(n%i==0)
		{
			h=1;
		}
	}
	if(h==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime");
}
return 0;
	}*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		printf("*");
	printf(" \n");
		}
		return 0;
}
	

