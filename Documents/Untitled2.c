/*#define length 10
#include<stdio.h>
int main()
{
	int width=5;
	int area=length*width;
	printf("Area=%d",area);
	return 0;
}*/


/*#include<stdio.h> 
int main() 
{ 	
int x; 	
x=4; 
while(x<10) {
printf("executed ten times\n"); 
x++;
}
printf("quit"); 
return 0;
} */


/*#include<stdio.h>
int main()
{
int x,y;
scanf("%d",&x);
if(x<0){
 printf("only positive integer"); 
}
else{
 printf("value of y =%d",y);
}
return 0;
}*/

/*#include<stdio.h>
int main()
{
	unsigned int a;
	scanf("%u",&a);
	printf("%u",a);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	if((a>=50)&&(b>=50)&&(c>=50))
	{
		d=(a+b+c)/3;
		printf("you have passed with the average of %d\n ;)",d);
	}
	
	else
	{
		printf("\nsorry ypu have failed ;(");
	}
	return 0;
	}*/
/*#include<stdio.h>
int main()
{
	int basicpay,a,b,c;
	scanf("%d",&basicpay);
	if (basicpay<15000)
	{
		a=(basicpay*10)/100;
		b=(basicpay*60)/100;
		c=basicpay+a+b;
		printf("gross salary is %d",a);
    }
	else
	{
		a=basicpay+((basicpay*20)/100)+(basicpay*90)/100;
		printf("gross salary is %d",a);
	}
	return 0;
}*/

/*#include<stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a|b;
	printf("%d",c);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int b=7;
	printf("%%d=%d",b);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE VALUES OF a, b and c");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("%d is greater",a);
	}
		else if((b>a)&&(b>c))
		{
			printf("%d is greater",b);
	    }
	else
		{
			printf("%d is greater",c);
		}
return 0;
}*/
/*#include<stdio.h>
int main()
{
int a,b,c;
printf("ENTER THE VALUES OF a, b and c");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
    {
    	if(a>c)
    	{
    		printf("%d is greater",a);
		}
		else
		{
		printf("%d is greater",c);
		}
	}
else
	{
		if(b>c)
		{
			printf("%d is greater",b);
		}
		else
		{
			printf("%d is greater",c);
		}
	}
	return 0;
}*/

#include<stdio.h>
int main()
{
	int a;
	printf("ENTER A YEAR");
	scanf("%d",&a);
	/*if(a%400==0)
	{
		printf("%dis a leap year",a);
	}
	else if(a%100==0)
	{
		printf("%d is not a leap year",a);
	}
	else if(a%4==0)
	{
		printf("%d is  a leap year",a);
		
	}
	else
	{
		printf("%d is not a leap year",a);
	}
	return 0;
}*/
	if((a%4==0)&&(a%100!=0)||(a%400==0))
	{
		printf("%d is a leap year",a);
	}
	else
	{
		printf("%d is not a leap year",a);
	}
return 0;
}




