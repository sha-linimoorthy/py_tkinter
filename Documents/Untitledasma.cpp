#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int sum=0,i,l;
	printf("enter your name");
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
