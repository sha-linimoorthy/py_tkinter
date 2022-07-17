/*#include<stdio.h>
int main()
{
	long int empid[7]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
	int hours[7];
	double payrate[7],wages[7];
	int i,j;
	for(j=0;j<7;j++){
	for(i=0;i<3;i++){
	if(i==0)
	{
		scanf("%ld",&empid[i]);
	}
	else if(i==1)
	{
		scanf("%d",&hours[i]);
	}
	else
	{
		scanf("%d",&payrate[i]);
	}
	for(i=0;i<7;i++)
	{
		printf("%ld",empid[i]);
		
	}
}
}
	
}*/
/*#include<stdio.h>
int main()
{
	int n,b,i,j,l;
	scanf("%d",&n);
	int a[n];
	if(n>0){
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	{
		if(a[i]==a[j] && i!=j)
		{
			break;
		}
	}
		if(j==n)
		{
			printf("%d",a[i]);
		}

}
}
}

#include<stdio.h>
int main()
{
	int n,i,j,n1,u;
	scanf("%d",&n);
	int a[n];
	u=n;
	int b[u];
	if(n>0){
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		b[i]=n1*a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(b[i]<b[j])
		{
			int temp =b[i];
			b[i]=b[j];
			b[j]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
	printf("%d ",b[i]);
	}

}}

#include<stdio.h>
int main()
{
	int c=0,i,j,m,n;
	scanf("%d",&n);
	int a[n],b[n];
	if(n>0){
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("\nSimilar element : %d ",a[i]);
		}
	}
	printf("\nPositions : ");
				for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
					{
						if(a[i]==a[j])
							printf("%d ",j);
					}
				}
				for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
					{
						if(a[i]==a[j])
							c++;
					}
				}
				printf("\nOccurence : %d ",c);
			}
		}
		

#include<stdio.h>
int main()
{
	int n,i,j,sum=0,avg,max,min,flag=1;
	int a[12];
	for(i=0;i<12;i++)
	{
			scanf("%d",&a[i]);
	}
	for(i=0;i<12;i++)
	{
		if(a[i]<0)
		{
			printf("Invalid Input");
			flag=0;
			break;
		}
		else if(a[i]>0)
			{
				sum=sum+a[i];
				if(a[i]>max)
				{
					max=i;
				}
				if(a[i]<max)
				{
					min=i;
				}
			}
	}
		if(flag==1){
			avg=sum/12;
			printf("Total rainfall : %d\nAverage rainfall : %d\nLowest rainfall month : %d\nHighest rainfall month : %d",sum,avg,min+1,max+1);
			}
	
	}
*/

