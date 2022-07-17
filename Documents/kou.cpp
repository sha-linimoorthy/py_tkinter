/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
#include<stdio.h>
int fact();
int main()
{
	int series;
	series=(fact(1)/1)+(fact(2)/2)+(fact(3)/3)+(fact(4)/4)+(fact(5)/5);
	printf("%d",series);
}
int fact(int n)
{   int f,num;
	f=1,num=0;
	while(num<=n-1)
	{
	f=f+f*num;
	num++;
	}
	return f;
	
}*/



/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int fact(int );
int main()
{
	int series=0;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int j=i;
		series=series+fact(i)/j;
	}
	printf("%d",series);
}
int fact(int n)
{   int f,num;
	f=1,num=0;
	while(num<=n-1)
	{
	f=f+f*num;
	num++;
	}
	return f;
	
}


/*
#include<stdio.h>
int bit(int );
int main()
{
	int n;
	scanf("%d",&n);
	int res;
	res=bit(n);
	printf("%d",res);
}
int bit(int u)
{
	while(u!=0)
	{
		int d,f=1,r;
		r=u%2;
		d=d+r*f;
		f=f*10;
		u=u/2;
	}
	
}
#include<stdio.h>
int main()
{
	printf("%d %d",main,main);
}
*/
