//FUNCTIONS WITHOUT ARGUMENT AND NO DATATYPE
#include<stdio.h>
void fact();
int main()
{
	fact();
	return 0;
}
void fact()
{
	int i,f=1,c;
	printf("Enter a number to find its factorial");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		f=f*i;
	}
	printf("factorial of %d is %d",c,f);
}
//FUNCTIONS WITHOUT ARGUMENT AND WITH RETURN VALUE
#include<stdio.h>
int fact( );
int main()
{
	int res;
	res=fact();
	printf("%d",res);
	return 0;
}
int fact()
{	
	int i,c,f=1;
	printf("Enter a number to find its factorial");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		f=f*i;
	}
	return f;
}
