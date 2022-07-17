/*#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,r1,r2,img;
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(a==0)
	{
	
	}
	else if(d==0)
	{
		r1=r2=-b/2*a;
		printf("Root1 = %.2f\nRoot2 = %.2f",r1,r2);
	}
	else if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("Root1 = %.2f\nRoot2 = %.2f",r1,r2);
	}
	else if(d<0)
	{
		r1=-b/2*a;
		img=sqrt(-d)/(2*a);
		printf("Root1 = %.2f+%.2fi\nRoot2 = %.2f-%.2fi",r1,img,r1,img);
	}
	return 0;
}*/

/*BIGGEST OF ENTERED NUMBER
#include<stdio.h>
int main()
{
	int n,a,b,f,c;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n>0)
	{
		printf(" first number only");
		scanf("%d",a);
		n--;
		if(n>0)
		for(n;n<0;n--)
		{
			scanf("%d",&b);
			if(a>b)
			a=b;
		}
	}
	printf("%d",a);
	return 0;
}
#include<stdio.h>
#include<conio.h>

int main()
{
	 int n, i;
	 float num, sm;
	 printf("How many numbers?\n");
	 scanf("%d",&n);
	 printf("Enter number-1: ");
	 scanf("%f", &num);
	 sm = num;
	 i=2;
	 while(i<=n)
	 {
	  printf("Enter number-%d: ",i);
	  scanf("%f", &num);
	  if(num > sm)
	  {
	   sm = num;
	  }
	  i++;
	 }
	 printf("\nSmallest = %0.2f", sm);
	 return sm; 
}*/
/*#include<stdio.h>
int main()
{
	int a,n,b,i,big;
	printf(" enter the value of n\n");
	scanf("%d",&n);
	printf(" enter the %d values\n",n);
	if(n>0)
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>big)
		{
			big=a;
		}
	}
	printf("biggest number is %d\n",big);
	return 0;
}
#include<stdio.h>
int main()
{
	int a;
	char ch;
	scanf("%d",&a);
	if(a%8==1)
	{
	ch='l';
	}
	else if(a%8==4)
	{
	ch='h';
	}
	else if(a%8==2)
	{
	ch='m';
	}
	else if(a%8==5)
	{
	ch='y';
	}
	else if(a%8==3)
	{
	ch='u';
	}
	else if(a%8==6)
	{
	ch='o';
	}
	else if(a%7==0 || a%7==8)
	{
	ch='s';
	}
	else if(a%8==0 )
	{
	ch='p';
	}
	switch(ch)
	{
		case 'l':
			printf("%dLB",a+3);
			break;
		case 'h':
			printf("%dLB",a-3);
			break;
		case 'm':
			printf("%dMB",a+3);
			break;
		case 'y':
			printf("%dMB",a-3);
			break;
		case 'u':
			printf("%dUB",a+3);
			break;
		case 'o':
			printf("%dUB",a-3);
			break;
		case 's':
			printf("%dSU",a+1);
			break;
		case 'p':
			printf("%dSL",a-1);
			break;
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int date,month,year,a,b,c,day,d,s=0;
	scanf("%d %d %d",&date,&month,&year);
	if(date>=1 && date<=31 && month>=1 && month<=12)
	day=(date+=month<3?year--:year-2,23*month/9+date+4+year/4-year/100+year/400)%7;
	switch(day)
	{
		case 0:
			printf("Sunday");
			break;
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		}
	return 0;
		
}
#include<stdio.h>
int main()
{
	int a[150],n,i,k,b,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<n;i++)
		if(a[i]==k)
			sum++;
		else{
		}
	printf("sum is %d",sum);
}*/



/*#include<stdio.h>
int main()
{
	int a,i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(j=i;j>0;j--)
		{
			printf(" %c",(j+64));
		}
		for(j=2;j<=i;j++)
		{
			printf(" %c",(j+64));
		}
		printf("\n");
	}
}*/

/*#include<stdio.h>
#include<math.h>
int main()
{
	int a,b=-2.78,c,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("%d\n%d",trunc(b),floor(b));
}*/
/***#include<stdio.h>
int main()
{
	int n,i,j,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(m=1;m<=n-i;m++)
		{
			printf(" ");
		}
		for(j=0;j!=2*i-1;j++)
		{
			printf("%c",(64+j));
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",(j+64));
		}
		printf("\n");
		
	}
}

#include<stdio.h>
int main()
	{
		int a,i,j,n;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(a=1;a<=n-i;a++)
			{
				printf(" ");
			}
			for(j=i;j>0;j--)
				{
					printf("%c",(64+j));
				}
			for(j=2;j<=i;j++)
				{
					printf("%c",(j+64));
				}
		
			printf("\n");
		}
	}

#include<stdio.h>
int main()
{
	int a,b,c,d,e,i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if(i=1)
			printf("b");
		}
		
		printf("\n");
	}
	
}
#include<stdio.h>
int main()
{
	int a,b,i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(a=1;a<n-1;a++)
		{
			if(j>=n-(i*1)&&(j<=n+(i-1)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
#include<stdio.h>
int main()
{
	char ch;
	char a[20][20];
	printf("enter i or I");
	scanf("%c",&ch);
	printf("\n\n\n");
	int i,j,k;
	switch(ch)
	{
	/*	case 'I':
		case 'i':
			for(i=0;i<8;i++)
			{
				if(i==0||i==7)
				{
				for(j=0;j<11;j++)
				printf("\x03");
				printf("\n");
				}
			else
			{
				printf("     \x03\n");
			}
			}
			printf("\n\n\n");
		case 'i':
			for(i=0;i<10;i++)
			{
				for(j=0;j<12;j++)
				{
					a[i][j]='\x03';
				}
				}
				for(i=0;i<2;i++)
				a[i][5]=' ';
				for(i=2;i<10;i++)
				{
					for(j=0;j<i-1;j++)
					a[i][j]=' ';
				}
				for(i=2;i<10;i++)
				{
					for(j=10;j>11-i;j--)
					a[i][j]=' ';
				}
				for(i=0;i<10;i++)
				{
					for(j=0;j<11;j++)
					printf("%c",a[i][j]);
					printf("\n");
				}
			
		case 'u':
				for(i=0;i<8;i++)
				{
					if(i!=7)
						printf("\x03");
					else
					{
						for(j=0;j<11;j++)
						printf("\x03");
					}
					printf("\n");
					}
				}
				return 0;
			} 
			
#include<stdio.h>
int main()
{
	int a[100]={1,2,3,4,5},k,i,j,n,y;
	scanf("%d%d",&n,&y);
	for(k=n-1;k>=y-1;k--)
	{
		a[k+1]=a[k];
	}
	for(k=0;k<=n;k++)
	{
		printf("%d ",a[k]);
	}

}

#include<stdio.h>
int main()
{
	int i,j,n,g,p;
	int a[6]={1,3,4,5,6,7};
	printf("{");
	for(i=0;i<5;i++)
		printf(" %d, ",a[i]);
	printf("%d }",a[5]);
	printf("enter the number");
	scanf("%d",&n);	
	printf("enter the position");
	scanf("%d",&p);

}
#include<stdio.h>
int main()
{
	int a[4]={1,2,54,3},i,j,l=0,k;
	for(i=0;i<4;i++)
	{
		for(j=1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				a[i];
			}
			else
			{
				k=a[i];
				a[j]=a[i];
				a[i]=k;
			}
					printf("%d ",a[i]);

		}
	}
}

	
	///DELETE AN ELEMENT IN AN ARRAY///		
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number of elements in the arrays\n");
	scanf("%d",&n);
	int a[n];
	int b=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array a = {");
	for(i=0;i<n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d}",a[b]);
	printf("\nenter the position and number");
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	if(n1<n+1){
	for(i=n1-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("array a after deleting an element = {");
	for(i=0;i<n-1;i++)
	{
		printf("%d,",a[i]);
	}printf("0}");
    }
    else
    {
    	printf("entered position is invalid");
	}
	return 0;
	
}		
						////INSERTING AN ELEMENT AND DELETING THE EXISTING ONE////
#include<stdio.h>
int main()
{
	int n,y,i;
	printf("enter the number of elements in the arrays\n");
	scanf("%d",&n);
	y=n;
	int a[n];
	int b=n-1;
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array a = {");
	for(i=0;i<n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d}",a[b]);
	printf("\nenter the position and number");
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	if(n1<n+1){
	for(i=n;i>=n1;i--)
	{
		a[i]=a[i-1];
		a[n1-1]=n2;
		n++;
	}
	
	printf("array a after inserting an element = {");
	for(i=1;i<y;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d}",a[y]);
    }
    else
    {
    	printf("entered position is invalid, please enter a position from 1 to %d",n);
	}
	return 0;
	
}		*/
/*#include<stdio.h>

void main() {
   static int i = 1;
   if (i <= 10) {
      printf("%d", i++);
      main();
}
}


	*/		
			
	
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
// You are using GCC
#include<stdio.h>
void BMI();
int main()
{
    BMI();

    
}
void BMI()
{
    int a;
    double b,k;
    char j;
    scanf("%d %lf",&a,&b);
    k=a/(b*b);
    if(k<18.5)
        printf("U");
    else if(k<25.0 && k>=18.5)
        printf("N");
    else if(k<30.0 && k>=25.0)
        printf("H");
    else
        printf("o");
}
*/

#include<stdio.h>
void operation(int arr[][2]);
int main()
{
    int i,j;
    int arr[4][2];
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    operation(arr);
}
void operation(int a[4][2])
{
    auto int i,j;
    int add=0,sub=0,mul=0,divi=0;
    for(i=0;i<4;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		divi=(a[0][0])/(a[0][1]);
    		mul=(a[1][0])*(a[1][1]);
    		sub=(a[2][0])-(a[2][1]);
    		add=(a[3][0])+(a[3][1]);
    	}
    }
    printf("%d ",add);
    printf("%d ",sub);
    printf("%d ",mul);
    printf("%d ",divi);
}
