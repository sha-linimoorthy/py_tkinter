/* DISPLAY SERIES 7,-14,21,-28,35,-42,......N*/
#include<stdio.h>
#include<string.h>
int main()
{
int a,n;
printf(" enter the value of n");
scanf("%u",&n);
for(a=0;a<=100;a=*(a+7))
{
	printf("\n %u",a);
}
printf("\n SHALINI \n 21ADR046");
return 0;
}



