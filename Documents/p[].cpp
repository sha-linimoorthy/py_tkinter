/*#include<stdio.h>
int main()
{
	int a[5][5],i,j,r,c;
	printf(":");
	scanf("%d%d",&r,&c);
	printf("");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
}
	
}*/
#include<stdio.h>
/*int main()
{
	int a,b,i,x[100],c,t,sum=0;
	scanf("%d %d\n",&a,&b);
	t=a-1;
	if(a>=1 && a<=100)
	{
		for(i=1;i<=a;i++)
		{
			scanf("%d",&x);
			if(x[0] && x[t])
			{
				c=x[i]-b;
				sum=sum+c;
			}
			else if(1)
			{ 
			c=x[i]-(2*b);
			sum=sum+c;
			
			}
	}
	printf("%d",sum);
	}
}*/
/*int main()
{
	int a,b,c,d,e,i,sum=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<=c;i++)
	{
		if(i%2!=0)
		a=a*2;
		else
		b=b*2;
		sum=a+b;
	}
	printf("%d",sum);
}
#include<stdio.h>
int main()
{
	int n,c,l,fl;
	scanf("%d%d",&n,&c);
	fl=2*c;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&l);
		fl=(fl-c)+(l-c);
	}printf("%d\n",fl);
	return 0;
}

#include<stdio.h>
int main()
{
	int i=0,j=0,sum=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum=sum+(i+j);
		}
	}
		printf("%d\n",sum);
	
}
#include<stdio.h>
int main() 
{
    int i,j,c=0;
    for(i=0;i<10;i++) 
    {
        for(j=0;j<10;j++) 
        {
            c++;
        }
    }
    printf("%d\n",c);
}
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	if(a>0 && a<=100)
	{
		for(b=1;b<=a;b++)
		{
			scanf("%d",&c);
		}
	}
}*/
#include<stdio.h>
int main()
{
	int a,i,j,l,b;
	scanf("%d",&a);
	b=(a*2)-1;
	if(a>0)
	{
		for(i=1;i<=a;i++)
			for(j=6;j<=;j--)
			printf("%d ",j);
				for(l=a;l>=0;l--)
				printf("%d ",l);
				printf("\n");
	}printf("\n");
}


