/* TO FIND SUM OF SERIES 1/1+2/2+3/4+.....1/N */
#include<stdio.h>
#include<math.h>
int main ()
{
	float n,b,f,h,s=0;
	printf("enter value of n");
	scanf("%f",&n);
	for(b=1;b<=n;b++)
	{
		for(h=0;h<=n;h++)
		{
		f=pow(2,h);
		}
		s=s+(b/f);
	}
	printf("%f",s);
	return 0;
}  

