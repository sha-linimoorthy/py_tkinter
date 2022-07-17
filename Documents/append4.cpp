#include<stdio.h>
int main()
{
	FILE *s,*t;
	char c;
	s=fopen("student.txt","r");
	t=fopen("samole.txt","w");
	while(1)
	{
		c=fgetc(s);
		if(c!=EOF)
		{
			fputc(c,t);
		}
		else
		{
			break;
		}
		fclose(s);
		fclose(t);
		return 0;
	}
	
}
