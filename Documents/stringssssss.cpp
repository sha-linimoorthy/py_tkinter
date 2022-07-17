/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
#include <stdio.h>
void cpy(char *s,char*t);
int main()
{
    char str[123],str1[123];
    scanf("%[^\n]s",str);
    cpy(str,str1);
    printf("%s\n%s",str,str1);
}
void cpy(char *p,char *q)
{
    int i=0;
    while(p[i]!='\0')
    {
        q[i]=p[i];
        i++;
    }
    q[i]='\0';
}

#include<stdio.h>
#include<string.h>
int main()
{
    char *str1="KONGU";
    char *str2,*f;
    f= strcpy(str2,str1);
    printf("%s",f);
    return 0;
}*/
#include<stdio.h>
struct dist
{
	int feet;
	int inch;
	
}d1,d2;
int main()
{
	int d3,d4,h,k;
	scanf("%d %d %d %d",&d1.feet,&d1.inch,&d2.feet,&d2.inch);
	printf("%d feet %d inch \n%d feet %d inch\n",d1.feet,d1.inch,d2.feet,d2.inch);
	d3=d1.feet+d2.feet;
	d4=d1.inch+d2.inch;
	if(d4>=12)
	{
		k=d4/12;
		h=d4%12;
	}
	printf("%d %d",(k+d3),k);
	
	
	
}
