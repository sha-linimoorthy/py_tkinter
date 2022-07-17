/*#include<stdio.h>
int main()
{
    int i,n,p,ap=0,bp=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1 && a[i+1]<11 &&a[i+1]!=1 && a[i+2]<11 && a[i+2]!=1 && a[i+3]<11 && a[i+3]!=1 && a[i+4]<11 && a[i+4]!=1)
        {
        	p=4;
    	}
        else if(a[i]==13 && a[i+1]<11 && a[i+1]!=1 && a[i+2]<11 && a[i+2]!=1 && a[i+3]<11 && a[i+3]!=1)
        {
			p=3;
		}
        else if(a[i]==12 && a[i+1]<11 && a[i+1]!=1 && a[i+2]<11 && a[i+2]!=1 )
        {
			p=2;
		}
        else if(a[i]==11 && a[i]<11 && a[i+1]!=1)
        {
			p=1;
		}
        else
        {
        	p=0;
        }
    	}
        if(p!=0)
        {
            printf("Player A scores %d point(s)\n",p);
            ap+=p;
        }
        
        else
        {
            printf("Player B scores %d point(s)\n",p);
            bp+=p;
        }
printf("Player A : %d point(s)\nPlayer B : %d point(s)\n",ap,bp);
}*/
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            for(j=1;j<2*n;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=1;j<2*n;j++)
            {
                if(j<=1 || j>=(2*n)-1)
                {
                    if(j==1 && j==(2*n)-1)
                    printf("*");
                    else
                    printf("b");
                }
                else
                printf("i");
            }
            printf("\n");
        }
    }
}
