/* POWER OF A NUMBER */
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,s,p=1;
	printf("enter the base and power");
	scanf("%d%d",&a,&b);
	for(s=1;s<=b;s++)
	{
		p=p*a;
	}
	printf("%d",p);
	return 0;
	
}
