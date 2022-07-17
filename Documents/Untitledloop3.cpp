/* prime numbers from 1 to n*/
#include<stdio.h>
int main ()
{
	int i,c=0,n,j;
	scanf("%d",&n);
	int tu =n;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==i)
		{
			printf("%d are prime number",i);
	}
}
	printf("\n21ADR046\nSHALINI");
	return 0;
}

