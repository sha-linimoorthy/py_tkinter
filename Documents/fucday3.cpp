/*#include<stdio.h>
void neon_no ();
int main()
{
	neon_no();
	return 0;
}
void neon_no()
{
	int n,r,s,k;
	scanf("%d",&n);
	k=n*n;
	while(k!=0)
	{
		r=k%10;
		s=s+r;
		k=k/10;
	}
	if(s==n)
	{
		printf("%d is a neon number",n);
	}
	else
	{
			printf("%d is not a neon number",n);
	}
}

#include<stdio.h>
void sum ();
int main()
{
	sum();
	return 0;
}
void sum()
{
	int n,r,s,k;
	scanf("%d %d",&n,&k);
	s=n+k;
	printf("%d",s);
}

#include<stdio.h>
void sum ();
int main()
{
	sum();
	return 0;
}
void sum()
{
	float n,r,s,k,d;
	scanf("%f",&n);
	d=2*n;
	s=2*3.14285*n;
	k=3.14285*n*n;
	printf("Diameter : %.2f\nCircumference : %.2f\nArea : %.2f\n",d,s,k);
	
}
#include<stdio.h>
void sum ();
int main()
{
	sum();
	return 0;
}
void sum()
{
	int n,i,s=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=(s+a[i]);
	}
	s=s/n;
	printf("%d",s);
	
}
#include<stdio.h>
int iseligible(int d,int m,int y,int ad);
int main()
{
	int d,m,y,ad;
	scanf("%d %d %d %d",&d,&m,&y,&ad);
	if(iseligible(d,m,y,ad))
		printf("eligi");
	else
		printf("not eligi");
}
int iseligible(int dt,int mt,int yt,int adt)
{
	int p=adt-yt,s;
	if((p>7)&&(p<5))
		0;
	else
		0;
}

#include<stdio.h>
int fibo(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int	res =fibo(n);
	printf("%d",res);
	
}
int fibo(int n)
{

	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return ((fibo(n-1)) + (fibo(n-2)));
}
*/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sum(int );
int main()
{
    int s,res;
    scanf("%d",&s);
    res=sum(s);
    printf("%d",res);
}
int sum(int e)
{
    if(e==0)
        return 0;
    else
        return (e%10+sum(e/10));
        
    
}


