/*multiplication table
#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d",&z);
	y=(z+500)/130;
	x=y+10;
	printf("%d\n%d",x,y);
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,h,t,m,z;
scanf("%f%f%f",&a,&b,&c);
	if((a<0)&&(b<0)&&(c<0))	
	{
		a=(a*-1);
		b=b*-1;
		c=c*-1;
	}
	else if((a<0)||(b<0))
	{
		a=a*-1;
		b=b;
		c=c;	
	}
	else if((b<0)||(c<0))
	{
		a=a;
		b=b*-1;
		c=c;
	}
	else
	{
	}
	z=(b-a)*c;
	printf("%.2f",fabsf(z));
	return 0;
}

/*#include<stdio.h>
int main()
{
	int m,n,z;
	scanf("%d%d",&m,&n);
	if(n%m==0)
	{printf("%d:%d-Yes",n,m);
	
	}
	else
	{
		printf("%d:%d-No",n,m);
	}
	return 0;
}*/


/*#include<stdio.h>
#include<math.h>
int main()
{
	float n,m,v;
	scanf("%f%f",&n,&m);
	v=(100*m)/n;
	printf("%.0f%%",v);
	return 0;	
}
*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long a,b,c,z;
	scanf("%llu",&a);
	if(a%10==5)
	{
		z =a*a;
		printf("Square of %llu is %llu",a,z);
	}
	else
	{
		printf("Unit digit is not 5");
	}
	return 0;
}

*/
/*#include<stdio.h>
int main()
{
	int a,x,y,z;
	scanf("%d",&a);
	x=a/3.5;
	y=a/1.75;
	z=a/7;
	printf("Number of attendees on day 1 : %d\nNumber of attendees on day 2 : %d\nNumber of attendees on day 3 : %d",x,y,z);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
	scanf("%f%f%f",&a,&b,&c);
	d=a+(b/60)+(c/3600);
	e=a+b*(60)+c;
	f=a*(3600)+b*(60)+c;
	printf("%.4f\n%.4f%\n.4f",d,e,f);
	return 0;
	
}*/
/*#include<stdio.h>

int main()
{
    int i,j,n;
    
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);
    printf("Prime numbers are:-\n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            printf("%d ",i);
        }
    }
    
}*/
/*#include<stdio.h>
int main()
{
    int n,copy=152,remainder,sum,x;

    printf("Enter a number\n");
    scanf("%d",&n);
    while(copy<=n)
    {
        copy++;
        x=copy;
        sum=0;            
        while(copy!=0)
        {
            remainder=copy%10;
            sum=sum+remainder*remainder*remainder;
            copy=copy/10;
        }
        if(sum==x)
        {
            printf("an amstrong number %d\n",x);
            n--;
        }
        else
        {
        	printf("not an amstrong number");
		}
        copy=x;
    }
    return 0;
}*/
# include <stdio.h>   
int main()   
{   
 int i, N, Sum = 0 ;   
  
 printf("\n enter a number \n") ;   
 scanf("%d", &N) ;   
 
 for(i = 1 ; i < N ; i++)   
  {   
   if(N % i == 0)   
     Sum = Sum + i ;   
  }    

 if (Sum == N) 
 {  
    printf("\n %d is a Perfect Number", N) ;   
}
 else   
 {
    printf("\n%d is not the Perfect Number", N) ;
}

return 0 ;   
}

