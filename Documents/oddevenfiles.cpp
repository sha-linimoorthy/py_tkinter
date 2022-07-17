/*
#include<math.h>
int main()
{
	FILE *all,*even,*odd;
	int i,n,a;
	scanf("%d",&a);
	all=fopen("inout","w");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&n);
		if(n==-1)
		{
			break;
		}
			putw(n,all);
	}
	fclose(all);
	all=fopen("inout.txt","r");
	even=fopen("inout.txt","w");
	odd=fopen("inout.txt","w");
	while((n=getw(all))!=EOF)
	{
		if(n%2==0)
		{
			putw(n,even);
		}
		else
		{
			putw(n,odd);
		}
	}
	fclose(all);
	fclose(odd);
	fclose(even);
	even=fopen("even","r");
	odd=fopen("odd","r");
	while(n=getw(even)!=EOF)
	{
		printf("%d ",n);
	}
	printf("\n");
	while(n=getw(odd)!=EOF)
	{
		printf("%d ",n);
	}
	fclose(even);
	fclose(odd);
	return 0;
}
	
	
	
*/
// You are using GCC
#include<stdio.h>
#include<math.h>
int main()
{
    FILE *all;
    FILE *even;
    FILE *odd;
    int i,a;
    scanf("%d",&a);
    int n;
    all=fopen("input","w");
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n);
    }
        putw(n,all);
    fclose(all);
    all=fopen("input","r");
    even=fopen("even","w");
    odd=fopen("odd","w");
    while((n=getw(all))!=EOF)
    {
        if(n%2==0)
        putw(n,even);
        else 
        putw(n,odd);
    }
    fclose(all);
    fclose(even);
    fclose(odd);
    even=fopen("even","r");
    odd=fopen("odd","r");
    while((n=getw(even))!=EOF)
    {
    
        printf("%d ",n);
    }
    printf("\n");
    while((n=getw(odd))!=EOF)
    {
        printf("%d ",n);
    }
    fclose(even);
    fclose(odd);
}

