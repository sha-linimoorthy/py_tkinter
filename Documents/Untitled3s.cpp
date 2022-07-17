/* accept n no and display sum of odd no*/
#include<stdio.h>
int main()
{
	int a,n,f,c=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		printf("enter the values");
		scanf("%d",&f);
		if(f%2!=0)
		{
		c=c+f;
		}
		else
		{
		}
	}
	printf("%d\n SHALINI \n21ADR046",c);
	return 0;
}
