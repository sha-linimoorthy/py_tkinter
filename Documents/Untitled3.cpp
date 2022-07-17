/* PHONE BILL */
#include<stdio.h>
int a,d,u,b,e,c,k,y,p,h,bal;
int main(void)
{
	printf("enter number of call made with same service provider");
	scanf("%d",&a);
	if (a!=0)	
	{
	d=a*10;
			printf("\n cost of same service provider calls= %d paise",d);
	}
	else
	{
		a=0;
		printf("0 paise spent for same service provider calls");
	}

	printf("\n \n enter number of calls made with different service provider");
	scanf("%d",&b);
	if(b!=0)
	{
		e=b*30;
		printf("\n cost of different service provider= %d paise",e);
	}
	else
	{
		b=0;
		printf(" 0 paise spent");
	}
	printf("\n \n enter no.of STD calls");
	scanf("%d",&c);
	if(c!=0)
	{
		k=c*60;
		printf("\n cost of STD calls= %d paise",k);
	}
	else
	{
		c=0;
		printf("\n 0 paise spent on STD calls");
	}
	printf("\n \n enter number of SMS done");
	scanf("%d",&y);
	if(y!=0)
	{
		p=y*20;
		printf("\n cost of SMS= %d paise",p);
	}
	else 
	{
	p=0;

	}
	printf("\n enter your previous balance");
	scanf("%d",&bal);
	if(bal>0)
	{
	u=p+k+e+d;
	h=bal-u;
	printf("\n \n \n Amount deducted from your acc %d",u);
	printf("\n \n \n balance remaining is %d",h);
	}
	else
	{
		printf(" PLEASE RECHARGE YOUR ACCOUNT SOON(charges may be appiled)");
	}
	return 0;
}

