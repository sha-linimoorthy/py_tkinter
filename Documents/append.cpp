#include<stdio.h>
#include<stdlib.h>
/*
int main()
{
	FILE *fptr;
	char text[1234567];
	fptr=fopen("student.txt","a");
	if(fptr==NULL)
	{
		printf("file does not exist");
		exit(1);
	}
	printf("\n enter the data to append");
	fgets(text,1234567,stdin);
	fputs(text,fptr);
	fclose(fptr);
	return 0;
}*/
int main()
{
	FILE *s,*t;
	char c;
	s=fopen("student.txt","a");
	t=fopen("samole.txt","w");
	while(1)
	{
		c=fgetc(s);
		if(c==EOF)
		{
			break;
		}
		else
		{
			fputc(c,t);
		}
		fclose(s);
		fclose(t);
		return 0;
	}
	
}
