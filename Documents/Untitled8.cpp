/* PRINT 7,-14,28,-35......... N*/
#include<stdio.h>
int main()
{
	int a,n,f,g;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	if(a%2!=0)
			{
				f=7*a;
				printf("%d,",f);
			}
	else if (a%2==0)
		{
			g=a*7*(-1);
		printf("%d,",g);
		}
	}
    return 0;
}

