#include<stdio.h>
int main()
{
	FILE *fptr;
	char text[1234567];
	fptr=fopen("student.txt","a");
	if(fptr==NULL)
	{
		printf("file does not exist");
	}
	printf("\n enter the data to append");
	fgets(text,1234567,stdin);
	fputs(text,fptr);
	fclose(fptr);
	return 0;
}

