/* SUMMATION OF THE SERIES 1+1/(2*2)+1/(3*3)+1/(4*4)+...+1/(N*N) */
#include<stdio.h>
#include<math.h>
int main ()
{
	float n,a,s=0;
	printf("enter the value of n");
	scanf("%f",&n);
		for(a=1;a<=n;a++)
			{ 
				s=s+1/(a*a);
			}
	printf("%f\nSHALINI \n21ADR046",s);
	return 0;
} 
