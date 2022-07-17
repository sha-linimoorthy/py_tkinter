/*#include <stdio.h>
 
int main()
{
  int c,d,sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
  for (c = 0; c < 5; c++)
  {
    for (d = 0; d < 5; d++)
    {
      scanf("%d", &first[c][d]);
      if(c==d)
      	{
      		sum=sum+first[c][d];
	  	}
	  }
}
	printf("%d",sum);
}
  
#include<stdio.h>
int main() {
   int i, j, a[10][10],sum;
   for (i=0;i<5;i++){
      for (j=0;j<5;j++) {
         scanf("%d", &a[i][j]);
      }
  }
   sum = 0;
   for (i = 0;i<5;i++)
   {
      for (j=0;j<5;j++) {
         if (i>=j){
            sum =sum+a[i][j];
         }
     }
      }
   printf("%d", sum);
   
}
#include<stdio.h>
int main() {
   int i,j,n,k;
   scanf("%d%d",&n,&k);
   int a[n][k],b[n][k];
   for (i=0;i<n;i++)
   {
      for (j=0;j<k;j++) 
	  {
         scanf("%d", &a[i][j]);
         b[j][i]=a[i][j];
      }
  }
   for (i=0;i<k;i++)
   {
      for (j=0;j<n;j++)
         {
            printf("%d ",b[i][j]);
         }
    printf("\n");
     }
}

#include<stdio.h>
 
int main() {
   int i, j, n, k;
   scanf("%d", &n);
   int a[n][n],b[n][n],sum[n][n],product[n][n],diff[n][n];
   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);
      }
    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++) {
         scanf("%d", &b[i][j]);
      }
   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++) {
         
            sum [i][j]=a[i][j]+b[i][j];
        }

	for (i = 0; i < n; i++)
      for (j = 0; j < n; j++) {
         
            diff[i][j]=a[i][j]-b[i][j];
        }
        
     for (i = 0; i < n; i++)
     {

      for (j = 0; j < n; j++) 
      {	product[i][j]=0;
	  
	  	for(k = 0; k < n; k++){
         
            product[i][j]=product[i][j]+a[i][k]*b[k][j];
        }
    }
    }
    printf("Sum\n");
    for (i = 0; i < n; i++){
      for (j = 0; j < n; j++) {
      	
        	printf("%d ",sum[i][j]);
            
            
		}
		printf("\n");
	}
	printf("Difference\n");
	for (i = 0; i < n; i++){
      for (j = 0; j < n; j++) {
      	printf("%d ",diff[i][j]);
      }printf("\n");
  }
      	printf("Multiply\n");
      	for (i = 0; i < n; i++){
      for (j = 0; j < n; j++) {
      	printf("%d ",product[i][j]);
      }printf("\n");
  }
      	
}
#include<stdio.h>
 
int main() {
   int i, j, n, k;
   scanf("%d", &n);
   int a[n][n],b[n][n],sum[n][n];
   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);
      }
    printf("saddle point is in (%d,0) and the value is %d",(n-1),a[(n-1)][0]); 
}

      	
      	
      	
      	
      	#include<stdio.h>
int main()
{
    int a[10][10],c,d,su=0;
    for(c=0;c<5;c++)
    {
        for(d=0;d<5;d++)
        {
            scanf("%d",&a[c][d]);
            if(c==d)
            {
                su+=a[c][d];
            }
        }
    }
    printf("%d",su);
}


/*
// You are using GCC
#include<stdio.h>
int main()
{
    int a[10][10],c,d,su;
    for(c=0;c<5;c++)
    {
        for(d=0;d<5;d++)
        {
            scanf("%d",&a[c][d]);
        }
    }
    su=0;
    for(c=0;c<5;c++)
    {
        for(d=0;d<5;d++)
        {
            if(c>=d)
                {
                    su+=a[c][d];
                }
    }
        }
    
    printf("%d",su);
}



#include<stdio.h>
 
int main() {
   int i, j, n, k=0;
   scanf("%d", &n);
   int a[n][n];
   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);
      	if(a[i][j]!=20)
      	{
      		k++;
		  }
	  }
	printf("%d",k);
}

#include<stdio.h>
 
int main() {
   int i, j, n, u=0, k=0, flag=0,l;
   scanf("%d", &n);
   int a[n][n];
   for (i = 0; i < n; i++)
   {
   
      for (j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);
         
	  }
	}
	/*for (i=0;i<n-1; i++){
      for (j=0;j<n-1;j++)
      	{
      		k=k+a[i][j];
      	}
      }
    for (i=0;i<n-1; i++){
      for (j=1;j<n;j++)
      for(l=0;l<n;l++)
      	{
      		k=k+a[i][j];
      	}
      }
	printf("%d",k);
	
}
#include<stdio.h>
int main()
{
    int a[10][10],c,d,su=0;
    for(c=0;c<5;c++)
    {
        for(d=0;d<5;d++)
        {
            scanf("%d",&a[c][d]);
        }
    }
    for(c=0;c<5;c++)
    {
        for(d=0;d<5;d++)
        {
            if(c<=d)
                {
                    su=su+a[c][d];
                }
    }
        }
    
    printf("%d",su);
}
#include<stdio.h>
#include<stdlib.h>
 int abs_sum(int a[ ],int n)
	{
		int i,sum =0;
		for(i=n-1;i>=0;i--)
			sum+=i*a[i]-(n-1-i)*a[i];
		
		return sum;
	}
	
int main()
{ 
	int a[20],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",abs_sum(a,n));
	return 0;
}

#include<stdio.h>
int a(int arr[],int n)
{
	if(n==0 || n==1)
		return n;
	int tep[n];
	int i,j=0;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
			tep[j++]=arr[i];
}
	tep[j++]=arr[n-1];
	for(i=0;i<j;i++)
	{
		arr[i]=tep[i];
	}
	return j;
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	n=a(arr,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
    int a[10][10],i,j,sum=0,n,m=0;
    scanf("%d",&n);
    m=n;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<n;i++)
    {
    	m=m-1;
        for(j=0;j<n;j++)
        {
            if(j==m)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum-a[0][0]);
}

#include<stdio.h>
 
int main() {
   int i, j, n, k;
   scanf("%d", &n);
   int a[n][n];
   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);    
	  }
	for (i = 0; i < n; i++)
      for (j = 0; j < n; j++) 
      	if(i>j)
      	{
      		a[i][j]=0;
		  }
		  else
		  {
		  	a[i][j];
		  }
	for (i = 0; i < n; i++)
	{
	
      for (j = 0; j < n; j++)
      {
      	printf("%d ",a[i][j]);
	  }
		printf("\n");
	}
}




#include<stdio.h>
#include<stdlib.h>
int abs_sum(int a[],int n){
    int i,sum;
    for(i=0;i<n;i++){
        sum=sum+(a[i+1]-a[i]);
    }
    return n;
}

int main()
{
    int a[20], n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("%d",abs_sum(a, n));
    return 0;
}





#include<stdio.h>
 
int main() {
   int i, j, n, u=0, k=0, flag=0,l;
   scanf("%d", &n);
   int a[n][n];
   for (i = 0; i < n; i++)
   {
   
      for (j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);
         
	  }
	}
	scanf("%d",&l);
	for (i=0;i<n-1; i++){
      for (j=0;j<n-1;j++)
      	{
      		k=k+a[i][j];
      		if(k==1)
      		{
      			flag++;
			  }
      	}
      }
    for (i=0;i<n-1; i++){
      for (j=1;j<n;j++)
      	{
      		k=k+a[i][j];
      		if(k==1)
      		{
      			flag++;
			  }
      	}
      }
    	for (i=1;i<n; i++){
      for (j=0;j<n-1;j++)
      	{
      		k=k+a[i][j];
      		if(k==1)
      		{
      			flag++;
			  }
      	}
      }
      	for (i=1;i<n; i++){
      for (j=1;j<n;j++)
      	{
      		k=k+a[i][j];
      		if(k==1)
      		{
      			flag++;
			  }
      	}
      }
	printf("%d",flag);
	
}


#include<stdio.h>
int main()
{
    int i,j,r,l;
    float a[r][4];
    for(i=0;i<r;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        l=0;
        for(j=0;j<4;j++)
        {
            if(j==0)
            {
                if(a[i][0]>18 && a[i][0]<25)
                {
                    l=l+1;
                }
            }
            if(j==1)
            {
                if(a[i][j]>5.7 && a[i][2])
                {
                    l=l+1;
                }
            }
            if(j==2)
            {
                if(a[i][3]>45)
                {
                    l=l+1;
                }
            }
        }
        if(l==4)
            {
                printf("%d",i);
            }
        }
    }




#include<stdio.h>
int main()
{
    int i,j,r,l;
    float a[r][4];
    for(i=0;i<r;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        l=0;
        for(j=0;j<4;j++)
        {
            if(j==0)
            {
                if(a[i][0]>18 && a[i][0]<25)
                {
                    l=l+1;
                }
            }
            if(j==1)
            {
                if(a[i][j]>5.7 && a[i][2])
                {
                    l=l+1;
                }
            }
            if(j==2)
            {
                if(a[i][3]>45)
                {
                    l=l+1;
                }
            }
        }
        if(l==4)
            {
                printf("%d",i);
            }
        }
    }

#include<stdio.h>
int main()
{
	int n,m,i,j,l,o,x,y,X,Y,west,east,r,R,f=0;
	char k11,k,k1,k2;
	scanf("%d %d ",&n,&m);
	scanf("%c %c ",&k11,&k);
	scanf("%d %d",&l,&o);
	scanf("%c %c",&k1,&k2);
	if(k1==R || k1==r) 
	{
		f++;
	}
	if(k2==r || k2==R)
	{
		f++;
	}
			if(k11==x || k==X)
			{
				printf("%d %d",l,o-f);
				printf("\n%d %d",l,o+f);	
			}
	
	#include<stdio.h>
int fb(int n,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",fb(a,b));
}
int fb(int p,int q)
{
    int i,d,l=1;
    if(p>q)
        d=p;
    else
        d=q;
    for(i=2;i<d;i++)
    {
        if(p%i==0 && q%i==0)
        {
        	l=i*l;
            p=p/i;
            q=q/i;
            i=1;
        }
    }
    return l;
}*/
#include<stdio.h>
void fb(int a);
int main()
{
	int i;
	scanf("%d",&i);
	fb(i);
	return 0;
}
void fb(int n)
{

	int i;
	if(n==0)
		return;
	else
	{
		fb(n-1);
		for(i=1;i<=n;i++)
		{
			printf("*",i);
		}
	printf("\n");
	}
}
