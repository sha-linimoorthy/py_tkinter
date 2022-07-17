/*#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	scanf("%d %d",&a,&b);
	printf("enter the operation");
	scanf("%s",&ch);
	switch(ch)
	{
	case '+':
		printf("%d",(a+b));
		break;
	case '-':
		printf("%d",(a-b));
		break;
	case '*':
		printf("%d",(a*b));
		break;
	case '/':
		printf("%d",(a/b));
		break;
	}
}


#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	int ch;
	scanf("%d %d",&a,&b);
	printf("enter the operation 1 for add, 2 for sub, 3 for *,4 for /");
	scanf("%d",&ch);
	c=a+b;
	e=a-b;
	d=a*b;
	f=a/b;
	switch(ch)
	{
	case 1:
		printf("%d",c);
		break;
	case 2:
		printf("%d",e);
		break;
	case 3:
		printf("%d",d);
		break;
	case 4:
		printf("%d",f);
		break;
	}
}

#include<stdio.h>
int main()
{
	int a;
	int c;
	scanf("%d",&a);
	c=(a%2==0)?printf("even"):printf("odd");
}
 
 #include<stdio.h>
 int main()
 {
 	int a,fact=1;
 	scanf("%d",&a);
 	int i;
 	for(i=1;i<=a;i++)
 	{
 		fact=fact*i;
	 }
	 printf("%d",fact);
 	
 }
 #include<stdio.h>
 int main()
 {
 	int a,fact=1;
 	scanf("%d",&a);
 	int i=1;
 	while(i<=a)
 	{ 		fact=fact*i;
		 i++;	
	 }
	 printf("%d",fact);
 }
 */
 #include<stdio.h>
 int main()
 {
 	int a,fact=5;
 	scanf("%d",&a);
 	int i;
 	do{
 		fact=fact*i;
 		printf("5 * %d = %d\n",i,fact);
 		i++;
	 }while(i<=a);

 }
