/*#include<stdio.h>
int main()
{
	printf("    /|      ( )      *\n");
	printf("   / |	   (   )     **\n");
	printf("  /  |	  (     )    ***\n");
	printf(" /   |	 (       )   ****\n");
	printf("/____|	(         )  ******\n");
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	char v[]="that's it",d[90];
	printf("enter something");
	scanf("%[^\n]%*c",d);
	printf("%s%s",v,d);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a,b,c,i,j,n,t;
	scanf("%d",&n);
	t=2*n-1;
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			a=i<j?i:j;
			a=a<t-i?a:t-i-1;
			a=a<t-j-1?a:t-j-1;
			printf("%d ",n-a);
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
int main()
{
	int a,b,c,d,e,j,n,i,j;
	scanf("%d",&n);
	a=2*n-1;
	i=t;
	j=t;
	c=n;
	d=0;
	b[i][j];
	for()
}*/

/*#include<stdio.h>
int main()
{
	int a,b,n,n1,c,d,i,j;
	scanf("%d",&n);
	if(n>=0)
	for(i=1;i<=n;i++)
	{
		scanf("%d",&n1[n]);
	}
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			c=n1[i]
		}
	}
}*/
/*#include<stdio.h>
int main()
{
	int a,b,c,d,i,j,n;
	scanf("%d",&a);
	scanf("%d",&n);
	if(a>0 && n>0)
	{
		for(i=1;i<=n;i++)
		{
			if(a%2==0)
			{
				printf("%d ",a);
				a=a/2;
			}
			else
			{
				printf("%d ",a);
				a=3*a+1;	
			}
		}
	}
}*/
/*#include<stdio.h>
int main()
{
		int a=0,b=0,c,i,j,n;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
				a=a+i;
				b=b+a;
		}
		printf("%d",b);
	}

#include<stdio.h>
int main()
{
	int i,b,c,flag,a[123456789],j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		flag=0;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0 && i!=1)
		{
			a[123456789]=i;
			printf("%d ",a[n]);
		}
	}
}




#include<stdio.h>
int main()
{
	int a[100],b,c,i,j,n,sum=0,t=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=1;i<n;i++)
	{
		sum=sum+a[i];
		if(i%2!=0)
		{
			s=s+a[i];
		}
		if(i%4==0)
		{
			t=t+a[i];
		}
	}
	printf("%d",sum+t+s);
		
	}
*/
#include<stdio.h>
int main()
{
	int i,b,c,flag,j,n;
	scanf("%d",&n);
	int a[n];
	for(i=1;i<=n;i++)
	{
		flag=0;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0 && i!=1)
		{
			
			printf("%d ",a[i]);
		}
	}
}


/*#include<stdio.h>
int main()
{
	int a[100],b,c,i,j,n,sum=0,y,t=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			s=s+a[i];
		}
	}
		
	for(i=0;i<n;i++)
	{
		if(i%4==0 && i!=0)
		{
			t=t+a[y];
		}
	}
	printf("%d",(sum+s+(2*t)));
	return 0;	
	}
*/




