/*#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("letter");
	}
	else if(ch<=0 && ch>=9)
	{
		printf("digit");
	}
	else
	{
		printf("special c");
		
	}
	return 0;
	
}
*/
/*#include<stdio.h>
int main()
{
	int choice,r,l,w,b,h;
	float area;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			scanf("%d",&r);
			area=3.14*r*r;
			break;
		case 2:
			scanf("%d%d",&l,&w);
			area=l*w;
			break;
		case 3:
			scanf("%d%d",&b,&h);
			area=(b*h)/2;
	}
	printf("%.2f",area);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int m;
	char n[50];
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("Month have 31 days");
			break;
		case 2:
			printf("The 2nd month is february and have");
			break;

		case 3:
			printf("Month have 30 days");
			break;
		case 4:
			printf("Month have 30 days");
			break;
		case 5:
			printf("Month have 31 days");
			break;
		case 6:
			printf("Month have 31 days");
			break;
		case 7:
			printf("Month have 30 days");
			break;
		case 8:
			printf("Month have 31 days");
			break;
		case 9:
			printf("Month have 30 days");
			break;
		case 10:
			printf("Month have 31 days");
			break;	
		case 11:
			printf("Month have 30 days");
			break;
		case 12:
			printf("Month have 31 days");
			break;
		
						}
return 0;
	
}
