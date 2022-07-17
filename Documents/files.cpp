/*#include<stdio.h>
int main()
{
	FILE *p;
	p=fopen("student.txt","r");
	while(1)
	{
		char ch;
		ch=fgetc(p);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
}
*/
#include<stdio.h>
int main()
{
	unsigned char;
	FILE *fpr;
	fpr=fopen("sample.txt","r");
	while(ch=getc(fpr)!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fpr);
}
