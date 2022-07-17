/* pass percentage */
#include<stdio.h>
int main()
{
	int n,i,t,y,c=0;
	printf("number of students");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nenter the marks");
		scanf("%d",&t);
		if(t>=50)
		{
			printf("you passed with %d percentage",t);
		}
		else
		{printf("you have failed");
		}
}
	printf("\n SHALINI \n 21ADR046");
	return 0;
}

