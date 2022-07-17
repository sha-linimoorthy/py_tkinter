/* BIGGEST AND SMALLEST OF THREE NUMBERS
#include<stdio.h>
int main()
{
	int a,b,i,n,big=0,small=0;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter %d values ",n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a);
			if(a>big || i==1)
			{
				big=a;
			}
			if(a<small || i==1)
			{
				small=a;
			}
		}
	}
	printf("%d is the biggest \n%d is the smallest",big,small);
	return 0;
}*/
/* FIBONACCI SERIES 
#include<stdio.h>
int main()
{
	int a=0,r=1,i,u=0,sum,n,m,c=0,t,f=0,h=1,l;
	printf("enter the position of term in fibonacci series");
	scanf("%d",&m);
	if(m==1 || m==0)
	{
		printf("%d",m);
	}
	else
	{
		a=u+r;
	}
	for(t=0;t<=15;t++)
	{
		printf("%d,",f);
		l=f+h;
		f=h;
		h=l;
	}
	for(i=3;i<=m;i++)
	{
		printf("%d,",u);
		u=r;
		r=a;
		a=u+r;
	}
printf("\n %d position value in the fibonacci series is %d",m,r);
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[200];
	int i,l;
	l=strlen(str1);
	scanf("%[^\n]s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%d\n",str1[i]);
    }
	return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int l,y,b=0;
	scanf("%[^\n]s",s);
	l=strlen(s);
	while(b<l)
	{
		printf("%d\n",s[b]);
		b++;
	}
return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter the base value");
	scanf("%d",&a);
	printf("enter the power value");
	scanf("%d",&b);
	c=pow(a,b);
	printf("%d is the value",c);
	return 0;
}
