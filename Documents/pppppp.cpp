/* FACTORIAL OF A NUMBER */
#include<stdio.h>
int main()
{
	int a,i,t=1;
	printf("enter a number to find the factorial");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		t=t*i;
	}
	printf("%d",t);
	return 0;
}
