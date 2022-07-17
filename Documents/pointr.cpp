/*// You are using GCC
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int *a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int *max=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    
    
}

// You are using GCC
#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int *a[n],*b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+j));
    }
    for(i=0;i<n;i++)
    {
        if((a[i]==b[i]))
        {
           c++; 
        }
    }
    if(c!=0)
    {
    printf("yes");
    }
    else
    {
        printf("no");
    }
}


// You are using GCC
#include<stdio.h>
int main()
{
    int n,m,i,j,c=0;
    scanf("%d %d",&n,&m);
    int *a[n][m];
    if(n==m){
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                if(*a[i][j]==1)
                {
                    c++;
                }
            }
        }
    }
    if(c==n)
    {
        printf("Identity matrix");
}
}
}
// You are using GCC
#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int *a[n];
    for(i=0;i<n;i++)
    
    {
        scanf("%d",(a+i));
    }
    int *sort;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    {
        if(*(a+i)>*(a+j))
        {
            sort=*(a+i);
            *(a+i)=*(a+i);
            *(a+j)=sort;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d ",*(a+i));
}
return 0;
}*/
#include<stdio.h>
int main()
{
    int i,j,n,su=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        su=su+(*(a+i));
        sum=sum+(*(a+j));
    }
    printf("%d",su);
    printf("%d",sum);
}
#include<stdio.h>
void sort (int a,int *p);
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    sort(n,a);
}
void sort(int a,int *p)
{
    int i,j,temp;
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%d",*(p+i));
    }
}
