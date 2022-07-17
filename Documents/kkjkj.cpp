#include<stdio.h>
/*#include<math.h>
int main()
{
	int n,i,c=0,d=0;
	char b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%c",&b);
		switch(b)
		{
			case 'H':
				c++;
			case 'h':
				c++;
				
			case 'T':
				d++;
			case 't':
				d++;
			default:
				{
			
				}
	
		}
	}
	printf("%d heads %d tails",c,d);
	return 0;
}*/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,c=0,d=0;
	char b;
	scanf("%d ",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%c",&b);
		switch(b)
		{
			case 'H':
				c++;
				break;
			case 'h':
				c++;
				break;
			case 'T':
				d++;
				break;
			case 't':
				d++;
			default:
			{
			}
		}
		
	}
	printf("%d heads %d tails",c,d);
	return 0;
}

