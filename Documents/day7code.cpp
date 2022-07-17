#include<stdio.h>
int main()
{
	char a;
	int b,c,d,e,f,g;
	float r;
	scanf("%c%d%d",&a,&b,&c);
	d=c-b;
	if(a=='A')
	{
		{
			if(d>15)
			{
			e=d-15;
			f=15*20;
			g=e*15;
			r=50+g+f;
			printf("%f",r);
			}
			else
			{
			r=50+(d*20);
			printf("%f",r);
			}
		}
			
	}
	else
	{
		if(d>15)
		{
		e=d-15;
		f=15*15;
		g=e*12;
		r=40+g+f;
		printf("%f",r);
		}
		else
		{
			r=40+(d*20);
			printf("%f",r);
		}
	}
	return 0;
}
